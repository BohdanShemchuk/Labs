#include <stdio.h>
void main (void)
{
FILE *pf;
int k;
// Відкриття файлу "proba.txt" у режимі для запису (режим "w")
if ((pf= fopen ("proba.txt","w")) == NULL)
{
// Якщо не вдалося відкрити файл, виводимо повідомлення про помилку
perror("proba.txt");
return 1;
}
for (k=0; k <= 5; k++)
// Записуємо в файл pf рядок, що містить значення k та значення k*k*k*k
fprintf(pf, "%d%d\n", k, k*k*k*k);
 // Закриваємо файл
fclose(pf);
return 0;
}