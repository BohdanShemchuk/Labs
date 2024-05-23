#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x = 100, y = 100, i;
    for (i = 0; i < 100; i++) {
        cleardevice();
        line(x, y, x + 50, y);
        delay(100);
        x += 5;
    }
    getch();
    closegraph();
    return 0;
}
