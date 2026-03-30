#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  Serial.begin(115200);
  delay(3000);

  Serial.println("avant init");
  tft.init();
  Serial.println("apres init");

  tft.setRotation(1);
  Serial.println("apres rotation");

  tft.fillScreen(TFT_RED);
  Serial.println("apres fill");
}

void loop() {}