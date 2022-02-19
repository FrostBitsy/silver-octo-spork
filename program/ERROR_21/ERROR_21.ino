int button= 2;
int nilaitombol = 1;
int count = 1;
int count_sebelumnya = 1;
int led= 13;

void setup(){
pinMode(button, INPUT);
pinMode(led, OUTPUT);
}

void loop(){
  nilaitombol = digitalRead(button);
  switch(nilaitombol){
    case 0: count++;
    switch(count){
      case 1:digitalWrite(led, HIGH); count_sebelumnya=1; count=0; break;
      case 2:digitalWrite(led, LOW); count_sebelumnya=2; count=1; break;
    }
    break;
    case 1:
    switch(count_sebelumnya){
      case 1: digitalWrite(led, HIGH); count=1; count_sebelumnya=1; break;
      case 2: digitalWrite(led, LOW); count=0; count_sebelumnya=2; break;
    }
    break;
  }
}
