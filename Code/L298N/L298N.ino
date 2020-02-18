int IN1=5;
int IN2=6;
int IN3=7;
int IN4=8;
int ENA=9;
int ENB=10;

void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
}

void A_motor(){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
}

void B_motor(){
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}

void loop() {
  
}
