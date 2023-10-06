#include "uuui_menu.h"

void uuui::init(){
    u8g2.clearBuffer();

    u8g2.drawLine(124,2,124,63);
    u8g2.drawHLine(123,2,3);
    u8g2.drawHLine(123,63,3);

    u8g2.drawRFrame(menuthings.cursorInitPlaceX,menuthings.cursorInitPlaceY,menuthings.cursorX,menuthings.cursorY,2);


    

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