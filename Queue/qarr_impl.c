#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
// declaration of queue using arrays
typedef struct Queue{
    int front;
    int rear;
    int items[SIZE];
} Queue;

void addItem(Queue *q, int val){
    if(q->rear == SIZE){
        // overflow
        printf("Queue Overflow. \n");
        return;
    }
    q->rear += 1;
    q->items[q->rear] = val;
}
// remove logic
int removeItem(Queue *q){
    if(q->front >= q->rear){
        printf("Queue is empty. \n");
        return -1;
    }
    int val = q->items[q->front];
    q->front += 1;
    return val;
}
// display logic
void display(Queue *q){
    int curr = q->front + 1;
    while(curr <= q->rear){
        printf("%d ", q->items[curr]);
        curr++;
    }
    printf("\n");
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
    Queue *q = (Queue *) malloc(sizeof(Queue));
    int val;
    while (1)
    {
        int choice = menu();
        switch (choice)
        {
        case 1:
            printf("Enter element: ");
            scanf("%d", &val);
            addItem(q, val);
            break;
        case 2:
            int val = removeItem(q);
            if (val == -1)
            {
                return 1;
            }
            break;
        case 3:
            printf("final queue contents: ");
            display(q);
            return 0;
        default:
            printf("Invalid choice\n");
            break;
        }
        printf("Queue contents: ");
        display(q);
    }

    free(q);
    return 0;
}
