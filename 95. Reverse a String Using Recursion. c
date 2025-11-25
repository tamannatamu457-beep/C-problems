#include <stdio.h>

void reverse(char s[], int i) {
    if (s[i] == '\0') return;  
    reverse(s, i+1);         
    printf("%c", s[i]);      
}

int main() {
    char s[100];
    scanf("%s", s);
    reverse(s, 0);
    return 0;
}
