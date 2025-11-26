#include <stdio.h>

int main() {
    char h[20]; int d=0,i=0,v;
    scanf("%s",h);
    while(h[i]){
        d*=16;
        v = (h[i]>='0' && h[i]<='9') ? h[i]-'0' :
            (h[i]>='A' && h[i]<='F') ? h[i]-'A'+10 :
            (h[i]>='a' && h[i]<='f') ? h[i]-'a'+10 : -1;
        if(v==-1){
printf("Invalid"); 
return 0;
}
        d+=v; i++;
    }
    printf("%d",d);
return 0;
}
