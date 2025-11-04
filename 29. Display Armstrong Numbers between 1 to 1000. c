#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n;
    float result;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; ++num) {
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
