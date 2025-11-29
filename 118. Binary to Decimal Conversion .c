#include <stdio.h>

int main() {
    int binary, decimal=0, base=1, r;

    scanf("%d", &binary);

    while(binary > 0){
        r = binary % 10;
        decimal += r * base;
        base *= 2;
        binary /= 10;
    }

    printf("%d", decimal);
    return 0;
}
