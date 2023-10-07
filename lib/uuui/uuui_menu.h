//#ifndef _UUUI_MENU_H_
#define _UUUI_MENU_H_
#include <U8g2lib.h>

//#endif

class uuui
{
    public:
    void init(String* array);
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