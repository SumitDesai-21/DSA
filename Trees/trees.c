#include <stdio.h>
#include <stdlib.h>

// tree defn
typedef struct tree
{
    int data;
    struct tree *left, *right;
} tree;

// stack part
typedef struct stack
{
    tree *t;
    struct stack *next;
} stack;
stack *top = NULL;

void push(tree *node)
{
    stack *temp = (stack *)malloc(sizeof(stack));
    temp->t = node;
    temp->next = top;
    top = temp;
}

tree *pop()
{
    if (top == NULL)
        return NULL;
    stack *temp = top;
    tree *removed = top->t;
    top = top->next;
    free(temp);
    return removed;
}

int isStackEmpty()
{
    return top == NULL;
}

tree *peek()
{
    return top ? top->t : NULL;
}

// queue part
typedef struct queue
{
    tree *t;
    struct queue *next;
} queue;

queue *front = NULL, *rear = NULL;

void addQueue(tree *node)
{
    queue *temp = (queue *)malloc(sizeof(queue));
    temp->t = node;
    temp->next = NULL;
    if (rear == NULL)
        front = rear = temp;
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

tree *remQueue()
{
    if (front == NULL)
        return NULL;
    queue *temp = front;
    tree *removed = front->t;
    front = front->next;
    if (front == NULL)
        rear = NULL;
    free(temp);
    return removed;
}

int isEmpty()
{
    return front == NULL;
}

// tree creation
tree *createTree()
{
    int x;
    printf("Enter root value (-1 for no tree):\n");
    scanf("%d", &x);
    if (x == -1)
        return NULL;

    tree *root = (tree *)malloc(sizeof(tree));
    root->data = x;
    root->left = root->right = NULL;
    addQueue(root);

    while (!isEmpty())
    {
        tree *p = remQueue();

        printf("Enter the value of the left child of %d (-1 if no left child):\n", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            tree *temp = (tree *)malloc(sizeof(tree));
            temp->data = x;
            temp->left = temp->right = NULL;
            p->left = temp;
            addQueue(temp);
        }

        printf("Enter the value of the right child of %d (-1 if no right child):\n", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            tree *temp = (tree *)malloc(sizeof(tree));
            temp->data = x;
            temp->left = temp->right = NULL;
            p->right = temp;
            addQueue(temp);
        }
    }
    return root;
}

// iterative traversals
void preorder(tree *root)
{
    top = NULL;
    tree *p = root;
    while (p != NULL || !isStackEmpty())
    {
        if (p != NULL)
        {
            push(p);
            printf("%d ", p->data);
            p = p->left;
        }
        else
        {
            tree *temp = pop();
            p = temp->right;
        }
    }
}

void inorder(tree *root)
{
    top = NULL;
    tree *p = root;
    while (p != NULL || !isStackEmpty())
    {
        if (p != NULL)
        {
            push(p);
            p = p->left;
        }
        else
        {
            tree *temp = pop();
            printf("%d ", temp->data);
            p = temp->right;
        }
    }
}

void postorder(tree *root)
{
    if (root == NULL)
        return;

    stack *s2 = NULL;
    top = NULL;
    push(root);

    while (!isStackEmpty())
    {
        tree *node = pop();

        stack *temp = (stack *)malloc(sizeof(stack));
        temp->t = node;
        temp->next = s2;
        s2 = temp;

        if (node->left)
            push(node->left);
        if (node->right)
            push(node->right);
    }

    while (s2 != NULL)
    {
        printf("%d ", s2->t->data);
        stack *temp = s2;
        s2 = s2->next;
        free(temp);
    }
}

void freeTree(tree *node)
{
    if (node == NULL)
        return;
    freeTree(node->left);
    freeTree(node->right);
    free(node);
}

int main()
{
    tree *root = createTree();

    printf("\nPre-order Traversal: ");
    preorder(root);

    printf("\nIn-order Traversal: ");
    inorder(root);

    printf("\nPost-order Traversal: ");
    postorder(root);

    printf("\n");
    freeTree(root);
    return 0;
}
