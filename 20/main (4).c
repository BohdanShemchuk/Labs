#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    
    int x = 100, y = 100, radius = 50, angle = 0;
    
    while (!kbhit()) {
        cleardevice();
        circle(x, y, radius);
        int new_x = x + (int)(radius * cos(angle * 3.14 / 180));
        int new_y = y - (int)(radius * sin(angle * 3.14 / 180));
        line(x, y, new_x, new_y);
        angle = (angle + 5) % 360;
        delay(100);
    }
    
    getch();
    closegraph();
    return 0;
}
