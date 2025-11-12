#include <stdio.h>

int main() {
    int arr[10][10];
    int i, j, k, temp;
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of the 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols - 1; j++) {
            for (k = j + 1; k < cols; k++) {
                if (arr[i][j] > arr[i][k]) {
                    temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }

    printf("\nArray after sorting each row:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
