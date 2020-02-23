int micAinput=3;
int micDinput=4;
int value;


void setup() {
  pinMode(micAinput,INPUT);
  pinMode(micDinput,INPUT);
}

void loop() {
  value=analogRead(micAinput);
  if(value>500){
    digitalWrite(13,HIGH); 
  }else{
    digitalWrite(13,LOW);
  }
  
  if(digitalRead(micDinput==HIGH)){
    digitalWrite(13,HIGH);
  }else{
    digitalWrite(13,LOW);
  }
}
