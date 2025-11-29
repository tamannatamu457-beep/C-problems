#include <stdio.h>

int main() {
    int octal, decimal = 0, base = 1, digit;
    scanf("%d", &octal);

    while (octal > 0) {
        digit = octal % 10;
        decimal += digit * base;
        base *= 8;
        octal /= 10;
    }

    printf("%d", decimal);
    return 0;
}
