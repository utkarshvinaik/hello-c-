#include <stdio.h>

struct Complex
 {
    float real;
    float imag;
};
struct Complex readComplex() {
    struct Complex c;
    printf("Enter the real part: ");
    scanf("%f", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

void displayComplex(struct Complex c) {
    printf("The complex number is: %.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    struct Complex num;

    num = readComplex();

    displayComplex(num);

    return 0;
}
