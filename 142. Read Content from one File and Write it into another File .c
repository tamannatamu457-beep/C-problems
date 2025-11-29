#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("input.txt", "r");
    dest = fopen("output.txt", "w");

    if (!src || !dest) return 0;

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);

    printf("File copied successfully");
return 0;
}
