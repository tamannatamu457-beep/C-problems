#include <stdio.h>

int main(){
    int a[10][10], r, c, i, j, p, q, tmp;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++) 
for(j=0;j<c;j++) 
scanf("%d",&a[i][j]);

    tmp=a[0][0];
    for(j=1;j<c;j++){ p=a[0][j]; a[0][j]=tmp; tmp=p; }
    for(i=1;i<r;i++){ p=a[i][c-1]; a[i][c-1]=tmp; tmp=p; }
    for(j=c-2;j>=0;j--){ p=a[r-1][j]; a[r-1][j]=tmp; tmp=p; }
    for(i=r-2;i>=0;i--){ p=a[i][0]; a[i][0]=tmp; tmp=p; }

    for(i=0;i<r;i++,printf("\n")) 
for(j=0;j<c;j++) 
printf("%d ",a[i][j]);
return 0;
}
