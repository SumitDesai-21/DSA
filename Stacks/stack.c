#include <stdio.h>
#include <stdlib.h>
// implementation of stack using linkedlist
typedef struct Stack{
    int data;
    struct Stack *next;
} Stack;

Stack *top = NULL;

// push operation 
void push(int val){
    Stack *item = (Stack *)malloc(sizeof(Stack));
    item->data = val;
    item->next = NULL;
    if(top == NULL){
        top = item;
    }
    else{
        item->next = top;
        top = item;
    }
}

// pop operation return popped out element
int pop(){
    // edge case
    if(top == NULL){
        printf("Stack is empty.");
        return -1;
    }
    int val = top->data;
    top = top->next;
    return val;
}

// display stack elements
void display(){
    if(top == NULL){
        printf("Stack is empty.");
        return;
    }   
    Stack *curr = top;
    while(curr != NULL){
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}
void deMallocate(){
    if(top == NULL) return;
    Stack *curr = top;
    Stack *next = curr->next;
    while(curr != NULL){
        free(curr);
        curr = next;
        if(next != NULL){
            next = next->next;
        }
    }
    top = NULL;
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
int main(){
    int val;
    while(1){
        int choice = menu();

        switch(choice){
            case 1:
                printf("Enter element: ");
                scanf("%d", &val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                printf("final stack contents: ");
                display();
                return 0;
            default: 
                printf("Invalid choice\n");
                break;
        }
        printf("stack contents: ");
        display();
    }   
    deMallocate();
}
