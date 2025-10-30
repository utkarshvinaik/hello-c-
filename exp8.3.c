#include <stdio.h>

void modifyValues(int *x, float *y) {
    *x = *x + 10;   // add 10 to x
    *y = *y * 2;    // multiply y by 2
}

int main() {
    int a = 5;
    float b = 3.5;

    printf("Before function call:\n");
    printf("a = %d, b = %.2f\n", a, b);

    modifyValues(&a, &b);

    printf("\nAfter function call:\n");
    printf("a = %d, b = %.2f\n", a, b);

    return 0;
}
