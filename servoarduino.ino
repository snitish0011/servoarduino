// Define the LED pin
const int ledPin = 13;

// Define the servo pin
const int servoPin = 9;

// Create a servo object
#include <Servo.h>
Servo myServo;

// Variable to store the servo position
int servoPosition = 0;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);

  // Initialize the servo pin
  myServo.attach(servoPin);

  // Initialize serial communication
  Serial.begin(9600);
  Serial.println("Enter servo position (0-180):"); // Prompt user
}

void loop() {
  // Blink the LED every 1 second
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);


  //Servo system
  if (Serial.available() > 0) {
  
    servoPosition = Serial.parseInt();
    servoPosition = constrain(servoPosition, 0, 180);

    
    myServo.write(servoPosition);
    Serial.print("Servo position: ");
    Serial.println(servoPosition);
    Serial.println("Enter servo position (0-180):"); 
  }
}