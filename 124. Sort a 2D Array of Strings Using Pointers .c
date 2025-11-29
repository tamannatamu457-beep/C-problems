#include <stdio.h>
#include <string.h>

int main() {
    char s[20][50], temp[50];
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%s", s[i]);

    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(strcmp(*(s+i), *(s+j)) > 0) {
                strcpy(temp, *(s+i));
                strcpy(*(s+i), *(s+j));
                strcpy(*(s+j), temp);
            }

    for(int i=0; i<n; i++)
        printf("%s\n", s[i]);

    return 0;
}
