#include <stdio.h>

#define SIZE 10

int main() {
FILE *file;
int original_array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int new_array[SIZE];
file = fopen("numbers.bin", "wb");
if (file == NULL) {
    return 1;
}
fwrite(original_array, sizeof(int), SIZE, file);
fclose(file);
file = fopen("numbers.bin", "rb");
if (file == NULL) {
    return 1;
}
fread(new_array, sizeof(int), SIZE, file);
fclose(file);
for (int i = 0; i < SIZE; i++) {
printf("%d ", new_array[i]);
}
printf("\n");
return 0;
}
