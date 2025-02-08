# ServoArduino: Controlling a Servo with Arduino and Built-in LED Feedback

This project demonstrates controlling a servo motor using an Arduino Uno and providing visual feedback with the Arduino's built-in LED.  Input for the servo position is received via the serial monitor.

## Description

The Arduino code reads integer values from the serial monitor (ranging from 0 to 180) and uses these values to set the angular position of a connected servo motor.  Simultaneously, the Arduino's built-in LED (connected to pin 13) blinks at a 1-second interval, providing a simple visual indication that the program is running.

## Hardware

* Arduino Uno
* Servo Motor ( SG90 or MG996R)
* Connecting Wires (for the servo motor)

## Software

* Arduino IDE (Download from: [https://www.arduino.cc/en/software](https://www.arduino.cc/en/software))
* KiCad (for the schematic) (Download from: [https://www.kicad.org/](https://www.kicad.org/))

## Instructions

1. **Arduino Code:**
   * Open the `servoarduino.ino` file in the Arduino IDE.
   * Connect your Arduino Uno to your computer via USB.
   * Select the correct board and port in the Arduino IDE.
   * Upload the code to your Arduino Uno.

2. **Serial Monitor:**
   * Open the Serial Monitor in the Arduino IDE (Tools > Serial Monitor).
   * Set the baud rate to 9600 (this is the baud rate used in the code).

3. **Servo Control:**
   * In the Serial Monitor, type an integer value between 0 and 180 (inclusive) and press Enter. This value corresponds to the desired angle for the servo motor.
   * Observe the servo motor moving to the specified position.

4. **LED Feedback:**
   * The built-in LED on the Arduino Uno will blink every second, confirming that the code is running and processing commands.

## Schematic

The schematic for this project, created using KiCad, is included in this repository as `servoarduino.sch`.  LED  is used . The schematic illustrates the connections between the Arduino and the servo motor and the led .

## Code Explanation

The Arduino code uses the `Servo` library to control the servo motor.  It reads integer values from the serial monitor using `Serial.parseInt()` and maps these values to the servo's angular position using `constrain()` to keep the values within the valid range (0-180).  The `millis()` function is used to create the 1-second blink for the LED without using `delay()`, which would block the servo control.

## Dependencies

* Arduino Servo library (included with the Arduino IDE)

## Author

snitish0011


## Contributing

Contributions are welcome!  Please feel free to submit pull requests or open issues.
