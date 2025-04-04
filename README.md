# 🚀 Object Detection & Motor Control using Arduino
This project utilizes an Arduino Uno, an ultrasonic sensor, a DC motor, and an LCD display to detect nearby objects and take action accordingly. When an object is detected within a certain distance, the system activates a motor, blinks an LED, and displays a message on the LCD.

# 🖥️ Components Used:
1) Arduino Uno
2) HC-SR04 Ultrasonic Sensor
3) 16x2 LCD Display (Non-I2C)
4) DC Motor (2-Pin)
5) NPN Transistor (for motor control)
6) LED (Indicator)
7) Resistors (1kΩ, others as needed)
8) Breadboard & Jumper Wires
9) External Power Supply (if required)

# 📜 Features:
1) Measures distance using the HC-SR04 ultrasonic sensor.
2) Displays messages on an LCD (16x2) screen.
3) Activates a DC motor when an object is detected within 2-10 cm.
4) Turns on a red LED when an object is detected.
5) Serial output for distance monitoring. 

# 🔌 Wiring Instructions:
1) Component	                  ->      Arduino Pin
2) Ultrasonic Sensor TRIG	    ->     D10
3) Ultrasonic Sensor ECHO	    ->     D11
4) LCD RS, E, D4, D5, D6, D7	  ->     D7, D6, D5, D4, D3, D2
5) LED (via resistor)          ->     D8
6) DC Motor (via transistor)   ->     D9
7) Power & GND	                ->     5V, GND

# ⚡ Setup & Uploading Code:
1) Connect the components as per the schematic.
2) Install the Arduino IDE.
3) Add the LiquidCrystal library (if not installed).
4) Upload code.cpp to the Arduino Uno.
5) Open the Serial Monitor to see distance values.

# 🛠️ Future Improvements:
1) Use an I2C LCD for fewer connections.
2) Adda buzzer for audible alerts.
3) Implement Bluetooth/WiFi for remote monitoring.

# 🎯 Purpose:
This project is useful for automated object detection systems, robotics applications, and proximity-based control mechanisms.

