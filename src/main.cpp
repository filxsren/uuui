#include <Arduino.h>
#include <U8g2lib.h>
#define LED_PIN PB0
U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0,U8X8_PIN_NONE);


class uuui
{
public:
void init();
void join();
void quit();
void Setcursor(int move);
int cursorPlace();
void Menuloop();

};
void uuui::init(){
    u8g2.clearBuffer();

}
void uuui::join(){

}
void uuui::quit(){

}
void uuui::Setcursor(int move){

}
int uuui::cursorPlace(){
int places = 0;
return places;
}
void uuui::Menuloop(){

}
void push_B();
uuui u;

void setup() {
u.init();
attachInterrupt(digitalPinToInterrupt(PB0),push_B,FALLING);
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

