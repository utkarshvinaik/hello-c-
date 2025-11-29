#include<stdio.h>
int main()
{
    float length, width , perimeter , area ;

    printf("Enter the length and width of a rectangle");
    scanf("%f %f ", &length , &width );

    area = length * width;
    perimeter = 2 * (length + width);

    printf("the area of a rectangle is: , %.2fn area");
    printf("the perimeter of a rectangle is: , %.2fn perimeter ");

    return 0 ;
}
