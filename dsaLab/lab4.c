#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct{
    int row;
    int col;
    int **data;
} Matrix;

typedef struct
{
    int row;
    int col;
    int val;
} Triple;

typedef struct
{
    int rows;
    int cols;
    int nzTerms;
    Triple *data; // dynamically allocated array of non-zero elements
} SparseMatrix;

void inputSparseMatrix(SparseMatrix *sm)
{
    printf("Enter number of rows and columns of a matrix: ");
    scanf("%d %d", &sm->rows, &sm->cols);

    printf("Enter number of non-zero elements: ");
    scanf("%d", &sm->nzTerms);

    sm->data = (Triple *)malloc(sm->nzTerms * sizeof(Triple));

    printf("Enter row, col, and val for each non zero element:\n");
    for (int i = 0; i < sm->nzTerms; i++)
    {
        scanf("%d %d %d", &sm->data[i].row, &sm->data[i].col, &sm->data[i].val);
    }
}
void sparseToMatrix(SparseMatrix sm, Matrix *m){
    m->row = sm.rows;
    m->col = sm.cols;
    m->data = (int **)malloc(m->row * sizeof(int *));
    for(int i = 0; i < m->row; i++){
        m->data[i] = (int *) malloc(sizeof(int) * m->col);
    }
    int idx = 0;
    for(int i = 0; i < m->row; i++){
        for(int j = 0; j < m->col; j++){
            if(idx < sm.nzTerms && sm.data[idx].row == i && sm.data[idx].col == j){
                m->data[i][j] = sm.data[idx].val;
                idx++;
            }
            else m->data[i][j] = 0;
        }
    }
}
void bubblesort(Triple *data, int n){
    printf("After Sorting data\n");
    bool swapped;
    for(int i = 0; i < n; i++){
        swapped = false;
        for(int j = 1; j < n - i; j++){
            if(data[j - 1].val > data[j].val){
                Triple t = data[j - 1];
                data[j - 1]  = data[j];
                data[j]  = t;
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}
Matrix AddTwoMatrices(Matrix m1, Matrix m2){
    Matrix m;
    m.row = m1.row;
    m.col = m1.col;
    m.data = (int **)malloc(m.row * sizeof(int *));
    for (int i = 0; i < m.row; i++)
    {
        m.data[i] = (int *)malloc(sizeof(int) * m.col);
    }
    for(int i = 0; i < m.row; i++){
        for(int j = 0; j < m.col; j++){
            m.data[i][j] = m1.data[i][j] + m2.data[i][j];
        }
    }
    return m;
}
void transposeOfMatrix(Matrix m){
    printf("Transpose of matrix: \n");
    for(int i = 0; i < m.col; i++){
        for(int j = 0; j < m.row; j++){
            printf("%d ", m.data[j][i]);
        }
        printf("\n");
    }
}
void displaySparseMatrix(SparseMatrix sm)
{   printf("row\tcol\tval\n");
    for (int i = 0; i < sm.nzTerms; i++)
    {
        printf("%d\t%d\t%d\n", sm.data[i].row, sm.data[i].col, sm.data[i].val);
    }
}
void displayMatrix(Matrix m){
    for(int i = 0; i < m.row; i++){
        for(int j = 0; j < m.col; j++){
            printf("%d ", m.data[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    SparseMatrix sm1, sm2;
    Matrix m1, m2;
    printf("For Matrix 1: \n");
    inputSparseMatrix(&sm1);
    printf("For Matrix 2: \n");
    inputSparseMatrix(&sm2);

    printf("sparse matrix 1: \n");
    displaySparseMatrix(sm1);
    printf("sparse matrix 2: \n");
    displaySparseMatrix(sm2);

    // sorting the sparse matrix based on value
    bubblesort(sm.data, sm.nzTerms);

    
    sparseToMatrix(sm1, &m1);
    sparseToMatrix(sm2, &m2);

    printf("display matrix 1: \n");
    displayMatrix(m1);
    printf("display matrix m2: \n");
    displayMatrix(m2);

    Matrix m;
    if(m1.row == m2.row && m1.col == m2.col){
        m = AddTwoMatrices(m1, m2);
        printf("result after addition of two matrices: \n");
        displayMatrix(m);

        transposeOfMatrix(m);
    }
    else printf("Matrices can't be added.\n");

    free(sm1.data);
    free(sm2.data);
    free(m1.data);
    free(m2.data);
    free(m.data);
    return 0;
}
