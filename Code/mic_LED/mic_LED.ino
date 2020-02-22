int micAinput=3;
int led=9;

int value;
int light;


void setup() {
  pinMode(micAinput,INPUT);
}

void loop() {
  value=analogRead(micAinput);
  light=map(value,0,1023,0,511);
  analogWrite(led,light);
}
