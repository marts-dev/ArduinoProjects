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
  if (potValue==0){
    digitalWrite(BUZZ_PIN, LOW);
  } else {
    float com_delay = (940./1023.)*potValue+60;
    digitalWrite(BUZZ_PIN, HIGH);
    delayMicroseconds(com_delay);
    digitalWrite(BUZZ_PIN, LOW);
    delayMicroseconds(com_delay);
  }
}
