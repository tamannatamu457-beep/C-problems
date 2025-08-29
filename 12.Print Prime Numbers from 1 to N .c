#include <stdio.h>
int main() {
    int n, i, j, isPrime;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are:\n", n);
    for(i = 2; i <= n; i++) {
        isPrime = 1; 
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }
        // Print if prime
        if(isPrime == 1)
            printf("%d ", i);
    }
    return 0;
}
