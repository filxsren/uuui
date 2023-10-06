#include <Arduino.h>
#include <U8g2lib.h>
#include "uuui_menu.h"
U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0,U8X8_PIN_NONE);




void push_B();
uuui u;


void setup() {
u.init();

attachInterrupt(digitalPinToInterrupt(10),push_B,FALLING);
u8g2.begin();
}

void loop() {
if(u.cursorPlace()==0){
u.quit();

u.join();
}
u.Menuloop();
}

void push_B(){
//触发按键
u.Setcursor(1);
}

