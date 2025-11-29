#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s1 = {1, "Alice", 85.5};
    struct Student s2;

    FILE *fp;

    fp = fopen("student.dat", "wb");
    if(!fp){ 
printf("Cannot open file\n"); 
return 1; 
}
    fwrite(&s1, sizeof(s1), 1, fp);
    fclose(fp);

    fp = fopen("student.dat", "rb");
    if(!fp){ 
printf("Cannot open file\n"); 
return 1; 
}
    fread(&s2, sizeof(s2), 1, fp);
    fclose(fp);

    printf("ID: %d, Name: %s, Marks: %.2f\n", s2.id, s2.name, s2.marks);
    return 0;
}
