#include <stdio.h>

int stack[100], top = -1;

void push(int x) { stack[++top] = x; }
int pop() { return stack[top--]; }

void insertAtBottom(int x) {
    if (top == -1) { push(x); return; }
    int temp = pop();
    insertAtBottom(x);
    push(temp);
}

void reverseStack() {
    if (top == -1) return;
    int temp = pop();
    reverseStack();
    insertAtBottom(temp);
}

int main() {
    push(1); push(2); push(3); push(4);

    printf("Original: ");
    for(int i=0;i<=top;i++) printf("%d ", stack[i]);
    printf("\n");

    reverseStack();

    printf("Reversed: ");
    for(int i=0;i<=top;i++) printf("%d ", stack[i]);
    printf("\n");
    return 0;
}
