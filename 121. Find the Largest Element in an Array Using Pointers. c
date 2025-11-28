#include <stdio.h>

int main() {
    int a[50], n, *p, max;

    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    p = a;     
    max = *p;      

    for(int i=1; i<n; i++)
        if(*(p+i) > max)
            max = *(p+i);

    printf("%d", max);
    return 0;
}
