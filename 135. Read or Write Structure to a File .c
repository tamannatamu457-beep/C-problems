#include <stdio.h>

struct Student {
    int id;
    char name[20];
};

int main() {
    struct Student s1 = {1, "Asha"}, s2;
    FILE *f;

    f = fopen("s.dat", "wb");
    fwrite(&s1, sizeof(s1), 1, f);
    fclose(f);

    f = fopen("s.dat", "rb");
    fread(&s2, sizeof(s2), 1, f);
    fclose(f);

    printf("%d %s", s2.id, s2.name);
return 0;
}
