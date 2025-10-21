#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node{
    int data;
    struct Node *next;
} Node;

Node *head = NULL; // head is global

void insertAtFirst(int val){
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = val;
    node->next = head;
    head = node;
}

void insertAtLast(int val){
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = val;
    node->next = NULL;
    
    if(head == NULL){
        head = node;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL) temp = temp->next;
    temp->next = node;
}

void insert(int idx, int val){
    if(idx == 0){
        insertAtFirst(val);
        return;
    }
    
    Node *temp = head;
    bool red_flag = false;
    
    for(int i = 0; i < idx; i++){
        if(temp != NULL){
            temp = temp->next;
        }
        else{
            red_flag = true;
            break;
        }
    }
    
    if(red_flag || temp == NULL){
        printf("Invalid position\n");
        return;
    }
    
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = val;
    node->next = temp->next;
    temp->next = node;
}

void deleteAtFirst() {
    if(head == NULL){
        printf("List is empty, cannot delete\n");
        return;
    }
    Node *temp = head; 
    head = head->next;
    free(temp);      
    printf("First element deleted successfully\n");
}

void delete(int idx){
    if(head == NULL){
        printf("List is empty, cannot delete\n");
        return;
    }
    
    if(idx == 0){
        deleteAtFirst();
        return;
    }
    
    Node *temp = head;
    bool red_flag = false;
    
    for(int i = 0; i < idx; i++){
        if(temp != NULL){
            temp = temp->next;
        }
        else{
            red_flag = true;
            break;
        }
    }
    
    if(red_flag || temp == NULL || temp->next == NULL){
        printf("Invalid position\n");
        return;
    }
    
    Node *nodeToDelete = temp->next;
    temp->next = temp->next->next;
    free(nodeToDelete);     
    printf("Element at position %d deleted successfully\n", idx);
}

void traversal(Node* node){
    if(node == NULL){
        printf("List is empty\n");
        return;
    }
    while(node != NULL){
        printf("%d->", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

void freeList(){
    Node *current = head;
    Node *next;
    
    while(current != NULL){
        next = current->next;
        free(current);
        current = next;
    }
    head = NULL;
}
int main(void){
    printf("Select (1) to Insert an element in the beginning of the linked list.\n");
    printf("Select (2) to Insert an element at a specific position in the linked list.\n");
    printf("Select (3) to Delete an element from the beginning of the linked list.\n");
    printf("Select (4) to Delete an element at a specific position in the linked list.\n");
    printf("Select (5) to Traverse and print the elements of the linked list.\n");
    
    int n, ip, pos;
    printf("Choose options from above or Ctrl+D to exit: \n");
    
    while(scanf("%d", &n) == 1){
        switch (n) {
        case 1:
            printf("Enter element to insert at beginning: ");
            if(scanf("%d", &ip) == 1){
                insertAtFirst(ip);
                printf("Element %d inserted at beginning\n", ip);
            } else {
                printf("Invalid input\n");
            }
            break;
            
        case 2:
            printf("Enter position and element respectively: ");
            if(scanf("%d %d", &pos, &ip) == 2){
                insert(pos, ip);
            } else {
                printf("Invalid input\n");
            }
            break;
            
        case 3:
            deleteAtFirst();
            break;
            
        case 4:
            printf("Enter position to delete: ");
            if(scanf("%d", &pos) == 1){
                delete(pos);
            } else {
                printf("Invalid input\n");
            }
            break;
            
        case 5:
            printf("Linked list: ");
            traversal(head);
            break;
            
        default:
            printf("Invalid option. Please choose 1-5.\n");
            break;
        }
        printf("\nChoose options from above (Ctrl+D to exit): \n");
    }
    
    freeList();
    printf("\nProgram ended.\n");
    return 0;
}
