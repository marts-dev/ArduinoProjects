#define PRES_PIN A0
#define RED_PIN 8
#define GREEN_PIN 9
#define ONBOARD_LED 13
int lightVal;
int delayTime=250;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(PRES_PIN, INPUT);
  pinMode(ONBOARD_LED, OUTPUT);
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  digitalWrite(ONBOARD_LED,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal=analogRead(PRES_PIN);
  Serial.println(lightVal);
  delay(delayTime);
  if (lightVal <= 30) {
    digitalWrite(RED_PIN, HIGH);
    digitalWrite(GREEN_PIN, LOW);
  } else {
    digitalWrite(RED_PIN, LOW);
    digitalWrite(GREEN_PIN, HIGH);
  }
}
