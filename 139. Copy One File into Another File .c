#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("a.txt", "r");
    dest = fopen("b.txt", "w");

    if (!src || !dest) {
        printf("File error");
        return 0;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    printf("File copied");

    fclose(src);
    fclose(dest);
    return 0;
}
