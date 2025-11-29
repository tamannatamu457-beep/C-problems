#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *gmt = gmtime(&t);  // Convert local time to GMT

    printf("GMT Date: %02d-%02d-%04d\n", gmt->tm_mday, gmt->tm_mon+1, gmt->tm_year+1900);
    printf("GMT Time: %02d:%02d:%02d\n", gmt->tm_hour, gmt->tm_min, gmt->tm_sec);
    return 0;
}
