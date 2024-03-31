#include <stdio.h>
#include <conio.h>
void main()
{ 
unsigned int x=2,y = 1, z=3, res;
char chx = 0xAF ;
printf("%u\n",x&y|z);
x=y=z=2;
printf("%u\n",x|y&z);
x=3; y=0; z=1;
printf("x^y|~z=%u\n",x^y|~z);
x=1;y=2;z=0;
printf("1&2|0=%u\n",x&y|z);
printf("~1^2&0=%u\n",~x^y&z);
printf("2|0&1=%u\n",y|z&x);
printf("2++&~0|~1=%u\n",y++&~z|~x);
printf("~3|1&++0=%u\n",~y|x&++z);
x = 0xAF; printf("%X\n",x>>4);
chx <<= 7; printf("0x=%X\n",chx);
getch();
}