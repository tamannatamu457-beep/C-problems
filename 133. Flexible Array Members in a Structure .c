#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    int n;     
    int marks[]; 
};

int main() {
    int i;
    int n = 3;

    struct Student *s = malloc(sizeof(struct Student) + n * sizeof(int));

    s->roll = 101;
    s->n = n;

    for(i=0; i<n; i++)
        s->marks[i] = (i+1) * 10;

    printf("Roll: %d\nMarks: ", s->roll);
    for(i=0; i<n; i++)
        printf("%d ", s->marks[i]);

    free(s);
    return 0;
}
