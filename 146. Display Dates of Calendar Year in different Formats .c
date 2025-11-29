#include <stdio.h>
#include <time.h>

int main(){
    time_t t=time(NULL);
    struct tm *tm=localtime(&t);
    int d=tm->tm_mday, m=tm->tm_mon+1, y=tm->tm_year+1900;
    printf("%02d-%02d-%04d\n%02d/%02d/%04d\n%04d.%02d.%02d\n", d,m,y,m,d,y,y,m,d);
return 0;
}
