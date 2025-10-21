#include <stdio.h>
#include <stdlib.h>
// definition of tree
typedef struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
} tree;

tree *root = NULL;

// implement queue
typedef struct queue
{
    tree *t;
    struct queue *next;
} queue;

int cnt = 0; // counts number of elements in queue
queue *front = NULL, *rear = NULL;

void addQ(tree *node)
{
    queue *temp = (queue *)malloc(sizeof(tree));
    temp->t = node;
    temp->next = NULL;
    if (rear == NULL)
    {
        front = rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
    cnt++;
}
tree *remQ()
{
    if (front == NULL)
        return NULL;
    queue *temp = front;
    tree *rem = temp->t;
    front = front->next;
    if (front == NULL)
    {
        rear = NULL;
    }
    free(temp);
    cnt--;
    return rem;
}
int isEmpty()
{
    return front == NULL;
}
int size()
{
    return cnt;
}
void levelorder(tree *root)
{
    if (root == NULL)
        return;
    addQ(root);
    int currlev = 0;
    while (!isEmpty())
    {
        int levSize = size();
        printf("level %d: ", currlev);
        for (int i = 0; i < levSize; i++)
        {
            tree *temp = remQ();
            printf("%d ", temp->data);
            if (temp->left != NULL)
                addQ(temp->left);
            if (temp->right != NULL)
                addQ(temp->right);
        }
        printf("\n");
        currlev++;
    }
}

tree *insertNodes(int val, tree *node)
{
    // base case
    if (node == NULL)
    {
        node = (tree *)malloc(sizeof(tree));
        node->data = val;
        node->left = NULL;
        node->right = NULL;
        return node;
    }
    // left node
    if (val < node->data)
    {
        node->left = insertNodes(val, node->left);
    }
    // right node
    else if (val > node->data)
    {
        node->right = insertNodes(val, node->right);
    }

    return node;
}
void insert(int val)
{
    root = insertNodes(val, root);
}

int findMin(tree *node)
{
    if (node == NULL)
        return -1;
    while (node->left != NULL)
        node = node->left;
    return node->data;
}

// delete node function
tree *delete(tree *root, int key)
{
    if (root == NULL)
    {
        printf("Key %d doesn't exist in BST.\n", key);
        return NULL;
    }
    if (key < root->data)
    {
        root->left = delete(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = delete(root->right, key);
    }
    else
    {
        // found node
        if (root->left == NULL)
            return root->right;
        else if (root->right == NULL)
            return root->left;
        int minVal = findMin(root->right);
        if (minVal != -1)
            root->data = minVal;
        root->right = delete(root->right, minVal);
    }
    return root;
}
void leaf(tree *node)
{
    if (node == NULL)
        return;
    if (node->left == NULL && node->right == NULL)
    {
        printf("%d ", node->data);
    }
    leaf(node->left);
    leaf(node->right);
}
void nonleaf(tree *node)
{
    if (node == NULL)
        return;
    if (!(node->left == NULL && node->right == NULL))
    {
        printf("%d ", node->data);
    }
    nonleaf(node->left);
    nonleaf(node->right);
}
void freeTree(tree *node)
{
    if (node == NULL)
        return;
    freeTree(node->left);
    freeTree(node->right);
    free(node);
}
int menu()
{
    printf("Select option: \n");
    printf("1. Insert an Item into the Binary Search Tree.\n");
    printf("2. Delete an Item from the Binary Search Tree.\n");
    printf("3. Print Leaf/Terminal nodes & non-leaf/ Non-terminal nodes of the binary search tree.\n");
    printf("4. Print the nodes at each level of the binary search tree.\n");
    printf("5. Exit program. \n");
    int choice;
    scanf("%d", &choice);
    return choice;
}
int main(void)
{
    int val;
    while (1)
    {
        int choice = menu();
        switch (choice)
        {
        case 1:
            printf("Enter value of node: ");
            scanf("%d", &val);
            insert(val);
            printf("\n");
            break;
        case 2:
            printf("Enter value to delete from BST: ");
            scanf("%d", &val);
            if (val != -1)
            {
                delete(root, val);
            }
            printf("\n");
            break;
        case 3:
            printf("Leaf nodes/Terminal nodes: ");
            leaf(root);
            printf("\n");
            printf("Non-leaf nodes/Non-Terminal nodes: ");
            nonleaf(root);
            printf("\n\n");
            break;
        case 4:
            printf("Level order traversal:\n");
            levelorder(root);
            printf("\n\n");
            break;
        case 5:
            printf("Program exited successfully.\n");
            freeTree(root);
            return 0;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    freeTree(root);
    return 0;
}
