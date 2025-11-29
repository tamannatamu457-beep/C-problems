#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int a[100], n, i, j, t;

    scanf("%s", s);
    i = 0;
    j = strlen(s) - 1;
    while(i < j) {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++; j--;
    }
    printf("Reversed String: %s\n", s);

    scanf("%d", &n);
    for(i=0; i<n; i++) 
scanf("%d", &a[i]);

    i = 0;
    j = n - 1;
    while(i < j) {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++; j--;
    }

    printf("Reversed Array: ");
    for(i=0;i<n;i++) 
printf("%d ", a[i]);
return 0;
}
