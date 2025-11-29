#include <stdio.h>

int main() {
    int a[10][10], n, i, j, sum=0;
    scanf("%d", &n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++) 
scanf("%d",&a[i][j]);

    for(i=0;i<n;i++) sum += a[i][i] + a[i][n-i-1];

    if(n%2==1) sum -= a[n/2][n/2];

    printf("%d", sum);
return 0;
}
