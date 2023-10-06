#include <Arduino.h>
#include "uuui_menu.h"





void push_B();
uuui u;
char a[] = {'test1','test2'};


void setup() {
u.init(a);


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

