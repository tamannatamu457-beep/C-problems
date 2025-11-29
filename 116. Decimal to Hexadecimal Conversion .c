#include <stdio.h>

int main() {
    int n, r;
    char h[20]; 
    int i=0;
    scanf("%d",&n);

    if(n==0){
printf("0"); 
return 0;
}

    while(n){
        r = n%16;
        h[i++] = (r<10)? r+'0' : r-10+'A';
        n/=16;
    }

    while(i--) 
printf("%c",h[i]);
return 0;
}
