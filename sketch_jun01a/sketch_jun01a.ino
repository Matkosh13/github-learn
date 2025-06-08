#include <Adafruit_GFX.h>
#include <MCUFRIEND_kbv.h>

MCUFRIEND_kbv tft;

void setup() {
  uint16_t ID = tft.readID();
  if (ID == 0xD3D3) ID = 0x9341;
  tft.begin(ID);
  tft.setRotation(1);

  uint16_t color = tft.color565(200, 100, 100);

  tft.fillScreen(color);

  tft. setCursor(20, 20);

  uint16_t text_color = tft.color565(400, 100, 0);
//  tft.setTextColor(text_color);
//
//  tft.setTextSize(4);
//  tft.print("SANIA TI TYT? SANIA TI SVARSHIK??????????? DA NET VIDELI CHTO OTVETESH OTVET PLS OTVET PLS");

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


uint16_t rect_color = tft.color565(150, 0, 0);
tft.fillRect(40, 20, 100, 100, rect_color);
uint16_t rect_color1 = tft.color565(0, 150, 0);
tft.fillRect(150, 20, 100, 100, rect_color1);
uint16_t rect_color2 = tft.color565(0, 0, 150);
tft.fillRect(40, 20, 100, 100, rect_color2);
uint16_t rect_color3 = tft.color565(150, 150, 0);
tft.fillRect(150, 130, 100, 100, rect_color3);
}

void loop() {


}
