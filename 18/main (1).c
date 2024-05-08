#include <stdio.h>
struct Employee {
    char name[30];
    double weight;
    double height;
    int age;
};

int main() {

    struct Employee employee;
    printf("Введіть ім'я працівника: ");
    scanf("%49s", employee.name);  
    printf("Введіть вагу працівника: ");
    scanf("%lf", &employee.weight);
    printf("Введіть висоту працівника: ");
    scanf("%lf", &employee.height);
    printf("Введіть вік працівника: ");
    scanf("%d", &employee.age);
    printf("\nІнформація про працівника %s\n", employee.name);
    printf("----------------------------------------\n");
    printf("Вага: %.2f кг\n", employee.weight);
    printf("Висота: %.2f м\n", employee.height);
    printf("Вік: %d\n", employee.age);

    return 0;
}
