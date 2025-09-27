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
    printf("Select (1) to Insert an element in the beginning of the linked list.\n");
    printf("Select (2) to  Insert an element after a node in the linked list\n");
    printf("Select (3) to Delete an element from the beginning of the linked list.\n");
    printf("Select (4) to Delete an element at a after position in the linked list.\n");
    printf("Select (5) to Traverse and print the elements of the linked list.\n");

    int n, ip, pos, len;
    printf("Choose options from above or Ctrl+D to exit: \n");
    while(scanf("%d", &n) == 1){
        switch (n){
        case 1:
            printf("Enter element to insert at beginning: ");
            if (scanf("%d", &ip) == 1)
            {
                insertAtBeginning(ip, &len);
                printf("Element %d inserted at beginning\n", ip);
            }
            else
            {
                printf("Invalid input\n");
            }
            break;

        case 2:
            printf("Enter position and element respectively: ");
            if (scanf("%d %d", &pos, &ip) == 2)
            {
                insertAfterPosition(pos, ip, &len);
            }
            else
            {
                printf("Invalid input\n");
            }
            break;

        case 3:
            deleteAtBeginning(&len);
            break;

        case 4:
            printf("Enter position: ");
            if (scanf("%d", &pos) == 1)
            {
                deleteAfterPosition(pos, &len);
            }
            else
            {
                printf("Invalid input\n");
            }
            break;

        case 5:
            printf("Linked list: ");
            printList();
            break;

        default:
            printf("Invalid option\n");
            break;
        }
        printf("\nChoose options from above or Ctrl+D to exit: \n");
    }
    return 0;
}
