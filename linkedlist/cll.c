#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *head = NULL; // head is global

// circular linked list
// to insert an element in the beginning
void insertInCLL(int val)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = val;

    if (head == NULL)
    {
        node->next = node;
        head = node;
    }
    else
    {
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        node->next = head;
        temp->next = node;
        head = node; // inserted at beginning
    }
}

void insertAfterANode(int idx, int val)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    Node *temp = head;

    for (int i = 0; i < idx; i++)
    {
        temp = temp->next;
        if (temp == head)
        {
            printf("Invalid position\n");
            return;
        }
    }

    Node *node = (Node *)malloc(sizeof(Node));
    node->data = val;
    node->next = temp->next;
    temp->next = node;
}

// delete an element in CLL
void deleteAtBeginning()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    // if only one node
    if (head->next == head)
    {
        free(head);
        head = NULL;
        return;
    }

    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    Node *node = head;
    temp->next = head->next;
    head = head->next;
}

// delete after a node
void deleteAfterNode(int pos) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node *temp = head;
    for (int i = 0; i < pos; i++) {
        temp = temp->next;
        if (temp == head) {   // looped back
            printf("Invalid position\n");
            return;
        }
    }

    Node *node = temp->next;
    temp->next = node->next;

    if (node == head) {  // if deleting head
        head = head->next;
    }
    free(node);
}
void traversalOfCLL(Node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node *temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(head)\n"); 
}

void freeList()
{
    if(head == NULL) return;
    Node *current = head;
    Node *next;

    do{
        next = current->next;
        free(current);
        current = next;
    }
    while (current != head);
    head = NULL;
}

int main(void)
{   

    insertInCLL(1);
    insertInCLL(2);
    insertInCLL(3);
    traversalOfCLL(head);
    freeList();
    return 0;
}
