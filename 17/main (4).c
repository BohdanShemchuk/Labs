#include <stdio.h>

int find_first_less_than(int arr[], int size, int threshold) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < threshold) { 
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[12] = {3, 7, 5, 10, 12, 1, 9, 15, 8, 0, 4, 6}; =

    int index_less_than_2 = find_first_less_than(arr, 12, 2); 
    int index_less_than_9 = find_first_less_than(arr, 12, 9); 

    printf("Індекс першого елемента, менший за 2: %d\n", index_less_than_2);
    printf("Індекс першого елемента, менший за 9: %d\n", index_less_than_9);

    return 0;
}
