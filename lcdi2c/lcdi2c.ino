#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// lcd(address, kolom, baris)
LiquidCrystal_I2C lcd(0x27,16,2);
//0x27, 0x20, 0x3F

void setup() {
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0); // kolom, baris
  lcd.print("Test,");
  lcd.setCursor(0, 1); // kolom, baris
  lcd.print("LCD I2C");
}

void loop() {
  int t = random(25, 30);
  lcd.setCursor(0, 0);
  lcd.print("Pengukuran");
  lcd.setCursor(0, 1);
  lcd.print("Suhu : ");
  lcd.print(t);
  lcd.print(char(223)); // derajat
  lcd.print("C");
  delay(1000);
}
