#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100], result[300];
    int pos, i, j, k=0;

    scanf("%s %s", str1, str2);
    scanf("%d", &pos);

    for(i=0; i<pos && str1[i]; i++) result[k++] = str1[i];

    for(j=0; str2[j]; j++) result[k++] = str2[j];

    while(str1[i]) result[k++] = str1[i++];

    result[k] = '\0';

    printf("%s", result);
return 0;
}
