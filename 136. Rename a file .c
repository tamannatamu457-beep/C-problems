#include <stdio.h>

int main() {
    if (rename("old.txt", "new.txt") == 0)
        printf("File renamed");
    else
        printf("Error renaming file");
    return 0;
}
