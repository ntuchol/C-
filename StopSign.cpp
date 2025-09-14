#include <graphics.h>
#include <conio.h> 

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); 
    
    setcolor(RED);
    int octagon_points[] = {
        100, 50,  
        150, 50,  
        180, 80, 
        180, 130, 
        150, 160, 
        100, 160, 
        70, 130, 
        70, 80,   
        100, 50   
    };
    drawpoly(8, octagon_points); 
        line(100, 50, 150, 50);
        line(150, 50, 180, 80);

    setfillstyle(SOLID_FILL, RED);
    floodfill(125, 100, RED); 
    
    setcolor(WHITE);
    settextstyle(GOTHIC_FONT, HORIZ_DIR, 4); 
    outtextxy(100, 90, "STOP"); 

    getch(); 
    closegraph();
    return 0;
}
