#include <stdio.h>
#include <math.h>

int main() {
    int N;
    double total_sum = 0.0;

    printf("Введіть значення верхньої межі N: ");
    scanf("%d", &N);
    
    if (N < 2) {
        printf("Значення N повинно бути більше або дорівнювати 2.\n");
        return 1;
    }
    
    for (int k = 2; k <= N; k++) {
        double S = pow(k, 2) * log(1 + pow(k, 2));
        total_sum += S;
    }

    printf("Загальна сума від k = 2 до N = %d становить: %.5f\n", N, total_sum);
    return 0;
}
