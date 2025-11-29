#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
    if (chmod("myfile.txt", 0444) == 0)
        printf("File is now read-only");
    else
        printf("Unable to change permission");

    return 0;
}
