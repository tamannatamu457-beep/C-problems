#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s[3], temp;
    int i, j;

    for(i=0;i<3;i++)
        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].marks);

    
    for(i=0;i<2;i++)
        for(j=i+1;j<3;j++)
            if(strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }

    for(i=0;i<3;i++)
        printf("%d %s %.2f\n", s[i].id, s[i].name, s[i].marks);

    return 0;
}
