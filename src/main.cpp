#include <Arduino.h>
#include "uuui_menu.h"
#include "string.h"




void push_B();
uuui u;
uuui_Show show;
// char a[] = "test";
String a[] = {"test1", "test2", "test3"};

void setup() {

    

    
    attachInterrupt(digitalPinToInterrupt(10),push_B,FALLING);
    Serial.begin(9600);
    
    }

void loop() {
    delay(1000);
    Serial.println("setup");
    u.init(a);    
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

