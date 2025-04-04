# 🚀 Object Detection & Motor Control using Arduino
This project utilizes an Arduino Uno, an ultrasonic sensor, a DC motor, and an LCD display to detect nearby objects and take action accordingly. When an object is detected within a certain distance, the system activates a motor, blinks an LED, and displays a message on the LCD.

# 🖥️ Components Used:
> Arduino Uno
> HC-SR04 Ultrasonic Sensor
> 16x2 LCD Display (Non-I2C)
> DC Motor (2-Pin)
> NPN Transistor (for motor control)
> LED (Indicator)
> Resistors (1kΩ, others as needed)
> Breadboard & Jumper Wires
> External Power Supply (if required)

# 📜 Features:
> Measures distance using the HC-SR04 ultrasonic sensor.
> Displays messages on an LCD (16x2) screen.
> Activates a DC motor when an object is detected within 2-10 cm.
> Turns on a red LED when an object is detected.
> Serial output for distance monitoring. 

# 🔌 Wiring Instructions:
Component	                  -      Arduino Pin
Ultrasonic Sensor TRIG	    -     D10
Ultrasonic Sensor ECHO	    -     D11
LCD RS, E, D4, D5, D6, D7	  -     D7, D6, D5, D4, D3, D2
LED (via resistor)          -     D8
DC Motor (via transistor)   -     D9
Power & GND	                -     5V, GND

# ⚡ Setup & Uploading Code:
> Connect the components as per the schematic.
> Install the Arduino IDE.
> Add the LiquidCrystal library (if not installed).
> Upload code.cpp to the Arduino Uno.
> Open the Serial Monitor to see distance values.

# 🛠️ Future Improvements:
> Use an I2C LCD for fewer connections.
> Adda buzzer for audible alerts.
> Implement Bluetooth/WiFi for remote monitoring.

# 🎯 Purpose:
This project is useful for automated object detection systems, robotics applications, and proximity-based control mechanisms.

