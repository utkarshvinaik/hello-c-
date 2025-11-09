#include <stdio.h>

#define PI 3.14159
#define MAX 100
#define NAME "C Programming"
#define YEAR 2025

int main() {
    printf("Constant Values Defined in Preprocessor:\n\n");
    printf("Value of PI: %.2f\n", PI);
    printf("Maximum Value: %d\n", MAX);
    printf("Course Name: %s\n", NAME);
    printf("Current Year: %d\n", YEAR);

    return 0;
}
