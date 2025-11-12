#include <stdio.h>

int main() {
    int arr[100], n, i, j, k, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate left: ");
    scanf("%d", &k);

    for (j = 0; j < k; j++) {
        temp = arr[0];
        for (i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }

    printf("Array after left rotation:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
