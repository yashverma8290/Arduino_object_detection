#include <LiquidCrystal.h>

// Define LCD pins (for non-I2C LCD)
#define RS 7
#define E 6
#define D4 5
#define D5 4
#define D6 3
#define D7 2

// Define sensor & output pins
#define TRIG_PIN 10   // Ultrasonic sensor TRIG
#define ECHO_PIN 11   // Ultrasonic sensor ECHO
#define MOTOR_PIN 9   // DC Motor (via transistor)
#define LED_PIN 8     // LED

// Initialize LCD (Non-I2C)
LiquidCrystal lcd(RS, E, D4, D5, D6, D7);

void setup() {
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    pinMode(MOTOR_PIN, OUTPUT);
    pinMode(LED_PIN, OUTPUT);

    lcd.begin(16, 2);  // Start LCD with 16x2 size
    Serial.begin(9600); // Start Serial Monitor
}

void loop() {
    long duration;
    int distance;
    
    // Send ultrasonic pulse
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    // Read echo time with timeout
    duration = pulseIn(ECHO_PIN, HIGH, 30000);  // 30ms timeout
    distance = duration * 0.034 / 2;  // Convert to cm

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    if (distance > 2 && distance < 10) {  // If an object is detected within 10 cm
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Object Detected!");

        digitalWrite(MOTOR_PIN, HIGH);  // Start motor
        digitalWrite(LED_PIN, HIGH);    // LED ON (continuous)

    } else {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("No Object");

        digitalWrite(MOTOR_PIN, LOW);  // Stop motor
        digitalWrite(LED_PIN, LOW);    // LED OFF
    }
    
    delay(500);
}
