int IN1=5;
int IN2=6;
int IN3=7;
int IN4=8;
int ENA=9;
int ENB=10;
int power=0;
int add=1;

void A_motor(){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
}
void B_motor(){
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}

void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  A_motor();
  B_motor();
}

void loop() {
  if(add==1){
    power+=1;
    if(power>500){
      add=-1;
    }
  }else{
    power-=1;
    if(power<50){
      add=1;
    }
  }
  analogWrite(ENA,power);
  analogWrite(ENB,power);
}
