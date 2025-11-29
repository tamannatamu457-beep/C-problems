#include <stdio.h>

double power(double base, int exponent) {
    if (exponent == 0)       
        return 1;
    else if (exponent > 0)  
        return base * power(base, exponent - 1);
    else                     
        return 1 / power(base, -exponent);
}

int main() {
    double base;
    int exponent;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("%.2lf ^ %d = %.4lf\n", base, exponent, power(base, exponent));

    return 0;
}
