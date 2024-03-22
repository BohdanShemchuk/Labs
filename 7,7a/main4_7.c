#include <stdio.h>
#include <conio.h>
void main()
{ 
float z;
int x, y=3;
z= 1.1*(x=++y/2.)+0.3*x;
printf("z=%4.1f\n",z);
getch();
}