// Recursion HW Questions (lab tasks)
// Write recursive functions for the following:
//* add two numbers
/*
#include <stdio.h>
int add(int x, int y){
    // base case or terminating case
    if(y == 0){
        return x;
    }
    if(y < 0)
        return -1 + add(x, y + 1);
    else
        return 1 + add(x, y - 1);
}
int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", add(x, y));
    return 0;
}
*/

// subtract two numbers
// #include <stdio.h>
// int subtract(int x, int y){
//     if(y == 1)
//         return x - 1;
//     if(y > 0)
//         return subtract(x, y - 1) - 1;
//     else if(y < 0)
//         return 1 + subtract(x, y + 1);
// }
// int main(void)
// {
//     int x, y;
//     scanf("%d%d", &x, &y);
//     printf("%d\n", subtract(x, y));
//     return 0;
// }
/*
// tower of hanoi
#include <stdio.h>
void towershanoi(int n, char src, char helper, char dest){
    // base case or terminating case 
    if(n == 1){
        printf("%c -> %c\n", src, dest);
        return;
    }
    towershanoi(n - 1, src, dest, helper);
    printf("%c -> %c\n", src, dest);
    towershanoi(n - 1, helper, src, dest);
}
int main(void)
{
    towershanoi(4, 'a', 'b', 'c');
    return 0;
}
*/

// * linear search in an unsorted array
/*
#include <stdio.h>
struct student
{
    int mis;
    char name[32];
    float marks;
};
typedef struct student student;
int linear_search(student a[], int target, int len, int i){
    if(a[i].mis == target)
        return i;

    if(i < len){
        return linear_search(a[], target, len, i - 1);
    }
}
int main(void)
{
    
    return 0;
}
*/
/*
 
// in case of sorted array

// #include <stdio.h>
// #define SIZE 16
// int linear_search(int nums[], int target, int len, int start){
//     if(start < len && nums[start] == target)
//         return start;

//     if(start < len && nums[start] < target && start >= 0){
//         return linear_search(nums, target, len, start + 1);
//     }
//     return -1;
// }
// int main(void)
// {
//     int nums[SIZE], target = 0, result = 0, len = 0;
//     while(scanf("%d", &nums[len]) != EOF)
//         len++;
//     scanf("%d", &target);
//     result = linear_search(nums, target, len, 0);
//     if(result == -1)
//         printf("not found\n");
//     else
//         printf("%d\n", linear_search(nums, target, len, 0));
//     return 0;
// }
 
*/
// linear search in an unsorted array using recursion 
/*

#include <stdio.h>
#define SIZE 16
int linear_search(int nums[], int target, int len, int start){
    if(start < len && nums[start] == target)
        return start;

    if(start < len && start >= 0){
        return linear_search(nums, target, len, start + 1);
    }
    return -1;
}
int main(void)
{
    int nums[SIZE], target = 0, result = 0, len = 0;
    scanf("%d", &target);
    while(len <= SIZE && scanf("%d", &nums[len]) != EOF)
        len++;
    result = linear_search(nums, target, len, 0);
    if(result == -1)
        printf("not found\n");
    else
        printf("%d\n", result);
    return 0;
}

*/
/*
// gcd of two numbers
#include <stdio.h>
// greatest common divisor
int gcd(int x, int y){
    if(x < y){
        x = x + y;
        y = x - y;
        x = x - y;
    }
    if(y == 0)
        return x;
    return gcd(y, x % y);
}
int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", gcd(x, y));
    return 0;
}
*/
// To find x^y
/*
#include <stdio.h>
long pawr(int x, int y){
    if(y == 0){
        return 1;
    }
    return x * pawr(x, y - 1);
}
int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%ld\n", pawr(x, y));
    return 0;
}
*/

// * finding length of string
/*
#include <stdio.h>
#define SIZE 10000

long strlength(char *str, long len){
    if(str[len] == '\0')
        return len;
    return strlength(str, len + 1);
}
int main(void)
{
    char *str = "sumit desai";
    printf("%ld\n", strlength(str, 0));
    return 0;
}
*/
/*
// finding index of the maximum number in an array
#include <stdio.h>
#include <limits.h>
#define SIZE 16

int maxnumindex(int nums[], int i, int len){
    int max = INT_MIN, maxindex = 0;
    if(i < len && nums[i] > max){
        maxindex = i;
        return maxindex;

    }
    return maxnumindex(nums, i + 1, len);
}

int main(void)
{
    int nums[SIZE], len = 0, index = 0;
    while(scanf("%d", &nums[len]) != EOF)
        len++;

    index = maxnumindex(nums, 0, len);
    printf("%d\n", index);
    return 0;
}
*/

// // finding index of the maximum number in an array
// #include <stdio.h>
// #define SIZE 16
// #include <limits.h>
// int max = INT_MIN, maxI = 0; // globally declared 
// int maxInd(int nums[], int len, int i){
//     if(i == 0)
//         return maxI;
//     if(i < len && nums[i] > max){
//         max = nums[i];
//         maxI = i;
//     }
//     return maxInd(nums, len, i - 1);
// }
// int main(void)
// {
//     int nums[SIZE], len = 0;
//     while(len < SIZE && scanf("%d", &nums[len]) != EOF)
//         len++;
//     printf("%d\n", maxInd(nums, len, len - 1));
//     return 0;
// }
