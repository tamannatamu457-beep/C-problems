#include <stdio.h>
#include <ctype.h>

int main() {
    char s[200];
    int f[26]={0}, i;

    fgets(s,200,stdin);

    for(i=0;s[i];i++)
        if(isalpha(s[i]))
            f[tolower(s[i])-'a']=1;

    for(i=0;i<26;i++)
        if(!f[i]){
            printf("Not Pangram");
            return 0;
        }

    printf("Pangram");
    return 0;
}
