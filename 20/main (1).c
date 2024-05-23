#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x, y;
    for (x = 0; x <= 630; x++) {
        y = 240 + 100 * sin(x * 0.01745); 
        putpixel(x, y, WHITE);
    }
    getch();
    closegraph();
    return 0;
}
