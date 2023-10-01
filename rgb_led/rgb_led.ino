
#define R_PIN 10
#define G_PIN 9
#define B_PIN 8

String myColor;
String prompt="What color do you like?";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(R_PIN, OUTPUT);
  pinMode(G_PIN, OUTPUT);
  pinMode(B_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(prompt);
  while(Serial.available()==0){
  }
  myColor = Serial.readString();

  if (myColor == "red"){
    digitalWrite(R_PIN, HIGH);
    digitalWrite(G_PIN, LOW);
    digitalWrite(B_PIN, LOW);
  } else if (myColor == "green"){
    digitalWrite(R_PIN, LOW);
    digitalWrite(G_PIN, HIGH);
    digitalWrite(B_PIN, LOW);
  } else if (myColor == "blue"){
    digitalWrite(R_PIN, LOW);
    digitalWrite(G_PIN, LOW);
    digitalWrite(B_PIN, HIGH);
  } else if (myColor == "violet"){
    digitalWrite(R_PIN, HIGH);
    digitalWrite(G_PIN, LOW);
    digitalWrite(B_PIN, HIGH);
  } else if (myColor == "yellow"){
    digitalWrite(R_PIN, LOW);
    digitalWrite(G_PIN, HIGH);
    digitalWrite(B_PIN, HIGH);
  } else {
    digitalWrite(R_PIN, LOW);
    digitalWrite(G_PIN, LOW);
    digitalWrite(B_PIN, LOW);
  }
  
}
