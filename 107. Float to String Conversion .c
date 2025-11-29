#include <stdio.h>

int main() {
    float num;
    char str[50];

    scanf("%f", &num);

    sprintf(str, "%f", num);  

    printf("%s", str);
    return 0;
}
