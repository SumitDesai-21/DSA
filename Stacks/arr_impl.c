#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

typedef struct Stack
{
    int top;
    int items[SIZE];
} Stack;

void push(Stack *st, int val)
{
    if (st->top == SIZE - 1){
        printf("Stack overflow.\n");
        return;
    }
    st->top += 1;
    st->items[st->top] = val;
}

int pop(Stack *st)
{
    if (st->top == -1)
    {
        printf("Stack underflow.\n");
        return -1;
    }
    int val = st->items[st->top];
    st->top -= 1;
    return val;
}

void display(Stack *st)
{
    if (st->top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }
    for (int i = st->top; i >= 0; i--){
        printf("%d ", st->items[i]);
    }
    printf("\n");
}
int menu(){
    printf("Select option: \n");
    printf("1. Push an element into stack. \n");
    printf("2. Pop an element from the stack. \n");
    printf("3. Exit program. \n");
    int choice;
    scanf("%d", &choice);
    return choice;
}
int main(void)
{
    Stack *st = (Stack *)malloc(sizeof(Stack));
    st->top = -1;
    int val;

    while(1){
        int choice = menu();
        switch(choice){
            case 1:
                printf("Enter number: ");
                scanf("%d", &val);
                push(st, val);
                break;
            case 2:
                pop(st);
                break;
            case 3:
                printf("final stack contents: ");
                display(st);
                return 0;
            default:
                printf("Invalid choice.\n");
                break;
        }
        printf("stack contents: ");
        display(st);
    }
    return 0;
}
