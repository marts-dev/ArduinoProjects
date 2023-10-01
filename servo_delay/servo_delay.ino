#include <Servo.h>
#define SERVO_PIN 8
int servoPos=0; // 0-degrees
unsigned long prevMillis = 0;
const unsigned long interval = 60000;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(SERVO_PIN);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentMillis = millis();
  myServo.write(servoPos);
  if (currentMillis - prevMillis >= interval){
    prevMillis = currentMillis;
    Serial.println("Feeding fish");
    servoPos = 180;
    myServo.write(servoPos);
    delay(1500);
    Serial.println("Closing feeder");
    servoPos = 0;
  }
}
