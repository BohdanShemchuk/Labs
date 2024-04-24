#include <stdio.h>
#include <string.h>

void print_characters(const char *str, int num) {
    int length = strlen(str);
    if (num > length) {
        num = length;
    }
    for (int i = 0; i < num; i++) {
        putchar(str[i]);
    }
    putchar('\n'); 
}

int main() {
    const char *test_string = "Привіт, світ!";
    int num_of_characters = 7;
    print_characters(test_string, num_of_characters);  
    print_characters(test_string, 50); 

    return 0;
}
