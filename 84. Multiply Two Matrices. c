#include <stdio.h>

int main(){
    int a[10][10], b[10][10], c[10][10]={0}, r1,c1,r2,c2,i,j,k;
    scanf("%d %d",&r1,&c1);
    for(i=0;i<r1;i++) 
for(j=0;j<c1;j++) 
scanf("%d",&a[i][j]);
    scanf("%d %d",&r2,&c2);
    for(i=0;i<r2;i++) 
for(j=0;j<c2;j++) 
scanf("%d",&b[i][j]);
    if(c1!=r2){ 
printf("Not possible"); 
return 0; 
}
    for(i=0;i<r1;i++) 
for(j=0;j<c2;j++) 
for(k=0;k<c1;k++) c[i][j]+=a[i][k]*b[k][j];
    for(i=0;i<r1;i++,printf("\n")) 
for(j=0;j<c2;j++) 
printf("%d",c[i][j]);
return 0;
}
