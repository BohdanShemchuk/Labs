#include <stdio.h>
int main() {
    int rows = 9; 
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            printf("2"); 
        }
        printf("\n"); 
    }
    return 0;
}