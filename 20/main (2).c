#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    outtextxy(100, 100, "Введіть текст: ");
    char text[100];
    scanf("%s", text);
    outtextxy(100, 120, text);
    getch();
    closegraph();
    return 0;
}
