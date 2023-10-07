#include "uuui_menu.h"

void uuui::init(String* array){
    U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0,U8X8_PIN_NONE);
    u8g2.begin();

    u8g2.clearBuffer();

    u8g2.drawLine(124,2,124,63);
    u8g2.drawHLine(123,2,3);
    u8g2.drawHLine(123,63,3);

    u8g2.drawRFrame(menuthings.cursorInitPlaceX,menuthings.cursorInitPlaceY,menuthings.cursorX,menuthings.cursorY,2);

    u8g2.drawBox(123,1,3,12);


    

}
void uuui::join(){

}
void uuui::quit(){

}
void uuui::Setcursor(int move){

}
int uuui::cursorPlace(){
    return menuthings.cursorInitPlaceX, menuthings.cursorInitPlaceY;
}
void uuui::Menuloop(){

}