#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char c1, c2;
    int pos = 1, flag = 0;

    f1 = fopen("a.txt", "r");
    f2 = fopen("b.txt", "r");

    if (!f1 || !f2) {
        printf("File error");
        return 0;
    }

    while ((c1 = fgetc(f1)) != EOF && (c2 = fgetc(f2)) != EOF) {
        if (c1 != c2) {
            printf("Mismatch at position %d: %c != %c\n", pos, c1, c2);
            flag = 1;
        }
        pos++;
    }

    if (!flag)
        printf("Files are identical");

    fclose(f1);
    fclose(f2);
    return 0;
}
