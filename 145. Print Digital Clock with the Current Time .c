#include <stdio.h>
#include <time.h>

int main() {
    while(1) {
        time_t t = time(NULL);
        struct tm *tm = localtime(&t);
        printf("\r%02d:%02d:%02d", tm->tm_hour, tm->tm_min, tm->tm_sec);
        fflush(stdout);
        sleep(1);  
    }
return 0;
}
