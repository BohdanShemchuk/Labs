#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;

    printf("Введіть 5 чисел:\n");
    for (int i = 0; i < 5; i++) {
        printf("Елемент %d: ", i + 1);
        scanf("%d", ptr + i); 
    }
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i); 
    }
    printf("Сума елементів масиву: %d\n", sum);

    return 0;
}
