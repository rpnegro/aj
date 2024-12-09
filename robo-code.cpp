void setup()
{
    pinMode(5, OUTPUT);
    pinMode(16, OUTPUT);
pinMode(17, OUTPUT);
pinMode(18, OUTPUT);
}


void loop(){


 adelante();
 delay(1000);
backwards();
delay(1000); 
}


void adelante(){
  
  digitalWrite(5, HIGH);//MOTOR 
  digitalWrite(16, 0);
  digitalWrite(17, HIGH);
  digitalWrite(18, LOW);
}

void backwards(){
    digitalWrite(5, 0);
  digitalWrite(16, 1);
  digitalWrite(17, 0);
  digitalWrite(18, HIGH);
}
