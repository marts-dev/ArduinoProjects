#include <Servo.h>
#define SERVO_PIN 8
int servoPos=0; // 0-degrees
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(SERVO_PIN);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("What angle for the servo?");
  while (Serial.available() == 0) {
    
  }
  servoPos = Serial.parseInt();
  myServo.write(servoPos);
}
