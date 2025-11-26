#include <stdio.h>

int* getArray(int n) {
    static int arr[100];
    for(int i=0;i<n;i++) arr[i]=i+1;
    return arr;
}

int main() {
    int* p = getArray(5);
    for(int i=0;i<5;i++) 
printf("%d ", p[i]);
return 0;
}
