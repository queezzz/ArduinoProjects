//declare keyboard buttons
int button1 = 0;
int button2 = 0;
int button3 = 0;
int button4 = 0;
int button5 = 0;
int button6 = 0;
int button7 = 0;
int button8 = 0;

//set up pins on arduino accordingly
void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(9, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  
}

void loop() {
  button1 = digitalRead(2);
  button2 = digitalRead(3);
  button3 = digitalRead(4);
  button4 = digitalRead(5);
  button5 = digitalRead(6);
  button6 = digitalRead(9);
  button7 = digitalRead(11);
  button8 = digitalRead(12);

//assign every botton a music note using frequency 
  if (button1 == HIGH){
    tone(13,262);
  }
  else if (button2 == HIGH){
    tone(13,294);
  }
  else if (button3 == HIGH){
    tone(13,330);
  }
  else if (button4 == HIGH){
    tone(13,349);
  }
  else if (button5 == HIGH){
    tone(13,392);
  }
  else if (button6 == HIGH){
    tone(13,440);
  }
  else if (button7 == HIGH){
    tone(13,494);
  }
  else if (button8 == HIGH){
    tone(13,523);
  }
  else{
    noTone(13);
  }
}
