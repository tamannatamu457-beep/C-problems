#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i;

    scanf("%s", s);

    for(i=0; s[i]=='0'; i++);

    if(s[i]=='\0')
        printf("0");
    else
        printf("%s", &s[i]);

    return 0;
}
