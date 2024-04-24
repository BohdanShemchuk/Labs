#include<stdio.h>
#include<conio.h>
main()
{
int fahr,celsius;
int lower,upper,step;
lower=0;
upper=300;
step=20;
fahr=lower;
printf("\n\nCelsius Fahrengeit\n");
while( fahr <= upper )
{ celsius = 5*(fahr-32)/9;
printf("%10d\t%8d\n",fahr,celsius);
fahr=fahr+step;
}
getch();
}