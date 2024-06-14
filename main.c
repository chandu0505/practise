#include <stdio.h>

int main() {
    int numbers[4] = {1, 2, 3, 4};
    int count = 4;

    for (int i = 0; i < count; i++) {
        numbers[i] *= 2;
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}