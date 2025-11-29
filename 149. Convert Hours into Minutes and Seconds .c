#include <stdio.h>

int main() {
    int hours;
    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("%d hours = %d minutes = %d seconds\n", hours, hours*60, hours*3600);
   return 0;
}
