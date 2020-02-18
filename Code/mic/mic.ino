int micinput=3;
int value;


void setup() {
  pinMode(micinput,INPUT);
}

void loop() {
  value=analogRead(micinput);
  if(value>500){
    digitalWrite(13,HIGH); 
  }else{
    digitalWrite(13,LOW);
  }
}
