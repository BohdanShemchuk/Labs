#include <stdio.h>
#include <conio.h>
#define STOP '*'
int main() {
   char ch;
   ch=getchar();
   ml: if(ch !=STOP)
{
putchar(ch);
ch=getchar(); goto ml; } }