int potenPin=A0;
int ledPin=9;

void setup() {
  // put your setup code here, to run once:
  pinMode(potenPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int readVal=analogRead(potenPin);
  float volt = (255./1023.)*readVal;
  Serial.print("Volt: ");
  Serial.println(volt);
  analogWrite(ledPin, volt);
}
