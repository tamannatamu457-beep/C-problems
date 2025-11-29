#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t;
    int i, j;

    scanf("%s", s);
    int n = strlen(s);

    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(s[i] > s[j]) {
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }

    printf("%s", s);
    return 0;
}
