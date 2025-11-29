#include <stdio.h>
#include <string.h>

int main() {
    FILE *f = fopen("data.txt", "r");
    char l[100], p[20];

    scanf("%s", p);

    while (fgets(l, 100, f))
        if (strstr(l, p))
            printf("%s", l);

    fclose(f);
return 0;
}
