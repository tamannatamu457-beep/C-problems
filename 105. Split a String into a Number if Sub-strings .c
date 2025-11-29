#include <stdio.h>
#include <string.h>

int main() {
    char str[200], *token;

    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    token = strtok(str, " ");
    while(token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
