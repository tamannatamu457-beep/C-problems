#include <stdio.h>

int main() {
    FILE *fp;
    char str[] = "Hello Temp File";

    fp = tmpfile();  
    if (fp == NULL) {
        printf("Unable to create temp file\n");
        return 1;
    }

    fputs(str, fp);

    rewind(fp);   
    char c;
    while ((c = fgetc(fp)) != EOF)
        putchar(c);

    return 0;
}
