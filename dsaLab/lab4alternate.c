#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bubblesort(int **s, int n)
{
    printf("After Sorting sparse matrix: \n");
    bool swapped;
    for (int i = 0; i < n; i++)
    {
        swapped = false;
        for (int j = 1; j < n - i; j++)
        {
            if (s[j - 1][2] > s[j][2])
            {
                for (int k = 0; k < 3; k++)
                {
                    int t = s[j - 1][k];
                    s[j - 1][k] = s[j][k];
                    s[j][k] = t;
                }
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int **inputtomatrix(int **s, int nr, int nc, int nz)
{
    int **m = (int **)malloc(nr * sizeof(int *));
    for (int i = 0; i < nr; i++)
    {
        m[i] = (int *)malloc(sizeof(int) * nc);
    }

    for (int i = 0; i < nr; i++)
        for (int j = 0; j < nc; j++)
            m[i][j] = 0;

    // Fill non-zero values
    for (int i = 0; i < nz; i++)
    {
        int r = s[i][0];
        int c = s[i][1];
        int val = s[i][2];
        m[r][c] = val;
    }
    return m;
}

void displayMatrix(int **m, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void displaySparseMatrix(int **s, int n)
{
    printf("row\tcol\tval\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\n", s[i][0], s[i][1], s[i][2]);
    }
}

void freeMatrix(int **m, int rows)
{
    for (int i = 0; i < rows; i++)
        free(m[i]);
    free(m);
}

int main(void)
{
    int nr1, nc1, nr2, nc2, nz1, nz2;
    printf("For Matrix 1:\n");
    printf("Enter rows and cols of matrix 1:\n");
    scanf("%d %d", &nr1, &nc1);
    printf("Enter number of non-zero elements of matrix 1:\n");
    scanf("%d", &nz1);

    int **sp1 = (int **)malloc(nz1 * sizeof(int *));
    for (int i = 0; i < nz1; i++)
    {
        sp1[i] = (int *)malloc(3 * sizeof(int));
    }

    printf("Enter sparse matrix 1 (row col val):\n");
    for (int i = 0; i < nz1; i++)
    {
        scanf("%d %d %d", &sp1[i][0], &sp1[i][1], &sp1[i][2]);
    }

    displaySparseMatrix(sp1, nz1);
    // bubblesort(sp1, nz1);

    printf("For Matrix 2:\n");
    printf("Enter rows and cols of matrix 2:\n");
    scanf("%d %d", &nr2, &nc2);
    printf("Enter number of non-zero elements of matrix 2:\n");
    scanf("%d", &nz2);

    int **sp2 = (int **)malloc(nz2 * sizeof(int *));
    for (int i = 0; i < nz2; i++)
    {
        sp2[i] = (int *)malloc(3 * sizeof(int));
    }

    printf("Enter sparse matrix 2 (row col val):\n");
    for (int i = 0; i < nz2; i++)
    {
        scanf("%d %d %d", &sp2[i][0], &sp2[i][1], &sp2[i][2]);
    }

    displaySparseMatrix(sp2, nz2);
    // bubblesort(sp2, nz2);

    int **m1 = inputtomatrix(sp1, nr1, nc1, nz1);
    printf("Matrix 1:\n");
    displayMatrix(m1, nr1, nc1);

    int **m2 = inputtomatrix(sp2, nr2, nc2, nz2);
    printf("Matrix 2:\n");
    displayMatrix(m2, nr2, nc2);

    if(nr1 == nr2 && nc1 == nc2){
        int **res = (int **) malloc(sizeof(int *) * nr1);
        for(int i = 0; i < nr1; i++){
            res[i] = (int *) malloc(sizeof(int) * nc1);
        }
        for(int i = 0; i < nr1; i++){
            for(int j = 0; j < nc1; j++){
                res[i][j] = m1[i][j] + m2[i][j];
            }
        }
        printf("Addition of two matrices: \n");
        displayMatrix(res, nr1, nc1);

        printf("Transpose of a matrix: \n");
        for(int i = 0; i < nc1; i++){
            for(int j = 0; j < nr1; j++){
                printf("%d ", res[j][i]);
            }
            printf("\n");
        }

        freeMatrix(res, nr1);
    }
    else{
        printf("matrices cannot be added.\n");
    }
    // Free everything
    freeMatrix(sp1, nz1);
    freeMatrix(sp2, nz2);
    freeMatrix(m1, nr1);
    freeMatrix(m2, nr2);

    return 0;
}
