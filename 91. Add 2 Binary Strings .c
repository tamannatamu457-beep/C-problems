#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100], s[101]; 
    int i, j, k=0, c=0, x, y, sum;
    scanf("%s %s", a, b);
    i=strlen(a)-1; j=strlen(b)-1;
    while(i>=0 || j>=0 || c){
        x=(i>=0)?a[i--]-'0':0;
        y=(j>=0)?b[j--]-'0':0;
        sum=x+y+c;
        s[k++] = sum%2 + '0';
        c = sum/2;
    }
    while(k--) 
printf("%c", s[k]);
return 0;
}
