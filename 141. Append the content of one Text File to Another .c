#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("a.txt", "r");
    dest = fopen("b.txt", "a");

    if (!src || !dest) return 0;

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);
    printf("Content appended successfully");
return 0;
}
