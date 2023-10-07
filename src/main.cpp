#include <Arduino.h>
#include "uuui_menu.h"
#include "string.h"




void push_B();
uuui u;
// char a[] = "test";
String a[] = {"test1"};

void setup() {
u.init(a);


attachInterrupt(digitalPinToInterrupt(10),push_B,FALLING);

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

