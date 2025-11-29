#include <stdio.h>

int main() {
    char *s = "#include <stdio.h>%c%cint main() {%c    char *s = %c%s%c;%c    printf(s,10,10,10,34,s,34,10,10);%c    return 0;%c}";
    printf(s,10,10,10,34,s,34,10,10,10,10);
    return 0;
}
