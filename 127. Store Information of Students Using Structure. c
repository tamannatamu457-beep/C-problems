#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s[3];  

    for(int i = 0; i < 3; i++) {
        printf("Enter ID, Name, Marks of student %d: ", i+1);
        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].marks);
    }

    printf("\nStudent Information:\n");
    for(int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Marks: %.2f\n", s[i].id, s[i].name, s[i].marks);
    }

    return 0;
}
