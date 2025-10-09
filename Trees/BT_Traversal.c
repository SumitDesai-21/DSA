#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// definition of tree
typedef struct tree {
    int data;
    struct tree *left;
    struct tree *right;
} tree;

tree *root = NULL;

void populate(tree *node) {
    char s[10];

    printf("Do you want to insert node at left of %d? (yes/no): ", node->data);
    scanf("%s", s);
    if (strcmp(s, "no") != 0) {
        printf("Enter a value of left node of %d: ", node->data);
        int val;
        scanf("%d", &val);

        tree *t = (tree *) malloc(sizeof(tree));
        t->data = val;
        t->left = NULL;
        t->right = NULL;

        node->left = t;
        populate(node->left);
    }

    printf("Do you want to insert node at right of %d? (yes/no): ", node->data);
    scanf("%s", s);
    if (strcmp(s, "no") != 0) {
        printf("Enter value of right node of %d: ", node->data);
        int val;
        scanf("%d", &val);

        tree *t = (tree *) malloc(sizeof(tree));
        t->data = val;
        t->left = NULL;
        t->right = NULL;

        node->right = t;
        populate(node->right);
    }
}

// pre, in & post order traversals
void preorder(tree *node){
  if(node == NULL){
    return;
  }
  printf("%d ", node->data);
  preorder(node->left);
  preorder(node->right);
}

void inorder(tree *node){
  if(node == NULL){
    return;
  }
  preorder(node->left);
  printf("%d ", node->data);
  preorder(node->right);
}

void postorder(tree *node){
  if(node == NULL){
    return;
  }
  preorder(node->left);
  preorder(node->right);
  printf("%d ", node->data);
}
int main(void) {
    int x;
    printf("Enter root element (or Ctrl+C to exit): ");
    scanf("%d", &x);
    root = (tree *) malloc(sizeof(tree));
    root->data = x;
    root->left = NULL;
    root->right = NULL;

    populate(root);


    printf("Preorder Traversal: ");
    preorder(root);

    printf("\n");
    printf("Inorder Traversal: ");
    inorder(root);

    printf("\n");
    printf("Postorder Traversal: ");
    postorder(root);
    return 0;
}
