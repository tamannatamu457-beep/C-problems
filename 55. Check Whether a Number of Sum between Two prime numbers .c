#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isSumOfTwoPrimes(int num) {
    for (int i = 2; i <= num / 2; i++) {
        int j = num - i;
        if (isPrime(i) && isPrime(j)) {
            printf("%d + %d = %d\n", i, j, num);
            return true;
        }
    }
    return false;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (!isSumOfTwoPrimes(number)) {
        printf("%d cannot be expressed as sum of two prime numbers.\n", number);
    }
    
    return 0;
}
