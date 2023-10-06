#ifndef _UUUI_MENU_H_
#define _UUUI_MENU_H_
#endif
#include <U8g2lib.h>
U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0,U8X8_PIN_NONE);
class uuui
{
public:
void init(char* array);
void join();
void quit();
void Setcursor(int move);
int cursorPlace();
void Menuloop();

struct MenuThings
{
    /* data */
    int cursorInitPlaceX=3;
    int cursorInitPlaceY=3;
    const int cursorX=57;
    const int cursorY=12;


};
MenuThings menuthings;


};