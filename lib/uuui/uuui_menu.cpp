#include "uuui_menu.h"

void uuui::init(char* array){
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