#include <stdio.h>

int main() {
    int source[100], destination[100];
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &source[i]);

    for (i = 0; i < n; i++)
        destination[i] = source[i];

    printf("Elements of destination array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", destination[i]);

    printf("\n");
    return 0;
}
