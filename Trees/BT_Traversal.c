#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
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
  inorder(node->left);
  printf("%d ", node->data);
  inorder(node->right);
}

void postorder(tree *node){
  if(node == NULL){
    return;
  }

  postorder(node->left);
  postorder(node->right);
  printf("%d ", node->data);
}

// ceiling value calculation
void traverse(tree* node, int m, int *res){
	if(node == NULL) return;
	traverse(node->left, m, res);
	int curr = node->data;
	if(curr <= *res && curr >= m) *res = curr;
	traverse(node->right, m, res);
}
int findBlock(tree *node, int m){
	int res = INT_MAX;
	traverse(node, m, &res);
	return res;
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
    int y = findBlock(root, 580);
    printf("%d\n", y);
    return 0;
}
