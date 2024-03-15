#include <stdio.h>
int main() {
    int vik;
    char name[30];
    printf("Vash vik?\n");
    scanf("%d",&vik);
    printf("Vvedit vashe imya\n");
    scanf("%s",name);
    printf("Pryvit %s jakomy(iy) %d rokiv",name,vik);
}