#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;
    printf("Введіть два числа та операцію (+, -, *, /), розділені пробілами: ");
    scanf("%f %f %c", &num1, &num2, &operator);

    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
       
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            printf("Помилка: ділення на нуль!\n");
            return 1; 
        }
    } else {
        printf("Помилка: невідома операція!\n");
        return 1;
    }
printf("Результат: %.2f\n", result);
return 0;
}
