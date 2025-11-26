#include <stdio.h>

int main() {
    int n, b[32], i=0;

    scanf("%d", &n);

    if(n==0){ 
    printf("0"); 
    return 0; 
    }

    while(n>0){
        b[i++] = n%2;
        n /= 2;
    }
    
    for(i=i-1;i>=0;i--) 
    printf("%d", b[i]);

    return 0;
}
