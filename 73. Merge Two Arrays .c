#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n1, n2, n3, i, j;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    n3 = n1 + n2;
    for (i = 0; i < n1; i++)
        c[i] = a[i];
    for (j = 0; j < n2; j++)
        c[i + j] = b[j];

    printf("Merged array:\n");
    for (i = 0; i < n3; i++)
        printf("%d ", c[i]);

    printf("\n");
    return 0;
}
