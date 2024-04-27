#include<stdio.h>
int main(void)
{
int x =99;
int *p1, *p2;
p1=&x;
p2=p1;
/* друк значення х два рази*/
printf("Znachennya po adresi p1 i p2: %d %d\n", *p1, *p2);
printf("Znachennya vkazivnukiv p1 i p2:%p %p", p1, p2);
return 0;
}