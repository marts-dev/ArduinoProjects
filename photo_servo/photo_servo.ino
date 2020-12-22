#include <Servo.h>
#define SERVO_PIN 8
#define PHOTO_PIN A0
int servoPos=0; // 0-degrees
int lastServPos=0;
int photo_val=0;
unsigned long lastDebounce=0;
unsigned long debounceDelay=2000;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PHOTO_PIN, INPUT);
  myServo.attach(SERVO_PIN);
}

void loop() {
  if (millis()-lastDebounce > debounceDelay) {
    lastDebounce=millis();
    photo_val=analogRead(PHOTO_PIN);
    servoPos = (-180.*photo_val/700)+180.;
    if (servoPos < 0) {
      servoPos=0;
    } else if (servoPos > 180) {
      servoPos=180;
    }
    //Serial.println(servoPos);
    Serial.println(photo_val);
    if (lastServPos != servoPos) {
      myServo.write(int(servoPos));
      lastServPos=servoPos;
    }
  }
}
