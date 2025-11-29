#include <stdio.h>

int main() {
    char s[200];
    int i;

    fgets(s, 200, stdin);

    if(s[0] != ' ') 
        printf("%c ", s[0]);

    for(i = 1; s[i]; i++) {
        if(s[i-1] == ' ' && s[i] != ' ')
            printf("%c ", s[i]);
    }

    return 0;
}
