#include "uuui_menu.h"

void uuui::init(String* array){
    U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0,U8X8_PIN_NONE);
    u8g2.begin();

    u8g2.clearBuffer();
    /*cursor*/
    u8g2.drawRFrame(menuthings.cursorInitPlaceX,menuthings.cursorInitPlaceY,menuthings.cursorX,menuthings.cursorY,2);

    /*font*/
    u8g2.setFont(u8g2_font_4x6_mf);
    /*moveBlock*/
    int menuListSize = sizeof(array)/sizeof(*array);
    /*show*/
    for(int i=0; i<menuListSize; i++){
    u8g2.drawStr(4,11+menuListSize*i,array[i].c_str());
    }
    Serial.println(menuListSize);
    
    u8g2.sendBuffer();
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
    PIDanmate(50);

}
float uuui::PIDanmate(int tager){ 
  /* error1=tager-v;
  output=output+error1*P+((error1-error0)/0.15)*D;
  v=v+output;
  Serial.println(v);
  error0=error1;*/
  if(menuthings.error0!=menuthings.error1){
  menuthings.error1=tager-menuthings.v;
  menuthings.output=menuthings.output+menuthings.error1*menuthings.P+((menuthings.error1-menuthings.error0)/0.01)*menuthings.D;
  menuthings.v=menuthings.v+menuthings.output;
  menuthings.error0=menuthings.error1;  
  }
  

  return menuthings.v;

}