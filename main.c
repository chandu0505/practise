#include <stdio.h>

int main() {
    int numbers[2] = {1, 3}; // Removed the second number
    int count = 2;

    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}