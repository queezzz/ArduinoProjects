#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000
};

byte heart[8] = { 
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000,
  0b00000
  };

byte sun[8] = { 
  0b00100,
  0b10001,
  0b01110,
  0b11011,
  0b01110,
  0b10001,
  0b00100,
  0b00000
  };

byte dot[8] = { 
  0b00100,
  0b10001,
  0b00100,
  0b01110,
  0b00100,
  0b10001,
  0b00100,
  0b00000
  };

void setup() {
  lcd.createChar(0, smiley);
  lcd.createChar(1, heart);
  lcd.createChar(2, sun);
  lcd.begin(16, 2);  
  lcd.write(" ");
  lcd.write(byte(2));
  lcd.print(" 2020 Plans ");
  lcd.write(byte(2));
  //lcd.setCursor(0,1);

  
}

void loop() {
  //lcd.noDisplay();
  //delay(250);
  lcd.display();
  //delay(250);
 }
