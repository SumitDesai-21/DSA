// #include <stdio.h>
// void reverse(int a[], int len){
//     int start = 0;
//     int end = len - 1;
//     while(start < end){
//         int temp = a[start];
//         a[start] = a[end];
//         a[end] = temp;
//         start++;
//         end--;
//     }
// }
// int main(void)
// {
//     int a[16] = {1, 2, 3, 4}, len = 4, i;
//     reverse(a, len);
//     for(i = 0; i < len; i++)
//         printf("%d ", a[i]);
//     return 0;
// }


// #include <stdio.h>

// int removedupl_k(int a[], int len, int k) {
//     int count[128] = {0}; 
//     int included[128] = {0};
//     int new_len = 0;

//     for (int i = 0; i < len; i++) {
//         count[a[i]]++;
//     }

//     for (int i = 0; i < len; i++) {
//         if (count[a[i]] >= k && !included[a[i]]) {
//             a[new_len++] = a[i]; 
//             included[a[i]] = 1;  
//         } else if (count[a[i]] < k) {
//             a[new_len++] = a[i]; 
//         }
//     }

//     return new_len;
// }
// int main(void)
// {
//     int a[128] = {1, 1, 1, 2, 2, 2, 3, 3, 4, 3}; 
//     int len = 10;
//     len = removedupl_k(a, len, 3);
//     for(int i = 0; i < len; i++) 
//        printf("%d ", a[i]); 
//     printf("\n");
//     return 0;
// }
/*
#include <stdio.h>

int removedupl_k(int a[], int len, int k) {
    int count[len];   // Frequency count array
    int unique[len];  // Array to store unique elements
    int unique_len = 0; // Length of unique array

    // Step 1: Count frequency of each element
    for (int i = 0; i < len; i++) {
        int found = 0;
        for (int j = 0; j < unique_len; j++) {
            if (unique[j] == a[i]) {
                count[j]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            unique[unique_len] = a[i];
            count[unique_len] = 1;
            unique_len++;
        }
    }

        // Step 2: Filter the array based on frequency and inclusion rule
    int new_len = 0;
    int included[len]; // Keep track of included unique elements
    for (int i = 0; i < unique_len; i++) {
        included[i] = 0; // Initialize all as not included
    }

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < unique_len; j++) {
            if (a[i] == unique[j]) {
                if (count[j] >= k && !included[j]) {
                    a[new_len++] = a[i];
                    included[j] = 1;
                } else if (count[j] < k) {
                    a[new_len++] = a[i];
                }
                break;
            }
        }
    }

    return new_len;
}

int main(void) {
    int a[] = {1, 1, 1, 2, 2, 3, 3, 4};
    int len = sizeof(a) / sizeof(a[0]);

    len = removedupl_k(a, len, 3);

    for (int i = 0; i < len; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
*/

// #include <stdio.h>
// int removedupl_k(int a[], int len, int k){
//     int count[len];
//     int unique[len];
//     int unique_len = 0;

//     for(int i = 0; i < len; i++){
//         int found = 0;
//         for(int j = 0; j < unique_len; j++){
//             if(a[i] == unique[j]){
//                 count[j]++;
//                 found = 1;
//                 break;
//             }
//         }
//         if(!found){
//             unique[unique_len] = a[i];
//             count[unique_len] = 1;
//             unique_len++;
//         }
//     }
//     int new_len = 0;
//     int included[len];
//     for(int i = 0; i < len; i++)
//         included[i] = 0;


//     for(int i = 0; i < len; i++){
//         for(int j = 0; j < unique_len; j++){
//             if(a[i] == unique[j]){
//                 if(count[j] >= k && !included[j]){
//                     a[new_len++] = a[i];
//                     included[j] = 1;
//                 }
//                 else if(count[j] < k){
//                     a[new_len++] = a[i];
//                 }
//                 else{
//                     break;
//                 }
//             }
//         }
//     }
//     return new_len;
// }
// int main(void)
// {
//     int a[128] = {1, 1, 1, 2, 2, 2, 3, 3, 4, 5}; 
//     int len = 10;
//     len = removedupl_k(a, len, 3);
//     for(int i = 0; i < len; i++) 
//        printf("%d ", a[i]); 
//     printf("\n");
//     return 0;
// }

/*
Write a C function which moves the minimum element of the array at index 0, 
without removing any element of the array.
void minatzero(int a[], int len);
*/

// #include <stdio.h>
// void minatzero(int a[], int len){
//     int min = a[0], minI = 0;
//     for(int i = 0; i < len; i++){
//         if(min > a[i]){
//             min = a[i];
//             minI = i;
//         }
//     }
//     int temp = a[minI];
//     a[minI] = a[0];
//     a[0] = temp;
// }
// int main(void)
// {
//     int a[8] = {4, 3, 5, 2}, len = 4;
//     minatzero(a, len);
//     printf("%d\n", a[0]);
//     return 0;
// }

// #include <stdio.h>
// int removedupl_k(int a[], int len, int k){
//     int count[len];
//     int unique[len];
//     int unique_len = 0;

//     for(int i = 0; i < len; i++){
//         int found = 0;
//         for(int j = 0; j < unique_len; j++){
//             if(a[i] == unique[j]){
//                 count[j]++;
//                 found = 1;
//                 break;
//             }
//         }
//         if(!found){
//             unique[unique_len] = a[i];
//             count[unique_len] = 1;
//             unique_len++;
//         }
//     }
//     int new_len = 0;
//     int included[len];
//     for(int i = 0; i < len; i++)
//         included[i] = 0;


//     for(int i = 0; i < len; i++){
//         for(int j = 0; j < unique_len; j++){
//             if(a[i] == unique[j]){
//                 if(count[j] >= k && !included[j]){
//                     a[new_len++] = a[i];
//                     included[j] = 1;
//                 }
//                 else if(count[j] < k){
//                     a[new_len++] = a[i];
//                 }
//                 else{
//                     break;
//                 }
//             }
//         }
//     }
//     return new_len;
// }
// int main(void)
// {
//     int a[128] = {1, 1, 1, 2, 2, 2, 3, 3, 4, 5}; 
//     int len = 10;
//     len = removedupl_k(a, len, 2);
//     for(int i = 0; i < len; i++) 
//        printf("%d ", a[i]); 
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// int removedupl_k(int a[], int len, int k){
//     int count[len];
//     int unique[len];
//     int unique_len = 0;
//     for(int i = 0; i < len; i++){
//         int found = 0;
//         for(int j = 0; j < unique_len; j++){
//             if(unique[j] == a[i]){
//                 count[j]++;
//                 found = 1;
//                 break;
//             }
//         }
//         if(!found){
//             unique[unique_len] = a[i];
//             count[unique_len] = 1;
//             unique_len++;
//         }
//     }
//     int new_len = 0;
//     int included[len];
//     for(int i = 0; i < unique_len; i++)
//         included[i] = 0;
//     for(int i = 0; i < len; i++){
//         for(int j = 0; j < unique_len; j++){
//             if(a[i] == unique[j]){
//                 if(count[j] >= k && !included[j]){
//                     a[new_len++] = a[i];
//                     included[j] = 1;
//                 }
//                 else if(count[j] < k)
//                     a[new_len++] = a[i];
//                 else
//                     break;
//             }
//         }
//     }
//     return new_len;
// }
// int main(void)
// {
//     int a[128] = {1, 1, 1, 2, 2, 2, 3, 3, 4, 5}; 
//     int len = 10;
//     len = removedupl_k(a, len, 2);
//     for(int i = 0; i < len; i++) 
//        printf("%d ", a[i]); 
//     printf("\n");
//     return 0;
// }


// #include <stdio.h>
// int is_non_descending(int *a, int len){
//     for(int i = 0; i < len - 1; i++){
//         if(a[i] > a[i + 1])
//             return 0;
//     }
//     return 1;
// }
// int main(void)
// {
//     int a[8] = {1, 2, 3, 4, 3}, len = 5; 
// printf("%d \n", is_non_descending(a, len));
//     return 0;
// }

// // removedupl_k 
// #include <stdio.h>
// int removedupl_k(int a[], int len, int k){
//     int unique[len];
//     int count[len];
//     int unique_len = 0;
//     // logic
//     for(int i = 0; i < len; i++){
//         int found = 0;
//         for(int j = 0; j < unique_len; j++){
//             if(a[i] == unique[j]){
//                 count[j]++;
//                 found = 1;
//                 break;
//             }
//         }
//         if(!found){
//             unique[unique_len] = a[i];
//             count[unique_len] = 1; // frequency counting 
//             unique_len++;
//         }
//     }
//     int new_len = 0;
//     int included[len];
//     for(int i = 0; i < unique_len; i++)
//         included[i] = 0;
//     for(int i = 0; i < len; i++){
//         for(int j = 0; j < unique_len; j++){
//             if(unique[j] == a[i]){
//                 if(count[j] >= k && !included[j]){
//                     a[new_len++] = a[i];
//                     included[j] = 1;
//                 }
//                 else if(count[j] < k)   
//                     a[new_len++] = a[i];
//                 else
//                     break;
//             }
//         }
//     }
//     return new_len;
// }
// int main(void)
// {
//     int a[128] = {1, 1, 1, 2, 2, 2, 3, 3, 4, 5}; 
//     int len = 10;
//     len = removedupl_k(a, len, 3);
//     for(int i = 0; i < len; i++) 
//        printf("%d ", a[i]); 
//     printf("\n");
//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     int a[8] = {1, 2, 3, 4}, *p, *q;
//     p = a + 2;
//     q = a - 1;
//     q[3] = 10;
//     p[4] = 20;
//     q = a + p[-1];
//     q[2] = 20;
//     for(int i = 0; i < 8; i++){
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

/*
#include <stdio.h>
#include <string.h>
int removedupl_k(char *a[], int len, int k){
    int count[len];
    int unique[len];
    int unique_len = 0;

    for(int i = 0; i < len; i++){
        int found = 0;
        for(int j = 0; j < unique_len; j++){
            if(strcmp(a[i], unique[j]) == 0){
                count[j]++;
                found = 1;
                break;
            }
        }
        if(!found){
            strcpy(unique[unique_len], a[i]);
            count[unique_len] = 1;
            unique_len++;
        }
    }
    int new_len = 0;
    int included[len];
    for(int i = 0; i < len; i++)
        included[i] = 0;

    for(int i = 0; i < len; i++){
        for(int j = 0; j < unique_len; j++){
            if(strcmp(a[i], unique[j] == 0){
                if(count[j] >= k && !included[j]){
                    strcpy(a[new_len++], a[i]);
                    included[j] = 1;
                }
                else if(count[j] < k){
                    strcpy(a[new_len++], a[i]);
                }
                else{
                    break;
                }
            }
        }
    }
    return new_len;
}
int main(void)
{
    int a[128] = {1, 1, 1, 2, 2, 2, 3, 3, 4, 5}; 
    int len = 10;
    len = removedupl_k(a, len, 2);
    for(int i = 0; i < len; i++) 
       printf("%d ", a[i]); 
    printf("\n");
    return 0;
}
*/
/*
int removedupl_k(crs cs[], int len, int k){
    int count[len];
    char *unique[len];
    int unique_len = 0;

    for(int i = 0; i < len; i++){
        int found = 0;
        for(int j = 0; j < unique_len; j++){
            if(strcmp(cs[i].category, unique[j] == 0){
                count[j]++;
                found = 1;
                break;
            }
        }
        if(!found){
            unique[unique_len] = malloc((strlen(cs[i].category) + 1) * sizeof(char));
            strcpy(unique[unique_len], cs[i].category);
            count[unique_len] = 1;
            unique_len++;
        }
    }
    int new_len = 0;
    int included[len];
    for(int i = 0; i < len; i++)
        included[i] = 0;

    for(int i = 0; i < len; i++){
        for(int j = 0; j < unique_len; j++){
            if(strcmp(cs[i].category, unique[j]) == 0){
                if(count[j] >= k && !included[j]){
                    strcpy(cs[new_len++].category, cs[i].category);
                    included[j] = 1;
                }
                else if(count[j] < k){
                    strcpy(cs[new_len++].category, cs[i].category);
                }
                else{
                    break;
                }
            }
        }
    }
    return new_len;
}
*/
/*
// {"xx", "yy", "zz"}
    // xx yy zz
    // xx zz yy
    // yy xx zz
    // yy zz xx
    // zz yy xx
    // zz xx yy
    // Backtracking 
#include <stdio.h>
void swap(char *first[], char *second[]){
    char *temp = *first;
    *first = *second;
    *second = temp;
}
void print_permutations(char *str[], int len){
    static int idx = -1;
    idx = idx + 1;
    // base case 
    if(idx == len){
        for(int i = 0; i < len; i++)
            printf("%s ", str[i]);
        printf("\n");
        idx = idx  - 1;
        return;
    }
    for(int i = idx; i  < len; i++){
        swap(&str[idx], &str[i]);
        print_permutations(str, len);
        swap(&str[idx], &str[i]);
    }
    idx = idx - 1;
}
int main(void)
{
    char *str[] = {"XX", "YY", "ZZ"};
    int len = 3;
    print_permutations(str, len);
    return 0;
}
*/
// 
/*
#include <stdio.h>
void swap(char *first[], char *Second[]){
    char *temp = *first;
    *first = *Second;
    *Second = temp;
}
void print_permutations(char *str[], int len){
    static int idx = -1;
    idx = idx + 1;
    // base case
    if(idx == len){
        for(int i = 0; i < len; i++)
            printf("%s ", str[i]);
        printf("\n");
        idx = idx - 1;
        return;
    }
    for(int i = idx; i < len; i++){
        swap(&str[i], &str[idx]);
        print_permutations(str, len);
        swap(&str[i], &str[idx]);
    }
    idx = idx - 1;
}
int main(void)
{
    char *str[] = {"XX", "YY", "ZZ"};
    int len = 3;
    print_permutations(str, len);
    return 0;
}
*/
// print all possible permutations of 1 2 3 
// 1 2 3
// 1 3 2 
// 2 1 3
// 2 3 1 
// 3 1 2 
// // 3 2 1 
// #include <stdio.h>
// void swap(int nums[], int f, int s){
//     int temp = nums[f];
//     nums[f] = nums[s];
//     nums[s] = temp;
// }
// void print_permutations(int nums[], int len){
//     static int idx = -1;
//     idx = idx + 1;
//     if(idx == len){
//         for(int i = 0; i < len; i++){
//             printf("%d ", nums[i]);
//         }
//         printf("\n");
//         idx = idx - 1; // backtrack index
//         return;
//     }
//     for(int i = idx; i < len; i++){
//         swap(nums, idx, i);
//         print_permutations(nums, len);
//         swap(nums, idx, i);
//     }
//     idx = idx - 1; // backtrack an index
// }
// int main(void)
// {
//     int nums[] = {1, 2, 3};
//     int len = 3;
//     print_permutations(nums, len);
//     return 0;
// }

// abc
// acb
// bac
// bca
// cab
// cba 

// #include <stdio.h>
// void swap(char str[], int f, int s){
//     char temp = str[f];
//     str[f] = str[s];
//     str[s] = temp;
// }
// void print_permutations(char str[], int len){
//     static int idx = -1;
//     idx = idx + 1;
//     if(idx == len){
//         for(int i = 0; i < len; i++)
//             printf("%c", str[i]);
//         printf("\n");
//         idx = idx - 1;
//         return;
//     }
//     for(int i = idx; i < len; i++){
//         swap(str, i, idx);
//         print_permutations(str, len);
//         swap(str, i, idx);
//     }
//     idx = idx - 1;
// }
// int main(void)
// {
//     char str[] = "abc";
//     int len = 3;
//     print_permutations(str, len);
//     return 0;
// }

// Questions on struct 
/*
#include <stdio.h>
#include <string.h>
typedef struct account 
{ 
    int acctid; 
    char name[32]; 
    double amount; 
    int type;
}account;
enum {SAVINGS = 1, CURRENT = 2, LOAN = 3};
char *accnt_type(int type){
    switch(type)
    {
        case 1: return "SAVINGS";
            break;
        case 2: return "CURRENT";
            break;
        case 3: return "LOAN";
            break;
        default : return "INVALID";
            break;
    }
}
int smallest_name(account a[], int len){
    int min_idx = 0;
    for(int i = 1; i < len; i++){
        if(strcmp(a[min_idx].name, a[i].name) > 0)
            min_idx = i;
    }
    return min_idx;
}
int main(void)
{
    account a[32];
    int len = 0;
    while(len < 32 && (scanf("%d %s %lf %d", &a[len].acctid, a[len].name, &a[len].amount, &a[len].type) == 4))
        len++;
    int min_idx = smallest_name(a, len);
    printf("%d %s %.2lf %s\n", a[min_idx].acctid, a[min_idx].name, a[min_idx].amount, accnt_type(a[min_idx].type));
    return 0;
}
*/

// struct 2nd question 
/*
#include <stdio.h>
#include <stdlib.h>
#define SIZE 32
typedef struct point {
    int x, y, z;
}point;
void print_records(point arr[], int len){
    printf("------array------\n");
    for(int i = 0; i < len; i++)
        printf("%d %d %d\n", arr[i].x, arr[i].y, arr[i].z);
}
int main(void)
{
    point arr[SIZE];
    int len = 0, n = 0;
    scanf("%d", &n);
    while(len < n){
        scanf("%d %d %d", &arr[len].x, &arr[len].y, &arr[len].z);
        len++;
    }

    print_records(arr, len);
    int idx = 0;
    scanf("%d", &idx);
    if(idx > n || idx < 0){
        perror("Invalid Index\n");
        return 1;
    }
    for(int i = n; i > idx; i--)
        arr[i] = arr[i - 1];
    
    scanf("%d %d %d", &arr[idx].x, &arr[idx].y, &arr[idx].z);
    print_records(arr, len + 1);
    return 0;
}
*/
// my own strtok function 

// #include <stdio.h>
// char *strtoken(char *str){
//     static char *input = NULL;
//     if(str != NULL)
//         input = str;
//     if(input == NULL || *input == '\0')
//         return NULL;
//     while(*input == ',')
//         input++;
//     if(*input == '\0')
//         return NULL;

//     char *p = input;
//     while(*input != ',')
//         input++;
    
//     if(*input != '\0'){
//         *input = '\0';
//         input++;
//     }
//     return p;
// }
// int main(void)
// {
    
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <fcntl.h>
// #define SIZE 1024

// int dict_search(char *lines[], int len, char *target){
//     int start = 0;
//     for(int i = 0; i < len; i++){
//         if(target[0] == (lines[i])[0]){
//             start = i;
//             break;
//         }
//     }
//     for(int i = start; target[0] == (lines[i])[0]; i++){
//         if(strcmp(lines[i], target) == 0)
//             return i;
//     }
//     return -1;
// }
// int readline(int fd, char *s, int size){
//     char *p = s;
//     long int n = 0;
//     while(((s - p) < size - 1) && (n = read(fd, s, 1)) == 1){
//         if(*s == '\n')
//             break;
//         s++;
//     }
//     if(n == -1){
//         perror("reading failed\n");
//         exit(1);
//     }
//     *s = '\0';
//     return (s - p);
// }
// int readfile(char *filename, char *lines[], int size){
//     int fd = open(filename, O_RDONLY);
//     if(fd == -1){
//         perror("open failed\n");
//         exit(1);
//     }
//     char buffer[SIZE];
//     int i = 0;
//     while(i < size && readline(fd, buffer, SIZE) > 0){
//         char *token = strtok(buffer, " , ");
//         while(token != NULL){  
//             lines[i] = malloc((strlen(token) + 1) * sizeof(char));
//             if(lines[i] == NULL){
//                 perror("allocation failed\n");
//                 exit(1);
//             }
//             strcpy(lines[i], token);
//             i++;
//             token = strtok(NULL, " , ");
//         }
//     }
//     return i;
// }
// int main(int argc, char *argv[])
// {
//     char *lines[32];
//     int len = readfile(argv[1], lines, 32);
//     char target[SIZE];
//     scanf("%s", target);
//     int i = binary_search(lines, len, target);
//     if(i == -1){
//         printf("not found\n");
//         return 1;
//     }
//     else
//         printf("found at idx: %d\n", i);
//     return 0;
// }

// min max selection sort
/*
#include <stdio.h>
void swap(int nums[], int f, int s){
    int temp = nums[f];
    nums[f] = nums[s];
    nums[s] = temp;
}
int getMaxIndex(int nums[], int start, int end){
    int maxIdx = start;
    for(int i = start; i <= end; i++){
        if(nums[maxIdx] < nums[i]) 
            maxIdx = i;
    }
    return maxIdx;
}
int getMinIdx(int nums[], int start, int end){
    int minidx = end;
    for(int i = start; i <= end; i++){
        if(nums[minidx] > nums[i])
            minidx = i;
    }
    return minidx;
}
void selection_sort(int nums[], int len){
    for(int i = 0; i < len; i++){
        int maxidx = getMaxIndex(nums, 0, len - i - 1);
        int minidx = getMinIdx(nums, i, len - 1);
        swap(nums, maxidx, len - i - 1);
        swap(nums, minidx, i);
    }
}
int main(void)
{
    int nums[] = {3, 4, 5, 1, 2};
    int len = 5;
    selection_sort(nums, len);
    for(int i = 0; i < len; i++){
        printf("%d ", nums[i]);
    }
    return 0;
}
*/

// #include <stdio.h>
// void swap(int nums[], int f, int s){
//     int temp = nums[f];
//     nums[f] = nums[s];
//     nums[s] = temp;
// }
// void inssort(int nums[], int len){
//     int n = len - 1;
//     for(int i = n; i > 0; i--){
//         for(int j = i - 1; j < n; j++){
//             if(nums[j] > nums[j + 1]){
//                 swap(nums, j, j + 1);
//             }
//             else
//                 break;
//         }
//     }
// }
/*
void bubble_sort(int nums[], int len){
    int swapped;
    for(int i = len - 1; i >= 0; i--){
        swapped = 0;
        for(int j = len - 1; j >= len - i; j--){
            if(nums[j - 1] > nums[j]){
                swap(nums, j - 1, j);
                swapped = 1;
            }
        }
        if(!swapped)
            break;
    }
}
int main(void)
{
    int nums[] = {5, 4, 3, 2, 1};
    int len = 5;
    bubble_sort(nums, len);
    for(int i = 0; i < len; i++)
        printf("%d ", nums[i]);   
    return 0;
}
*/
/**/
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 1024
int main(void)
{
    int n, i = 0;
    scanf("%d", &n);
    char *lines[];
    char buffer[SIZE];
    for(int i = 0; i < n; i++){
        scanf("%s", buffer);
        lines[i] = malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(lines[i], buffer);
    }
    int maxidx = 0;
    for(int i = 1; i < n; i++){
        if(strlen(lines[maxidx]) < strlen(lines[i]))
            maxidx = i;
    }
    if(maxidx == -1){
        printf("error\n");
        return 1;
    }
    printf("%s\n", lines[maxidx]);
    for(int i = 0; i < n; i++)
        free(lines[i]);
    return 0;
}

#include <stdio.h>
#include <locale.h>
int main(void)
{
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("");
        }
        printf("\n");
    }
    return 0;
}
*/
// Write a C function, which given an array, 
//moves all odd numbers to the beginning and all even numbers to the end, 
//maintaining their relative order.
//void oddtheneven(int a[], int len);

// #include <stdio.h>
// #define SIZE 16
// void oddtheneven(int a[], int len){
//     int oddlen = 0, evenlen = 0, odd[SIZE], even[SIZE];
//     for(int i = 0; i < len; i++){
//         if(a[i] % 2 == 0)
//             even[evenlen++] = a[i];
//         else 
//             odd[oddlen++] = a[i];
//     }
//     if(evenlen == 0){
//         for(int i = 0; i < oddlen; i++)
//             a[i] = odd[i];
//     }
//     if(oddlen == 0){
//         for(int i = 0; i < evenlen; i++)
//             a[i] = even[i];
//     }
//     else{
//         for(int i = 0; i < oddlen; i++)
//             a[i] = odd[i];
//         for(int i = oddlen; i < len; i++){
//             a[i] = even[i - evenlen];
//         }
//     }
// }
// int main(void)
// {
//     int a[] = { 1, 2, 3, 4, 5, 6}, len = 6, i;
//     oddtheneven(a, len);
//     for(i = 0; i < len; i++)
//         printf("%d ", a[i]);

//     return 0;
// }
/*
#include <stdio.h>
int main(void)
{
    int num;
    while(scanf("%d", &num) != EOF){
        int q = num, flag = 1;
        if(q < 0){
            printf("invalid input\n");
            return 1;
        }
        while(q > 1){
            if(q %2 != 0)
                flag = 0;
            q /= 2;
        }
        if(flag)
            printf("%d ", num);
    }
    return 0;
}
*/
/*
#include <stdio.h>
int isPrime(int n){
    int flag = 1;
    if(n <= 1)
        flag = 0;
    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0)
            flag = 0;
    }
    return flag;
}
int main(void)
{
    int start, end, sum = 0;
    scanf("%d %d", &start, &end);
    if(start < 0 || end < 0 || start > end){
        printf("invalid input\n");
        return 1;
    }
    for(int i = start; i <= end; i++){
        if(isPrime(i) == 1)
            sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
*/
/*
// loop problems
#include <stdio.h>
int main(void)
{
    // pattern problem
    int n, idx = 0;
    scanf("%d", &n);
    for(int i = 0; idx != n; i++){
        for(int j = 0; j < i; j++){
            printf("%d ", ++idx);
        }
        printf("\n");
    }
    return 0;
}
*/
// recursive function to calculate sum of first N natural number 
/*
#include <stdio.h>
int sumofnumbers(int n){
    if(n == 1)
        return 1;
    return n + sumofnumbers(n - 1);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    if(n <= 0){
        printf("invalid input\n");
        return 1;
    }
    printf("%d\n", sumofnumbers(n));
    return 0;
}
*/
/*
#include <stdio.h>
int sumofdigits(int n){
    static int sum = 0;
    if(n <= 0){
        return sum;
    }
    sum += (n % 10);
    return sumofdigits(n / 10);
}
int main(void)
{
    int num;
    scanf("%d", &num);
    printf("%d\n", sumofdigits(num));
    return 0;
}
*/

// recursiveively reverse an array
/*
#include <stdio.h>
void reverse_array(int arr[], int len, int start, int end){
    if(start > end)
        return;
    int temp = arr[start];
    arr[start]= arr[end];
    arr[end] = temp;   
    return reverse_array(arr, len, start + 1, end - 1);
}
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5}, len = 5;
    reverse_array(arr, len, 0, len - 1);
    for(int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    return 0;
}
*/
/*
#include <stdio.h>
int reversedigits(int n){
    int q = n;
    static int reverse_num = 0;
    if(q <= 0)
        return reverse_num;
    reverse_num = reverse_num * 10 + (q % 10);
    return reversedigits(n / 10);
}
int main(void)
{
    int num;
    scanf("%d", &num);
    printf("%d\n", reversedigits(num));
    return 0;
}
*/
/*
#include <stdio.h>
int Strlen(char str[], int len){
    if(str[len] == '\0')
        return len;

    return Strlen(str, len + 1);
}
int main(void)
{
    char str[] = "sumit";
    int len = 0;
    printf("%d\n", Strlen(str, len));
    return 0;
}
*/

// #include <stdio.h>
// #define SIZE 32
// typedef struct student{
//     long MIS_ID;
//     char name[32];
//     int marks;
// }student;
// void print_records(student s[], int len){
//     for(int i = 0; i < len; i++)
//         printf("%ld %s %d\n", s[i].MIS_ID, s[i].name, s[i].marks);
// }
// int main(void)
// {
//     student s[SIZE];
//     int len = 0;
//     while(len < SIZE && scanf("%ld %s %d", &s[len].MIS_ID, s[len].name, &s[len].marks) == 3)
//         len++;
//     print_records(s, len);
    
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// int removedupl_k(int a[], int len, int k){
//     int count[len];
//     int unique[len];
//     int unique_len = 0;

//     for(int i = 0; i < len; i++){
//         int found = 0;
//         for(int j = 0; j < unique_len; j++){
//             if(a[i] == unique[j]){
//                 count[j]++;
//                 found = 1;
//                 break;
//             }
//         }
//         if(!found){
//             (unique[unique_len] = a[i]);
//             count[unique_len] = 1;
//             unique_len++;
//         }
//     }
//     int new_len = 0;
//     int included[len];
//     for(int i = 0; i < len; i++)
//         included[i] = 0;

//     for(int i = 0; i < len; i++){
//         for(int j = 0; j < unique_len; j++){
//             if(a[i] == unique[j]){
//                 if(count[j] >= k && !included[j]){
//                     (a[new_len++] = a[i]);
//                     included[j] = 1;
//                 }
//                 else if(count[j] < k){
//                     (a[new_len++] = a[i]);
//                 }
//                 else{
//                     break;
//                 }
//             }
//         }
//     }
//     return new_len;
// }
// int main(void)
// {
//     int a[128] = {1, 1, 1, 2, 2, 2, 3, 3, 4, 5}; 
//     int len = 10;
//     len = removedupl_k(a, len, 2);
//     for(int i = 0; i < len; i++) 
//        printf("%d ", a[i]); 
//     printf("\n");
//     return 0;
// }
// removedupl_k


// #include <stdio.h>
// #define SIZE 16
// int removedupl_k(int a[], int len, int k){
//     int unique_len = 0;
//     int unique[SIZE];
//     int count[SIZE];

//     for(int i = 0; i < len; i++){
//         int found = 0;
//         for(int j = 0; j < unique_len; j++){
//             if(a[i] == unique[j]){
//                 count[j]++;
//                 found = 0;
//                 break;
//             }
//         }
//         if(!found){
//             unique[unique_len] = a[i];
//             count[unique_len] = 1;
//             unique_len++;
//         }
//     }
//     int new_len = 0;
//     int included[len];
//     for(int i = 0; i < len; i++)
//         included[i] = 0;
    
//     for(int i = 0; i < len; i++){
//         for(int j = 0; j < unique_len; j++){
//             if(a[i] == unique[j]){
//                 if(count[j] >= k && !included[j])
//                 a[new_len++] = a[i];
//                 included[j] = 1;
//             }
//             else if(count[j] < k)
//                 a[new_len++] = a[i];
//             else
//                 break;
//         }
//     }
//     return new_len;
// }
// int main(void)
// {
//     int a[128] = {1, 1, 1, 2, 2, 2, 3, 3, 4, 5}; 
//     int len = 10;
//     len = removedupl_k(a, len, 3);
//     for(int i = 0; i < len; i++) 
//        printf("%d ", a[i]); 
//     printf("\n");
//     return 0;
// }

// 1 1 2 3 5 8 13 21 34 ....

// #include <stdio.h>
// int main(void)
// {
//     int a, b, prev = 1, curr = 1, next = 0;
//     scanf("%d %d", &a, &b);
//     while(curr <= b){
//         if(a == prev && b == curr){
//             printf("yes\n");
//             return 0;
//         }
//         next = prev + curr;
//         prev = curr;
//         curr = next;
//     }
//     printf("no\n");
//     return 0;
// }

/*
#include <stdio.h>
int main(void)
{
    int n, sum = 1;
    scanf("%d" ,&n);
    if(n == 0){
        printf("%d\n", 0);
        return 0;
    }
    if(n < 0){
        printf("invalid input\n");
        return 1;
    }
    for(int i = 0; i < n; i++){
        printf("%d ", sum);
        int temp = sum;
        sum += temp;
    }
    return 0;
}
*/

// #include <stdio.h>
// #define SIZE 16
// void swap(int nums[], int f, int s){
//     int temp = nums[f];
//     nums[f] = nums[s];
//     nums[s] = temp;
// }
// void inssort(int nums[], int len){
//     int n = len - 1;
//     for(int i = n; i > 0; i--){
//         for(int j = i - 1; j < n; j++){
//             if(nums[j + 1] < nums[j])
//                 swap(nums, j + 1, j);
//             else    
//                 break;
//         }
//     }    
// }
// int main(void)
// {
//     int nums[SIZE], len = 0;
//     while(scanf("%d", &nums[len]) == 1)
//         len++;
//     if(len < 3){
//         printf("not found\n");
//         return 1;
//     }
//     inssort(nums, len);
//     printf("%d\n", nums[len - 3]);
//     return 0;
// }


// sinx, cosinx, tanx
// exponential series




// #include <stdio.h>
// #include <math.h>
// double fact(int n) {
//     double f = 1;
//     for (int i = 1; i <= n; i++) { 
//         f *= i;
//     }
//     return f;
// }
// double powr(double num, int pow) {
//     double pw = 1;
//     for (int i = 1; i <= pow; i++) {
//         pw *= num;
//     }
//     return pw;
// }
// int main() {
//     double x;
//     scanf("%lf", &x);
//     int i = 0;
//     double sum = 0;
//     double precision = 1e-6;  
//     while (fabs(sum) >= precision) {  
//         sum += pow(x, i)/fact(i);
//         i++;
//     }
//     printf("%.4f\n", sum);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n;
//     int r = 1;  
//     int c = 1;  
//     int sum = 0; 
//     int i = 1;  

   
//     scanf("%d", &n);

//     while (i <= n) {
        
//         sum += r * c;
//         if (i == 1) {
//             printf("%d", c * r); 
//         } else {
//             if (r == 1) {
//                 printf("+%d", c);
//             } else {
//                 printf("-%d", c); 
//             }
//         }
//         r *= -1; 
//         c += 2;  
//         i++;     
//     }

//     printf("\n%d\n", sum);

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int add(int a, int b) {

//   return a + b;
// }
// int mult(int a, int b){
//     int ans = 0, t = 0;
//     if(a >= 0 && b >= 0){
//         while(a--)
//             ans += add(b, 0);
//     }
//     else if(a < 0 && b < 0){
//         t = fabs(a);
//         while(t--)
//             ans += add(fabs(b), 0);
//     }
//     else{
//         t = fabs(a);
//         while(t--)
//             ans += add(b, 0);
//     }
//     return ans;
// }
// int main() {
//   printf("%d", mult(2, -4)); 
//   return 0;
// }


// questions on string functions
/*
#include <stdio.h>
char *strchar(char *str, char c){
    char *result = NULL;
    while(*str != '\0'){
        char *start = str;
        if(*start == c){
            result = (char *)str;
            break;
        }
        str++;
    }
    if(c == '\0'){
        return str;
    }
    return result;
}
int main(void)
{
printf("%s\n", strchar("abhijit", '\0'));
    return 0;
}
*/


// #include <stdio.h>
// long stringtoint(char *str){
//     long number = 0;
//     int i = 0;
//     while(str[i] != '\0'){
//         if(str[i] >= '0' && str[i] <= '9')
//             number = number * 10 + ((str[i]) - '0');
//         i++;
//     }
//     if(str[0] == '-')
//         number *= -1;
//     return number;
// }
// int main(void)
// {
//     char s[8] = "-003";
// printf("%ld\n", stringtoint(s));
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// char *inttostring(int x){
//     int q = x, neg = 0, cnt = 0;

//     if(q < 0){
//         neg = 1;
//         x = -x;
//     }
//     if(q == 0)
//         cnt = 1;
//     else{
//         while(q > 0){
//             q /= 10;
//             cnt++;
//         }
//     }
//     char *result = (char *)malloc((cnt + neg + 1) * sizeof(char));
//     if(!result){
//         printf("error\n");
//         exit(1);
//     }
//     result[cnt + neg] = '\0'; // Nullbyte 
//     if(neg)
//         result[0] = '-';
//     if(x == 0){
//         result[0] = '0';
//     }
//     else{
//         while(x > 0){
//             result[--cnt + neg] = (x % 10) + '0';
//             x /= 10;
//         }
//     }
//     return result;
// }
// int main(void)
// {
//     char *p = inttostring(-23); printf("%s\n", p); free(p);
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// char *inttostring(int x) {
//     int q = x, neg = 0, cnt = 0;

//     if (q < 0) {
//         neg = 1;
//         x = -x; 
//     }

//     if (q == 0) {
//         cnt = 1;  
//     } else {
//         while (q != 0) {
//             q /= 10;
//             cnt++;
//         }
//     }

//     char *result = (char *)malloc((cnt + neg + 1) * sizeof(char));
//     if (!result) {
//         printf("error\n");
//         exit(1);
//     }

//     result[cnt + neg] = '\0';
//     if (neg) {
//         result[0] = '-';  
//     }

//     if (x == 0) {
//         result[0] = '0';  
//     } else {
//         while (x > 0) {
//             result[--cnt + neg] = (x % 10) + '0'; 
//             x /= 10;
//         }
//     }

//     return result;
// }
// int main(void){
//     char *p = inttostring(-23); printf("%s\n", p); free(p);
//     return 0;
// }

// #include <stdio.h>

// char *stranybyte(char *s, char *accept){
//     while(*s != '\0'){
//         const char *p = accept;
//         while(*p != '\0'){
//             if(*s == *p){
//                 return s;
//             }
//             p++;
//         }
//         s++;
//     }
//     return NULL;
// }
// int main(void)
// {
//     printf("%s\n", stranybyte("abhijit","xiy") ? stranybyte("abhijit","xiy"): "");

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// char *strdupl(const char *s){
//     char *p = malloc((strlen(s) + 1) * sizeof(char));
//     strcpy(p, s);
//     return p;
// }
// int main(void)
// {
//     char *str = "", *p;
// p = strdupl(str); 
// printf("%s\n", p);
// free(p);
//     return 0;
// }


#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1024
int readline(char *s, int fd, int size){
    char *p = s;
    while(((s - p) < size - 1) && read(fd, s, 1)){
        if(*s == '\n')
            break;
        s++;
    }
    *s = '\0';
    return (s - p);
}
int readfile(char *filename, char *words[], int size){
    int fd = open(filename, O_RDONLY);
    
    if(fd == -1){
        perror("open failed\n");
        exit(1);        
    }
    char  buffer[SIZE];
    int i = 0;
    while(i < size && readline(buffer, fd, SIZE) > 0){
        char *token = strtok(buffer, " ");
        while(token != NULL){
            words[i] = malloc((strlen(token) + 1) * sizeof(char));
            if(words[i] == NULL){
                printf("allocation failed\n");
                exit(1);
            }
            strcpy(words[i], token);
            token = strtok(NULL, " ");
            i++;
        }
    }
    close(fd);
    return i;
}
int main(void)
{
    return 0;
}
