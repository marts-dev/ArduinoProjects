int redPin=9;
int greenPin=8;
int blinkTimes=5;
int delayT=250;
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int j=0;j<blinkTimes; j++) {
    digitalWrite(redPin, HIGH);
    delay(delayT);
    digitalWrite(redPin, LOW);
    delay(delayT);
  }
  for (int j=0;j<blinkTimes; j++) {
    digitalWrite(greenPin, HIGH);
    delay(delayT);
    digitalWrite(greenPin, LOW);
    delay(delayT);
  }
}
