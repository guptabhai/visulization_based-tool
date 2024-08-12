#include <graphics.h>

int main(){


    int gDrive = DETECT;

    int gMode;

    initgraph(&gDrive , &gMode, NULL);

    arc(200 , 200 , 0, 90 ,50);
    line(100 , 100 ,200 ,100);

    getch();
    closegraph();
}