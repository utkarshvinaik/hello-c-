#include <stdio.h>
int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}
int binomial_coefficient(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}
 
int main (){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Factorial of %d is %d\n", n, fact(n));
    printf("Binomial Coefficient C(%d,2)is %d\n",n,binomial_coefficient(n,2));
    return 0;
}
