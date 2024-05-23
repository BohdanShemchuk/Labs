#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x = 100, y = 100, i;
    for (i = 0; i < 100; i++) {
        cleardevice();
        circle(x, y, 20);
        delay(100);
        x += 1;
        y += 1;
    }
    getch();
    closegraph();
    return 0;
}
