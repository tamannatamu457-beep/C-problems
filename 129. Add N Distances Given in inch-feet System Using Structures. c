#include <stdio.h>

struct Distance {
    int feet;
    int inch;
};

int main() {
    int n;
    printf("Enter number of distances: ");
    scanf("%d", &n);

    struct Distance d[n], sum = {0, 0};

    for(int i=0;i<n;i++){
        printf("Enter feet and inch for distance %d: ", i+1);
        scanf("%d %d", &d[i].feet, &d[i].inch);
        sum.feet += d[i].feet;
        sum.inch += d[i].inch;
    }

    sum.feet += sum.inch / 12;
    sum.inch = sum.inch % 12;

    printf("Total Distance = %d feet %d inches\n", sum.feet, sum.inch);

    return 0;
}
