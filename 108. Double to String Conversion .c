#include <stdio.h>

int main() {
    double num;
    char str[50];

    scanf("%lf", &num);

    sprintf(str, "%lf", num);   

    printf("%s", str);
    return 0;
}
