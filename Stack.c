#include<stdio.h>
#define STACK_MAX 10

struct Stack {
    int top;
    int data[STACK_MAX];
};

void push(struct Stack *s, int item)
{
    if(s->top < STACK_MAX) {
        s->data[s->top] = item;
        s->top = s->top + 1;
    } else {
        printf("Stack is full!\n");
    }
}

int pop(struct Stack *s)
{
    int item;

    if(s->top == 0) {
        printf("Stack is empty!\n");
        return -1;
    } else {
        s->top = s->top - 1;
        item = s->data[s->top];
    }

    return item;
}


int main()
{
    struct Stack my_stack;
    int item;

    my_stack.top = 0;

    push(&my_stack, 1);
    push(&my_stack, 2);
    push(&my_stack, 3);
    push(&my_stack, 4);
    push(&my_stack, 5);
    push(&my_stack, 6);
    push(&my_stack, 7);
    push(&my_stack, 8);
    push(&my_stack, 9);
    push(&my_stack, 10);

    item = pop(&my_stack);
    printf("%d\n", item);

    item = pop(&my_stack);
    printf("%d\n", item);

    item = pop(&my_stack);
    printf("%d\n", item);

    item = pop(&my_stack);
    printf("%d\n", item);

    item = pop(&my_stack);
    printf("%d\n", item);

    item = pop(&my_stack);
    printf("%d\n", item);

    item = pop(&my_stack);
    printf("%d\n", item);

    item = pop(&my_stack);
    printf("%d\n", item);

    item = pop(&my_stack);
    printf("%d\n", item);

    item = pop(&my_stack);
    printf("%d\n", item);

    return 0;
}
