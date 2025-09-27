#include <stdio.h>
#include <stdlib.h>

typedef struct Queue{
    int data;
    struct Queue *next;
} Queue;

Queue *front = NULL;
Queue *rear = NULL;

void addItem(int val){
    Queue *item = (Queue *)malloc(sizeof(Queue));
    item->data = val;
    item->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = item;
        return;
    }
    rear -> next = item;
    rear = item;
}
int removeItem(){
    if(front == NULL){
        // queue is empty
        printf("Queue is empty.\n");
        return -1;
    }
    int val = front->data;
    front = front->next;
    return val;
}
void display(){
    Queue *curr = front;
    while(curr != NULL){
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}
void freeSpace(){
    Queue *curr = front;
    Queue *next = curr->next;
    while(curr != NULL){
        free(curr);
        curr = next;
        if(next != NULL){
            next = next->next;
        }
    }
    front = NULL;
    rear = NULL;
}
int menu(){
    printf("Select option: \n");
    printf("1. Add an element into Queue. \n");
    printf("2. Remove an element from the Queue. \n");
    printf("3. Exit program. \n");
    int choice;
    scanf("%d", &choice);
    return choice;
}
int main(void){
    int val;
    while(1){
        int choice = menu();
        switch(choice){
            case 1:
                printf("Enter element: ");
                scanf("%d", &val);
                addItem(val);
                break;
            case 2:
                int val = removeItem();
                if(val == -1){
                    return 1;
                }
                break;
            case 3:
                printf("final queue contents: ");
                display();
                return 0;
            default:
                printf("Invalid choice\n");
                break;
        }
        printf("Queue contents: ");
        display();
    }
    freeSpace();
    return 0;
}
