#define PRAISE "О, яке чудове ім'я!"
#include <stdio.h>
#include <string.h>
int main() { 
    char name[50];
    printf("Як вас звати?\n"); 
    scanf("%s", name);
    printf("Привіт,%s.%s\n", name, PRAISE);
    printf("Ваше ім'я складаєтся з %d літер і","займає %d комірок пам'яті.\n", strlen(name),sizeof name);
    printf("Вітальна фраза складаєтся з %d літер", strlen(PRAISE));
    printf("і займає %d комірок пам'яті.\n", sizeof PRAISE); }