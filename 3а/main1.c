#include <stdio.h>
void main(void)
{ float var1, var2;
printf("Введіть перше число (var1): ");
scanf("%f", &var1);
printf("Введить друге число (var2): ");
scanf("%f", &var2);
printf("var1 > var2 дaє %d\n", var1 > var2);
printf("var1 < var2 дає %d\n", var1 <var2);
printf("var1 == var2 дaє%d'n", var1 == var2);
printf("var1>=var2 дaє%d'n", var1>=var2);
printf("var1 <= var2 дaє %d'n", var1 <= var2);
printf("var1 != var2 дає %d'n", var1 != var2);
printf("Ivar1 дає %dIn", !var1);
printf("!var2 дає %d\n", !var2);
printf("var1 || var2 дає %d\n", var1 || var2);
printf("varl && var2 дaє %d\n", var1 && var2);
}