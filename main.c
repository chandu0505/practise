#include <stdio.h>

int main() {
    int numbers[3] = {1, 2, 3};
    int count = 3;

    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}