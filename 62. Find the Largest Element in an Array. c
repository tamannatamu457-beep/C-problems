#include <stdio.h>

int main() {
    int n, i;
    int arr[100], largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    printf("The largest element is: %d\n", largest);

    return 0;
}
