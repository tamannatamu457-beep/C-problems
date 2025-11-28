#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
};

int main() {
    struct Student s[3], temp;
    int i, j;

    for(i=0;i<3;i++)
        scanf("%d %s %d", &s[i].id, s[i].name, &s[i].age);

    for(i=0;i<2;i++)
        for(j=i+1;j<3;j++)
            if(s[i].age > s[j].age) { 
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }

    for(i=0;i<3;i++)
        printf("%d %s %d\n", s[i].id, s[i].name, s[i].age);

    return 0;
}
