#include <stdio.h>

int main(){
    int a[3][3], n, i, j, det=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&a[i][j]);

    if(n==2)
        det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    else if(n==3)
        det = a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])
            - a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])
            + a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);

    printf("%d",det);
}
