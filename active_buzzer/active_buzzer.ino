#define POT_PIN A0
#define BUZZ_PIN 8
int potValue=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(POT_PIN, INPUT);
  pinMode(BUZZ_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue=analogRead(POT_PIN);
  Serial.println(potValue);
  if (potValue>1000) {
    digitalWrite(BUZZ_PIN, HIGH);
  } else {
    digitalWrite(BUZZ_PIN, LOW);
  }
}
