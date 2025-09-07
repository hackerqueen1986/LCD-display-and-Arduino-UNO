#include <LiquidCrystal.h>
const int rs=13;
const int en=12;
const int D4=7;
const int D5=6;
const int D6=5;
const int D7=4;
LiquidCrystal lcd(rs,en,D4,D5,D6,D7)
void setup(){
lcd.begin(16,2);
print("Hi");
void loop(){
}
