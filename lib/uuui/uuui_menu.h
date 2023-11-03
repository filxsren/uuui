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
        float PIDanmate(int tager);

        struct MenuThings
        {
            /* data */
            int Basic_pxel=10;
            /*cursor things_pxel*/
            int cursorInitPlaceX=3;
            int cursorInitPlaceY=3;
            const int cursorX=119;
            const int cursorY=10;
            /*move block things_pxel*/
            int moveBlockinitPlaceX=123;
            int moveBlockinitPlaceY=3;
            //PID_pxel
            float output=0,error0=0,tager,error1=0,v=0,P=0.07,D=0.04;


        };
        
        MenuThings menuthings;
  
    


};
  class uuui_Show
{
    public:
        void MoveBlock(int x, int y,std::function<void(void)> intRoutine);
        void Menu(int x, int y,std::function<void(void)> intRoutine);
        void cursor(int x,int y,std::function<void(void)> intRoutine);

};