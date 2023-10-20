#include <Arduino.h>
#include "uuui_menu.h"
#include "string.h"




void push_B();
uuui u;
// char a[] = "test";
String a[] = {"test1", "test2", "test3"};

void setup() {

    u.init(a);


    attachInterrupt(digitalPinToInterrupt(10),push_B,FALLING);
    Serial.begin(9600);
    Serial.println("setup");
    }

void loop() {
    Serial.println("setup");
    delay(1000);    
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

