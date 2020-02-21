int IN1=5;
int IN2=6;

void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
}

void loop() {
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  delay(3000);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  delay(3000);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  delay(3000);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,HIGH);
  delay(3000);
}
