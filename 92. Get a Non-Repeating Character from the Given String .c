#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}, i;

    scanf("%s", str);

    for(i=0; str[i]; i++) freq[(int)str[i]]++;

    for(i=0; str[i]; i++) {
        if(freq[(int)str[i]] == 1) {
            printf("%c", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character");
return 0;
}
