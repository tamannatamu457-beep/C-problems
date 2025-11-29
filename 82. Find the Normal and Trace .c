#include <stdio.h>
#include <math.h>

int main() {
    int a[10][10], n, i, j;
    double norm = 0;
    int trace = 0;

    scanf("%d", &n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            norm += a[i][j]*a[i][j];
            if(i==j) trace += a[i][j];
        }

    printf("Trace = %d\n", trace);
    printf("Norm = %.2lf", sqrt(norm));

    return 0;
}
