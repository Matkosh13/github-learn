#include <Adafruit_GFX.h>
#include <MCUFRIEND_kbv.h>
MCUFRIEND_kbv tft;

//uint16_t blue = tft.color565(0, 200, 0);
//uint16_t green = tft.color565(0, 0, 200);
//
void setup() {
  int ID = tft.readID();
  tft.begin(ID);
  tft.setRotation(3);
}

void loop() {
  int r = random(0, 256);
  int g = random(0, 256);
  int b = random(0, 256);
  tft.fillScreen(tft.color565(r, g, b));

  int r1 = random(0, 256);
  int g1 = random(0, 256);
  int b1 = random(0, 256);
  int text = random(1, 11);
  tft.setCursor(10, 50);
  tft.setTextColor(tft.color565(r1, g1, b1));
  tft.setTextSize(text);
  tft.print("Monobank");
  delay(1000);
}

















//  uint16_t line_color = tft.color565(0, 400, 100);
//  tft.drawLine(60, 60, 120, 120, line_color);
//  uint16_t rect_color = tft.color565(150, 500, 0);
//  tft.fillRect(40, 40, 100, 50, rect_color);
//  uint16_t circle_color = tft.color565(0, 400, 100);
//  tft.drawCircle(60, 60, 120, circle_color);
//  uint16_t routRect_color = tft.color565(150, 500, 0);
//  tft.fillRoundRect(40, 100, 100, 50, 150, routRect_color);
// uint16_t Triangle_color = tft.color565(150, 500, 0);
//  tft.fillTriangle(40, 100, 100, 50, 150, 100, Triangle_color);


//  uint16_t rect_color = tft.color565(150, 0, 0);
//  tft.fillRect(40, 20, 100, 100, rect_color);
//  uint16_t rect_color1 = tft.color565(0, 150, 0);
//  tft.fillRect(150, 20, 100, 100, rect_color1);
//  uint16_t rect_color2 = tft.color565(0, 0, 150);
//  tft.fillRect(40, 20, 100, 100, rect_color2);
//  uint16_t rect_color3 = tft.color565(150, 150, 0);
//  tft.fillRect(150, 130, 100, 100, rect_color3);
