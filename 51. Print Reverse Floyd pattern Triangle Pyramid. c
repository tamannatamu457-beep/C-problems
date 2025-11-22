#include <stdio.h>

int main() {
    int n, total = 0, i, j, num;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        total += i;

    num = total; 

    for(i = n; i >= 1; i--) {

        for(j = 1; j <= n - i; j++)
            printf(" ");

        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num--;
        }

        printf("\n");
    }

    return 0;
}
