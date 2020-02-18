int LPin=3;
int RPin=2;
int LEDPin=5;

int value=0;
int Rstate=0;
int Lstate=0;

void setup(){
  pinMode(LEDPin, OUTPUT);
  pinMode(LPin, OUTPUT);
  pinMode(RPin,INPUT);
  Serial.begin(9600);
}
void loop(){
  analogWrite(LEDPin,value);
  if(digitalRead(RPin)==HIGH){
    if(Rstate==0){
      value+=10;
      if(value>=255){
         value=255; 
      }
      Rstate=1;
    }
  }else{
    Rstate=0;
  }
  if(digitalRead(LPin)==HIGH){
    if(Lstate==0){
      value-=10;
      if(value<=0){
        value=0; 
      }
      Lstate=1;
    }
  }else{
    Lstate=0;
  }
  Serial.println(value);
}
