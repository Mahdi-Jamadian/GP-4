#include <graphics.h>
#include <conio.h>
main()
{
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, "C:/TURBOC3/BGI");
    setcolor(BLUE);/*HOME*/
    rectangle(350,350,450,450);
    setcolor(RED);/*WINDOW*/
    rectangle(360,360,390,390);
    setcolor(YELLOW);/*HEAD HOME*/
    line(350,350,400,300);
    setcolor(YELLOW);
    line(450,350,400,300);
    setcolor(LIGHTGRAY);/*OUT*/
    line(365,335,365,300);
    setcolor(LIGHTGRAY);
    line(375,325,375,300);
    setcolor(WHITE);/*DOOR*/
    rectangle(415,420,430,450);
    getch();
    closegraph();
    return 0;
}
