#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;

    int j = 0; 

    for (int i = 0; i < n - 1; i++) {
        
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }

    arr[j++] = arr[n - 1];

    return j; 
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int newSize = removeDuplicates(arr, n);

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newSize; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
