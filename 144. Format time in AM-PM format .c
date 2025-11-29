#include <stdio.h>

int main() {
    int h, m, s;
    printf("Enter time (HH MM SS): ");
    scanf("%d %d %d", &h, &m, &s);

    printf("Time: %02d:%02d:%02d %s\n",
           (h==0||h==12)?12:h%12,
           m, s,
           (h<12)?"AM":"PM");
     return 0;
}
