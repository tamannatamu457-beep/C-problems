#include <stdio.h>

int main() {
    int n, o=0, base=1, r;
    scanf("%d",&n);

    while(n>0){
        r = n % 8;
        o = o + r*base;
        n /= 8;
        base *= 10;
    }

    printf("%d", o);
return 0;
}
