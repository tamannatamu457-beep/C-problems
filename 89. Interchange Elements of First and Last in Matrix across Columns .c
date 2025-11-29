#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, temp;
    scanf("%d %d", &r, &c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
scanf("%d",&a[i][j]);

    for(j=0;j<c;j++){
        temp = a[0][j];
        a[0][j] = a[r-1][j];
        a[r-1][j] = temp;
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++) 
printf("%d ",a[i][j]);
        printf("\n");
    }

    return 0;
}
