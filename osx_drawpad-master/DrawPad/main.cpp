#include "DrawPad.hpp"
#include <math.h>

void DrawMain()
{
    Clear(kColorBlack);

    DrawLine(-320, 0, 319, 0, kColorGray);
    DrawLine(0, -240, 0, 239, kColorGray);
    // なんかよくわからんが描画できない
    for (int i = 0; i < 5; i++) {
//        FillCircle(i*100-200, -190, 30, kColorBlue, M_PI/6+i*M_PI/2, -M_PI/6+i*M_PI/2);
    }
    
    for (int x = -100; x <= 100; x+=10) {
//        DrawCircle(x, 0, 150, kColorBlue);
    }
    
    for (int x = -250; x < -50; x+=10) {
       // Paint(x+5, 0, kColorDarkBlue, kColorBlue);
    }
    for (int x = 50; x < 250; x+=10) {
        //Paint(x+5, 0, kColorDarkBlue, kColorBlue);
    }
    
    vec2 center = vec2(10, 10);
    int cr = 100;
    for(float x = -1200; x < 1200; x+=0.1){
        for(float y = -1200; y < 1200; y+=0.1){
            if((x - center.x)*(x - center.x) + (y - center.y)*(y - center.y) == cr*cr){
                DrawPoint(x, y, kColorRed);
            }
        }
    }

    /*
    DrawText("Hello, world!!", -12*14/2, 44, kColorWhite);
    Sleep(0.5f);
    DrawText("Hello, world!!", -12*14/2, 22, kColorYellow);
    Sleep(0.5f);
    DrawText("Hello, world!!", -12*14/2, 0, kColorGreen);
    Sleep(0.5f);
    DrawText("Hello, world!!", -12*14/2, -22, kColorBlue);
    Sleep(0.5f);
    DrawText("Hello, world!!", -12*14/2, -44, kColorRed);
    Sleep(0.5f);
    DrawText("Hello, world!!", -12*14/2, -66, kColorGray);
     */
}

