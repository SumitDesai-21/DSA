// Dynamic Memory Allocation 
/*
1. Write a program that does the following:
reads an integer number n from end user, then allocates an array of n doubles, 
then reads n doubles from the end-user, then finds the average of those numbers, 
and prints it, then frees the allocated memory.
*/
// free(pointer)
/*
#include <stdio.h>
#include <stdlib.h>

double average(int n, double *arr){
    double sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }
    return (sum / n);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    if(n <= 0)
        printf("error (expected n > 0)\n");
    double *arr = (double *) malloc(n * (sizeof(double)));
    if(arr == NULL)
        printf("error (Null array)");
    double avg = average(n, arr);
    printf("%.2lf\n", avg);
    free(arr);
    return 0;
}
*/

// 2) 
/*
2. Write a program that does the following :

has one large array of size 1024 (or more)
reads a number n from end user, 
then allocates an array of n character pointers (pointed to by say, p)
then one by one, it reads n lines of input in the large array (upto its size) , 
but duplicates each string (with exact length) in a new malloced array every time,  
and makes the pointer array elements point to it one by one
then the program finds the line with the maximum length and prints it. 
(you can use strlen())
The data when stored looks like this, 
and the output of the program will be : i love clang
*/

// array of character pointers
// and pointer p is pointing towards array of character pointers 
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1024

int main(void)
{
    char **p;
    char line[SIZE] = {0}; // (char array)
    int n, i = 0;
    scanf("%d", &n);
    getchar(); // to skip newline of enter after taking n as input  
    p = (char **) malloc(n * (sizeof(char *)));
    // p[o], p[1], p[2], ... -> (char *)
    if(!p){
        printf("error\n");
        return 1;
    }
    while(i < n){
        if(fgets(line, SIZE, stdin) == NULL){ // fgets(char *s, int Size, restrict *inputstream(stdin))
            printf("error\n");
            return 1;
        }
        int len = strlen(line);
        if(len > 0 && line[len - 1] == '\n')
            line[len - 1] = '\0'; // insert null byte character when new line character is detected 
        p[i] = (char *) malloc((len + 1) * sizeof(char));
        if(!p[i]){
            printf("Error\n");
            return 1;
        }
        strcpy(p[i], line);
        i++;
    }
    int max = 0;
    char *ans = NULL;
    for(int i = 0; i < n; i++){
        if(strlen(p[i]) > max){
            max = strlen(p[i]);
            ans = p[i];
        }
    }
    if(ans)
        printf("%s\n", ans);

    for(int i = 0; i < n; i++){
        free(p[i]);
    }
    free(p);
    return 0;
}
*/

/*
reads an integer number n from end user, then allocates an array of n doubles, 
then reads n doubles from the end-user, then finds the average of those numbers, 
and prints it, then frees the allocated memory.
// */
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int n, i = 0;
//     scanf("%d", &n);
//     double *nums = (double *) malloc(n * sizeof(double)), sum = 0;
//     while(i < n){
//         scanf("%lf", &nums[i]);
//         sum += nums[i];
//         i++;
//     }
//     printf("%.2lf\n", sum / n);
//     free(nums);
//     return 0;
// }

// malloc 2nd question 
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int n, i = 0;
    scanf("%d", &n);
    getchar(); // skip newline of enter
    char line[1024];
    char **p = (char **) malloc(n * sizeof(char *));
    if(!p){
        printf("error\n");
        return 1;
    } 
    while(i < n){
        if(fgets(line, 1024, stdin) == NULL){
            printf("error\n");
            return 1;
        }
        int len = strlen(line);
        if(len > 0 && line[len - 1] == '\n')
            line[len - 1] = '\0';
        p[i] = (char *) malloc((len + 1) * sizeof(char));
        if(!p[i]){
            printf("error\n");
            return 1;
        }
        strcpy(p[i], line);
        i++;
    }
    int max = 0; 
    char *ans = NULL;
    for(int i = 0; i < n; i++){
        if(strlen(p[i]) > max){
            max = strlen(p[i]);
            ans = p[i];
        }
    }
    printf("%s\n", ans);
    for(int i = 0; i < n; i++){
        free(p[i]);
    }
    free(p);
    return 0;
}
*/

//  
