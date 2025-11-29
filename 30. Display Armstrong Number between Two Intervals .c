#include <stdio.h>
#include <math.h>

int main() {
    int low, high, num, originalNum, remainder, n;
    float result;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers between %d and %d are:\n", low, high);

    for (num = low; num <= high; ++num) {
        originalNum = num;
        result = 0.0;
        n = 0;
        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }

        originalNum = num;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        if ((int)result == num)
            printf("%d ", num);
    }

    printf("\n");
    return 0;
}
