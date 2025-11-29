#include <stdio.h>
#include <string.h>
int main(){
    char n[100]; 
fgets(n,100,stdin);
    printf("%c",n[0]);
    for(int i=0;i<strlen(n);i++) 
if(n[i]==' ') 
printf("%c",n[i+1]);
return 0;
}
