#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest (per year): ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    simpleInterest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", simpleInterest);
    return 0;
}
