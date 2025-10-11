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
void preorder(tree *node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preorder(node->left);
    preorder(node->right);
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
            break;
        case 2:
            printf("Enter value to delete from BST: ");
            scanf("%d", &val);
            if (val == -1)
            {
                delete(root, val);
            }
            break;
        case 3:
            // coming soon
            break;
        case 4:
            // coming soon
            break;
        case 5:
            printf("Program exited successfully.\n");
            return 0;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    freeTree(root);
    return 0;
}
