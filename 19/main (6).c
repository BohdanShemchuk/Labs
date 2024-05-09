#include <stdio.h>
void main (void)
{
FILE *pf;
int n, nn,l;
// Відкриття файлу "proba.txt" у режимі для читання
if ((pf= fopen ("proba.txt","r")) == NULL)
{perror("proba.txt");
return 1;
}
for (1=0; l <= 5; 1++)
// Зчитуємо з файлу pf дві змінні: n і nn перше число зберігається в n, друге число в nn
fscanf(pf, "%d %d\n", &n, nn);
fclose(pf);
return 0;
}