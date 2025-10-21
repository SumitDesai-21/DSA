#include <stdio.h>
#define SIZE 1024

int data_arr[SIZE];
int next_arr[SIZE];
int head = -1;
int free_idx = 0;

void insertAtBeginning(int val, int *len)
{
    if (free_idx >= SIZE)
    {
        printf("List is full\n");
        return;
    }
    // Insert new node at free index
    data_arr[free_idx] = val;
    next_arr[free_idx] = head; // link to previous head
    head = free_idx;           // update head
    free_idx++;
    (*len)++;
}

void insertAfterPosition(int pos, int val, int *len)
{
    if (free_idx >= SIZE)
    {
        printf("List is full\n");
        return;
    }
    int curr = head;
    for (int i = 0; i < pos && curr != -1; i++)
    {
        curr = next_arr[curr];
    }
    if (curr == -1)
    {
        printf("Invalid position\n");
        return;
    }

    int new_idx = free_idx++;
    data_arr[new_idx] = val;
    next_arr[new_idx] = next_arr[curr];
    next_arr[curr] = new_idx;
    (*len)++;
}
void deleteAtBeginning(int *len){
    if (head == -1) {
        printf("List is empty\n");
        return;
    }
    head = next_arr[head];
    (*len)--;
}
void deleteAfterPosition(int pos, int *len) {
    if (head == -1) {
        printf("List is empty\n");
        return;
    }

    int curr = head;
    for (int i = 0; i < pos && curr != -1; i++) {
        curr = next_arr[curr];
    }

    if (curr == -1 || next_arr[curr] == -1) {
        printf("Invalid position\n");
        return;
    }

    int t = next_arr[curr];          
    next_arr[curr] = next_arr[t]; 
    (*len)--;
}

void printList()
{   
    int curr = head;
    while (curr != -1)
    {
        printf("%d->", data_arr[curr]);
        curr = next_arr[curr];
    }
    printf("NULL\n");
}

int main(void)
{
    int len = 0;
    insertAtBeginning(1, &len);
    insertAtBeginning(2, &len);
    insertAtBeginning(3, &len);
   printf("Before inserting after a certain position: \n");
    printList();
    printf("data_Arr: \n");
    for(int i = 0; i < len; i++) printf("%d ", data_arr[i]);
    printf("\n");
    printf("next_Arr: \n");
    for(int i = 0; i < len; i++) printf("%d ", next_arr[i]);
    printf("\n");
    printf("head: %d free_idx: %d\n", head, free_idx);



    printf("After inserting at certain position: \n");
    insertAfterPosition(1, 4, &len);
    insertAfterPosition(2, 5, &len);
    printf("data_Arr: \n");
    for (int i = 0; i < len; i++)
        printf("%d ", data_arr[i]);
    printf("\n");
    printf("next_Arr: \n");
    for (int i = 0; i < len; i++)
        printf("%d ", next_arr[i]);
    printf("\n");
    printf("head: %d free_idx: %d\n", head, free_idx);


    printf("After deleting head element: \n");
    deleteAtBeginning(&len);
    printList();



    printf("After deleting an element after position 1: \n");
    deleteAfterPosition(1, &len);
    printList();
    return 0;
}
