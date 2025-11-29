#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[100];
    long num;

    scanf("%s", s);

    num = strtol(s, NULL, 10);

    printf("%ld", num);
    return 0;
}
