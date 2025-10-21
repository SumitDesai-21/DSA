#include <stdio.h>
#include <stdlib.h>

// polynomial structure
typedef struct Node
{
    int coef; // coefficient
    int exp;  // exponent/power
    struct Node *next;
} Node;

// A function to create a new node
Node *createNode(int coef, int exp)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->coef = coef;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}

// A function to insert a term into polynomial list
void insertTerm(Node **head, int coef, int exp)
{
    Node *newNode = createNode(coef, exp);

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// A function to print polynomial
void printPoly(Node *head)
{
    while (head != NULL)
    {
        if (head->exp != 0)
            printf("%dx^%d", head->coef, head->exp);
        else
            printf("%d", head->coef);
        head = head->next;
        if (head != NULL){
            if(head->coef > 0){
                printf(" + ");
            }
            else{
                printf(" - ");
                head->coef *= (-1);
            }
        }
    }
    printf("\n");
}

// A function to add two polynomials
Node *addPoly(Node *poly1, Node *poly2)
{
    Node *result = NULL;
    Node *temp1 = poly1;
    Node *temp2 = poly2;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->exp > temp2->exp)
        {
            insertTerm(&result, temp1->coef, temp1->exp);
            temp1 = temp1->next;
        }
        else if (temp2->exp > temp1->exp)
        {
            insertTerm(&result, temp2->coef, temp2->exp);
            temp2 = temp2->next;
        }
        else
        {
            int sumCoef = temp1->coef + temp2->coef;
            if (sumCoef != 0)
            {
                insertTerm(&result, sumCoef, temp1->exp);
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    // if one of them is only empty
    while (temp1 != NULL)
    {
        insertTerm(&result, temp1->coef, temp1->exp);
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        insertTerm(&result, temp2->coef, temp2->exp);
        temp2 = temp2->next;
    }

    return result;
}

Node *subtractPoly(Node *poly1, Node *poly2)
{
    // poly1 - poly2
    Node *result = NULL;
    Node *temp1 = poly1;
    Node *temp2 = poly2;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->exp > temp2->exp)
        {
            insertTerm(&result, temp1->coef, temp1->exp);
            temp1 = temp1->next;
        }
        else if (temp2->exp > temp1->exp)
        {
            insertTerm(&result, (-1) * temp2->coef, temp2->exp);
            temp2 = temp2->next;
        }
        else
        {
            int diffCoef = temp1->coef - temp2->coef;
            if (diffCoef != 0)
            {
                insertTerm(&result, diffCoef, temp1->exp);
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    // if one of them is only empty
    while (temp1 != NULL)
    {
        insertTerm(&result, temp1->coef, temp1->exp);
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        insertTerm(&result, (-1) * temp2->coef, temp2->exp);
        temp2 = temp2->next;
    }

    return result;
}
Node *multiplyPolys(Node *poly1, Node *poly2) {
    Node *result = NULL;
    Node *temp1 = poly1;

    while (temp1 != NULL) {
        Node *temp2 = poly2;
        Node *temp = NULL;

        while (temp2 != NULL) {
            insertTerm(&temp, temp1->coef * temp2->coef, temp1->exp + temp2->exp);
            temp2 = temp2->next;
        }

        result = addPoly(result, temp);
        temp1 = temp1->next;
    }

    return result;
}

int main()
{
    Node *poly1 = NULL;
    Node *poly2 = NULL;
    Node *addition = NULL, *subtraction = NULL, *multiplication = NULL;

    // poly 1== x^2+x+1
    insertTerm(&poly1, 3, 2);
    insertTerm(&poly1, 3, 1);
    insertTerm(&poly1, 1, 0);

    // poly 2== 2x^2+2x+1
    insertTerm(&poly2, 2, 2);
    insertTerm(&poly2, 2, 1);
    insertTerm(&poly2, 1, 0);

    printf("poly 1: ");
    printPoly(poly1);

    printf("poly 2: ");
    printPoly(poly2);

    addition = addPoly(poly1, poly2);
    subtraction = subtractPoly(poly1, poly2);
    multiplication = multiplyPolys(poly1, poly2);

    printf("p1 + p2 == ");
    printPoly(addition);

    printf("p1 - p2 == ");
    printPoly(subtraction);

    printf("p1 * p2 == ");
    printPoly(multiplication);

    return 0;
}
