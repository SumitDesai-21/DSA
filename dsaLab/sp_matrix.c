#include <stdlib.h>
#include <stdio.h>
typedef struct matrix {
    int rows;
    int cols;
    int **data;
} matrix;

void displayMatrix(matrix m){
    for(int i = 0; i < m.rows; i++){
        for(int j = 0; j < m.cols; j++){
            printf("%d ", m.data[i][j]);
        }
        printf("\n");
    }
}
void inputToMatrix(matrix *m){ // passing by reference
    m->data = (int **)malloc(m->rows * sizeof(int *));
    for(int i = 0; i < m->rows; i++){
        m->data[i] = (int *) malloc(sizeof(int) * m->cols);
    }

    // take input
    printf("Enter element for matrix %s", m);
    for(int i = 0; i < m->rows; i++){
        for(int j = 0; j < m->cols; j++){
            scanf("%d", &m->data[i][j]);
        }
    }
}
void freeTheMemory(matrix *m){
    for(int i = 0; i < m->rows; i++){
        free(m->data[i]);
    }
    free(m->data);
}
int main(void)
{
    matrix m1, m2;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &m1.rows, &m1.cols);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &m2.rows, &m2.cols);

    inputToMatrix(&m1);
    displayMatrix(m1);

    // free the memory
    freeTheMemory(&m1);
    return 0;
}
