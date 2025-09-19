#include <stdio.h>

int main() {
    int a = 10;   // variable 'a' is declared in the main block
    printf("a in main block = %d\n", a);

    {
        int b = 20;   // variable 'b' is declared inside this inner block
        printf("a is accessible in inner block = %d\n", a);
        printf("b in inner block = %d\n", b);
    }

    // b is not accessible here (outside the inner block)
    // printf("b outside inner block = %d\n", b);  // ❌ This will give error

    printf("a still accessible in main block = %d\n", a);

    return 0;
}
