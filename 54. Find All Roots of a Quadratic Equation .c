#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D;

    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b*b - 4*a*c;

    if (D > 0) {
        printf("Two real roots:\n");
        printf("x1 = %.2f\n", (-b + sqrt(D)) / (2*a));
        printf("x2 = %.2f\n", (-b - sqrt(D)) / (2*a));
    }
    else if (D == 0) {
        printf("One real root:\n");
        printf("x = %.2f\n", -b / (2*a));
    }
    else {
        printf("Imaginary roots:\n");
        printf("x1 = %.2f + %.2fi\n", -b/(2*a), sqrt(-D)/(2*a));
        printf("x2 = %.2f - %.2fi\n", -b/(2*a), sqrt(-D)/(2*a));
    }

    return 0;
}
