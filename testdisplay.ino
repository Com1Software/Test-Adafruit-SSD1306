#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


Adafruit_SSD1306 display = Adafruit_SSD1306(128, 32);

void setup() {
  Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); 
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.print("Throtle    Steering");
  display.setCursor(20,10);
  display.print("100");
 display.setCursor(80,10);
  display.print("100");
  display.display();
}

void loop() {
    delay(10);
  display.display();
}
