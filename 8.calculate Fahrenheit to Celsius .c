#include <stdio.h>

int main() {
 float fahrenheit, celsius;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius= (fahrenheit - 32)* 5.0/ 9.0;
    printf("%.2f Fahrenheit= %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}
