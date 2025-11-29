#include <stdio.h>

int main() {
    int arr[100], n, i, j, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to remove: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;   
            i--;   
        }
    }

    printf("Array after removing all occurrences of %d:\n", element);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
