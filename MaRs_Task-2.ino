#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); 
int before;
int current=0;
int count=0;
void setup() {
  lcd.init();
  pinMode(5,INPUT);
  Serial.begin(9600);

}

void loop() {
  before=current;
  lcd.backlight();
  lcd.setCursor(5,0);
  current=digitalRead(5);
  if(before==0 && current==1){
    count=count+1;
    Serial.println(count);
  }
  lcd.print(count);
}
