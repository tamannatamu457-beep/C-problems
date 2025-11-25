#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int index;

    fgets(s, sizeof(s), stdin); 
    scanf("%d", &index);         

    if(index < 0 || index >= strlen(s)-1) {
        printf("Invalid index");
    } else {
        printf("Unicode at index %d = %d\n", index, (int)s[index]);
    }

    return 0;
}
