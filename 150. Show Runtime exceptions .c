#include <stdio.h>
int main(){
    int a=10,b=0;
    if(b==0) printf("Division by zero!\n"); else printf("%d\n",a/b);
    int *p=NULL;
    if(p==NULL) printf("Null pointer access!\n"); else *p=5;
  return 0;
}
