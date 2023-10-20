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
        int Basic_pxel=10;
        /*cursor things*/
        int cursorInitPlaceX=3;
        int cursorInitPlaceY=3;
        const int cursorX=119;
        const int cursorY=10;
        /*move block things*/
        int moveBlockinitPlaceX=123;
        int moveBlockinitPlaceY=3;


    };
    MenuThings menuthings;
    


};