#include <stdio.h>

int main() {
    int l1, b1, l2, b2, l3, b3;
    int p1, p2, p3, max;

    // Input rectangle 1
    printf("Enter length and breadth of rectangle 1: ");
    scanf("%d %d", &l1, &b1);

    // Input rectangle 2
    printf("Enter length and breadth of rectangle 2: ");
    scanf("%d %d", &l2, &b2);

    // Input rectangle 3
    printf("Enter length and breadth of rectangle 3: ");
    scanf("%d %d", &l3, &b3);

    // Calculate perimeters
    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    // Find maximum using nested ternary
    max = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);

    // Print result
    printf("\nPerimeter of Rectangle 1 = %d", p1);
    printf("\nPerimeter of Rectangle 2 = %d", p2);
    printf("\nPerimeter of Rectangle 3 = %d", p3);

    printf("\n\nThe rectangle with the highest perimeter is: ");
    (max == p1) ? printf("Rectangle 1\n") : 
    (max == p2) ? printf("Rectangle 2\n") : 
                  printf("Rectangle 3\n");

    return 0;
}
