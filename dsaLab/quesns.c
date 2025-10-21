#include <stdio.h>

int longestSubarray(int *nums, int numsSize){
    int max = nums[0], len = 1, ans = 1, idx = 0;
    for(int i = 1; i < numsSize; i++){
        if(nums[i] > max){
            max = nums[i];
            idx = i;
        }
    }
    if(idx == numsSize - 1) return ans;
    int value = nums[idx];
    max = value;
    for(int i = idx + 1; i < numsSize; i++){
        value &= nums[i];
        if(value >= max){
            max = value;
            len++;
        }
        else{
            value = nums[i];
            len = 1;
        }
        ans = (ans < len)? len : ans; 
    }
    return ans;
}

// arrange elements
// negative zero positive

void swap(int *arr, int f, int s){
    int t = arr[f];
    arr[f] = arr[s];
    arr[s] = t;
}
void sort(int *arr, int size){
    for(int i = 0; i < size; i++){
        for(int j = 1; j < size - i; j++){
            if(arr[j-1] >= 0 && arr[j] <= 0){
                swap(arr, j - 1, j);
            }
        }
    }
}
#include <stdio.h>
#define SIZE 100
#include <stdbool.h>
#include <stdlib.h>
// more optimized solution 
void sorting(int *nums, int size){
    int len = 0;
    int *tem = malloc(size * sizeof(int));
    // negative int 
    for(int i = 0; i < size; i++){
        if(nums[i] < 0){
            tem[len++] = nums[i];
        }
    }
    // zeros 
    for(int i = 0; i < size; i++){
        if(nums[i] == 0){
            tem[len++] = nums[i];
        }
    }
    // positive nums
    for(int i = 0; i < size; i++){
        if(nums[i] > 0){
            tem[len++] = nums[i];
        }
    }
    // nums
    for(int i = 0; i < size; i++){
        nums[i] = tem[i];
    }
    free(tem);
}
void display(int *nums, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", nums[i]);
    }
}
int main(void){
    int nums[SIZE], len = 0;
    while(scanf("%d", &nums[len]) != EOF)len++;

    sorting(nums, len);
    display(nums, len);
    printf("\n");
    return 0;
}

// file handling questions
// you can sort alphabets and even numbers - ASCII  value

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h> // for isalpha() function 
#define SIZE 100


int main(void){
    FILE *file;
    char buffer[SIZE];
    int alphapos[SIZE];
    char alphachars[SIZE];
    file = fopen("data.txt", "r");
    if(file == NULL){
        perror("Error Opening File");
        return 1;
    }    
    int ch, len = 0, alphalen = 0;
    while ((ch = fgetc(file)) != EOF && len < SIZE) {
        buffer[len] = (char)ch;

        if(isalpha(ch)){
            alphapos[alphalen]  = len;
            alphachars[alphalen] = (char) ch;
            alphalen++;
        }

        len++;
    }
    fclose(file);
    // SORT 
    for(int i = 0; i < alphalen; i++){
        for(int j = 1; j < alphalen-i; j++){
            if((int)alphachars[j-1] > (int)alphachars[j]){
                char t = alphachars[j - 1];
                alphachars[j - 1] = alphachars[j];
                alphachars[j] = t;
            }
        }
    }

    // sorted buffer
    for(int i = 0; i < alphalen; i++){
        buffer[alphapos[i]] = alphachars[i];
    }
    // display
    for(int i = 0; i < len; i++){
        printf("%c", buffer[i]);
    }
    return 0;
}

// try 
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int *nextGreaterElement(int *nums1, int nums1Size, int *nums2, int nums2Size, int *returnSize)
{
    int *res = (int *)malloc(nums1Size * sizeof(int));
    *returnSize = nums1Size;

    for (int i = 0; i < nums1Size; i++)
    {
        bool flag = false;
        int idx = 0;

        
        for (int j = 0; j < nums2Size; j++)
        {
            if (nums1[i] == nums2[j])
            {
                idx = j;
                break;
            }
        }
        
        for (int j = idx + 1; j < nums2Size; j++)
        {
            if (nums2[j] > nums1[i])
            {
                res[i] = nums2[j];
                found = true;
                break;
            }
        }

        if (!found)
            res[i] = -1;
        flag = false;
    }

    return res;
}

// lab assignment 2
#include <stdio.h>
#define SIZE 1024

void swap(char a[], int first, int second)
{
    char temp = a[first];
    a[first] = a[second];
    a[second] = temp;
}

int getmaxIndex(char a[], int start, int end)
{
    int maxIndex = start;
    for (int i = start; i <= end; i++)
    {
        if ((int)a[maxIndex] > (int)a[i]) // ascending order
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

void selsort(char a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int last = len - 1 - i;
        int maxindex = getmaxIndex(a, 0, last);
        swap(a, maxindex, last);
    }
}

void display(char a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
}

int main(void)
{
    FILE *fp;
    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }

    char buffer[SIZE];
    int ch, len = 0;

    while ((ch = fgetc(fp)) != EOF && len < SIZE)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            buffer[len++] = (char)ch;
        }
    }

    buffer[len] = '\0';
    fclose(fp);

    printf("Original: ");
    display(buffer, len);

    selsort(buffer, len);

    printf("Sorted: ");
    display(buffer, len);

    // Reopen file to write the sorted data
    fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for (int i = 0; i < len; i++)
    {
        fputc(buffer[i], fp);
    }

    fclose(fp);
    return 0;
}

/// lab assignment 3
// measure time complexity of two sorting algos.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
void bubblesort(int arr[], int size); // function declaration
void selsort(int arr[], int size);

void append_to_file(const char *filename, int size, double TC)
{
    FILE *fp = fopen(filename, "a");
    if (fp == NULL)
    {
        perror("Error opening file for appending");
        return;
    }

    fprintf(fp, "%d %.6lf\n", size, TC);
    fclose(fp);
}

void generate_random_data(const char *filename, int size)
{
    FILE *f = fopen(filename, "w");
    if (f == NULL)
    {
        perror("Failed to create file");
        exit(1);
    }

    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        int num = rand() % 10000;
        fprintf(f, "%d\n", num);
    }

    fclose(f);
}
int main(void)
{
    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        perror("Error Opening in File");
        return 1;
    }
    for (int size = 0; size <= 5000; size += 1000)
    {
        generate_random_data("data.txt", size); // generates a random data
        clock_t start, end;
        double TC1, TC2;

        // memory allocation
        int *arr1 = malloc(size * sizeof(int));
        int *arr2 = malloc(size * sizeof(int));
        if (arr1 == NULL || arr2 == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }
        // Bubble Sort
        start = clock();
        bubblesort(arr1, size);
        end = clock();
        TC1 = (double)(end - start) / CLOCKS_PER_SEC;

        // Selection Sort
        start = clock();
        selsort(arr2, size);
        end = clock();
        TC2 = (double)(end - start) / CLOCKS_PER_SEC;

        append_to_file("bubble_sort_results.txt", size, TC1);
        append_to_file("selection_sort_results.txt", size, TC2);

        free(arr1);
        free(arr2);
    }
    printf("Program finished successfully.\n");
}

/* ALGORITHM FOR MATRIX MULTIPLICATION
   ====================================

   Algorithm: MatrixMultiplication(A, B, m, n, p)
   Input: Matrix A[m×n], Matrix B[n×p]
   Output: Matrix C[m×p] where C = A × B

   Step 1: START
   Step 2: Initialize result matrix C[m×p] with zeros
   Step 3: FOR i = 0 to m-1 DO
   Step 4:     FOR j = 0 to p-1 DO
   Step 5:         C[i][j] = 0
   Step 6:         FOR k = 0 to n-1 DO
   Step 7:             C[i][j] = C[i][j] + A[i][k] × B[k][j]
   Step 8:         END FOR
   Step 9:     END FOR
   Step 10: END FOR
   Step 11: Return matrix C
   Step 12: STOP

   Time Complexity: O(m × n × p)
   Space Complexity: O(m × p)
*/

#include <stdio.h>
#include <stdlib.h>

// Function to multiply two matrices
void multiplyMatrices(int A[][100], int B[][100], int C[][100], int m, int n, int p)
{
    int i, j, k;

    // Initialize result matrix with zeros
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication using three nested loops
    for (i = 0; i < m; i++)
    { // Row of matrix A
        for (j = 0; j < p; j++)
        { // Column of matrix B
            for (k = 0; k < n; k++)
            { // Common dimension
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to input matrix
void inputMatrix(int matrix[][100], int rows, int cols, char name)
{
    int i, j;
    printf("\nEnter elements of matrix %c (%dx%d):\n", name, rows, cols);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display matrix
void displayMatrix(int matrix[][100], int rows, int cols, char name)
{
    int i, j;
    printf("\nMatrix %c (%dx%d):\n", name, rows, cols);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int A[100][100], B[100][100], C[100][100];
    int m, n, p;

    printf("Matrix Multiplication Program\n");
    printf("=============================\n");

    // Input dimensions
    printf("Enter dimensions of matrix A (m x n):\n");
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    printf("\nEnter dimensions of matrix B (n x p):\n");
    printf("Number of rows must be %d\n", n);
    printf("Enter number of columns (p): ");
    scanf("%d", &p);

    // Input matrices
    inputMatrix(A, m, n, 'A');
    inputMatrix(B, n, p, 'B');

    // Multiply matrices
    multiplyMatrices(A, B, C, m, n, p);

    // Display results
    displayMatrix(A, m, n, 'A');
    displayMatrix(B, n, p, 'B');

    printf("\nResultant Matrix C = A x B:\n");
    displayMatrix(C, m, p, 'C');

    return 0;
}

/* SAMPLE INPUT/OUTPUT:
   ===================

   Matrix A (2x3):        Matrix B (3x2):        Result C (2x2):
   [ 1  2  3 ]           [ 7  8 ]              [ 58  64 ]
   [ 4  5  6 ]           [ 9 10 ]              [139 154 ]
                         [11 12 ]

   Calculation for C[0][0]:
   C[0][0] = A[0][0]*B[0][0] + A[0][1]*B[1][0] + A[0][2]*B[2][0]
   C[0][0] = 1*7 + 2*9 + 3*11 = 7 + 18 + 33 = 58
*/
