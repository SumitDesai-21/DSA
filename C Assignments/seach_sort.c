// Write a program to demonstrate (using CSV files)
// (a) ternary search: divide the search space into 1/3 every time.
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define SIZE 1024
int main(int argc, char *argv[]) 
{
    // fd = file descriptor
    int fd = 0, i = 0;
    long int bytesread = 0;
    char ch[SIZE];
    int nums[SIZE]; 
    fd = open("/home/sumit/csv.txt", O_RDONLY);
    if(fd == -1){
        printf("open failed\n");
        return 1;
    }
    bytesread = read(fd, ch, sizeof(ch) - 1);
    if(bytesread < 0){
        printf("error\n");
        return 1;
    }
    ch[bytesread] = '\0';
    char *token = strtok(ch, ",");
    while(token != NULL && i < SIZE){
        nums[i] = atoi(token);
        printf("%d ", nums[i]);
        i++;
        token = strtok(NULL, ",");
    }
    printf("\n");
    close(fd);
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define SIZE 1024
int ternary_search(int nums[], int len, int target){
    int start = 0;
    int end = len - 1;
    while(start <= end){
        int m1 = (start + end) / 3;
        int m2 = (2 * (start + end))/3;
        if(nums[m1] == target)
            return m1;
        else if(nums[m2] == target)
            return m2;
        else if(target < nums[m1])
            end = m1 - 1;
        else if(target > nums[m2])
            start = m2 + 1;
        else{
            start = m1 + 1;
            end = m2 - 1;
        }
    }
    return -1;
}
int main(int argc, char *argv[]) 
{
    // fd = file descriptor
    int fd = 0, len = 0, result = 0, target = 0;
    scanf("%d", &target);
    long int bytesread = 0;
    char ch[SIZE];
    int nums[SIZE]; 
    fd = open("/home/sumit/csv.txt", O_RDONLY);
    if(fd == -1){
        printf("open failed\n");
        return 1;
    }
    bytesread = read(fd, ch, sizeof(ch) - 1);
    if(bytesread < 0){
        printf("error\n");
        return 1;
    }
    ch[bytesread] = '\0';
    char *token = strtok(ch, ",");
    while(token != NULL && len < SIZE){
        nums[len] = atoi(token);
        len++;
        token = strtok(NULL, ",");
    }
    close(fd);
    result = ternary_search(nums, len, target);
    if(result == -1){
        printf("error\n");
        return 1;
    }
    printf("%d\n",result);
    return 0;
}
*/

// try ternary search using csv file (comma seprated value file)
/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
int ternary(int nums[], int len, int n){
    int l = 0;
    int h = len - 1;
    while(l <= h){
        int m1 = (l + h) / 3;
        int m2 = (2*(l + h)) / 3;
        if(n == nums[m1])
            return m1;
        else if(n == nums[m2])
            return m2;
        else if(n < nums[m1])
            h = m1 - 1;
        else if(n > nums[m2])
            l = m2 + 1;
        else{
            l = m1 + 1;
            h = m2 - 1;
        }
    }
    return -1;
}
int main(void)
{
    int fd = 0, len = 0;
    char buffer[1024]; // It'll store file character by character 
    int nums[16];
    long int bytesread = 0;
    fd = open("/home/sumit/CSV/csv.txt", O_RDONLY);
    if(fd == -1){
        perror("open failed\n");
        return 1;
    }
    bytesread = read(fd, buffer, sizeof(buffer) - 1);
    if(bytesread < 0){
        perror("error\n");
        return 1;
    }
    buffer[bytesread] = '\0';
    char *token = strtok(buffer, ",");
    while(token != NULL && len < 1024){
        nums[len] = atoi(token);
        len++;
        token = strtok(NULL, ",");
    }
    close(fd);
    printf("%d\n", ternary(nums, len, 22));
    return 0;
}
*/

// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// #include <fcntl.h>
// #include <stdlib.h>
// #define SIZE 1024

// int ternary_search(int nums[], int len, int target) {
//     int start = 0;
//     int end = len - 1;

//     while (start <= end) {
//         int m1 = start  + (end - start) / 3;
//         int m2 = end - (end - start) / 3;

//         if (nums[m1] == target)
//             return m1;
//         if (nums[m2] == target)
//             return m2;

//         if (target < nums[m1])
//             end = m1 - 1;
//         else if (target > nums[m2])
//             start = m2 + 1;
//         else {
//             start = m1 + 1;
//             end = m2 - 1;
//         }
//     }
//     return -1;
// }

// int main(int argc, char *argv[]) {
//     int fd = 0, len = 0, result = 0, target = 0;
//     char buffer[SIZE];
//     int nums[SIZE];

//     printf("target : ");
//     if (scanf("%d", &target) != 1) {
//         printf("invalid input\n");
//         return 1;
//     }

//     // Open the file
//     fd = open("/home/sumit/CSV/d.txt", O_RDONLY);
//     if (fd == -1) {
//         perror("opening failed\n");
//         return 1;
//     }

//     long int  bytesread = read(fd, buffer, sizeof(buffer) - 1);
//     if (bytesread < 0) {
//         perror("Error reading file");
//         close(fd);
//         return 1;
//     }
//     buffer[bytesread] = '\0'; // Null-terminate the buffer

//     // Tokenize the buffer and parse integers
//     char *token = strtok(buffer, ",");
//     while (token != NULL && len < SIZE) {
//         nums[len++] = atoi(token); // Convert token to integer
//         token = strtok(NULL, ",");
//     }
//     close(fd);

//     // Perform ternary search
//     result = ternary_search(nums, len, target);
//     if (result == -1) {
//         printf("Target not found in the array.\n");
//     } else {
//         printf("Target found at index: %d\n", result);
//     }

//     return 0;
// }

// using struct in CSV File
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
typedef struct account 
{
    char name[16];
    unsigned long phone;
    unsigned int accid;
    double amount;
}acc;
int ternary(acc a[], int len, int n){
    int l = 0;
    int h = len - 1;
    while(l <= h){
        int m1 = l + (h - l)/ 3;
        int m2 = h - (h - l) / 3;
        if(n == a[m1].amount)
            return m1;
        else if(n == a[m2].amount)
            return m2;
        else if(n < a[m1].amount)
            h = m1 - 1;
        else if(n > a[m2].amount)
            l = m2 + 1;
        else{
            l = m1 + 1;
            h = m2 - 1;
        }
    }
    return -1;
}
// void insert(char *line, acc a[], int i){
//     strcpy(a[i].name, strtok(line, ","));
//     a[i].phone = atol(strtok(line, ","));
//     a[i].accid = atoi(strtok(line, ","));
//     a[i].amount = atof(strtok(line, ","));
// }
void insert(char *line, acc a[], int i) {
    char *token = strtok(line, ",");
    strcpy(a[i].name, token);

    token = strtok(NULL, ",");
    a[i].phone = atol(token);

    token = strtok(NULL, ",");
    a[i].accid = atoi(token);

    token = strtok(NULL, ",");
    a[i].amount = atof(token);
}

int readline(int fd, char *s, int size){
    char *p = s;
    while(((s - p) < size - 1) && (read(fd, s, 1) == 1) && (*s != '\n')){
        s++;
    }
    *s = '\0';
    return (s - p);
}
int readfile(char *filename, acc accnts[], int size){
    int fd = 0, n = 0;
    char line[1024];
    fd = open(filename, O_RDONLY);
    if(fd == -1){
        perror("open failed\n");
        return 1;
    }
    int i = 0;
    while((n = readline(fd, line, 1024))){
        insert(line, accnts, i);
        i++;
    }  
    return i;
}
int main(int argc, char *argv[])
{
    acc accnts[32];
    int len = 0, i = 0;
    len = readfile("/home/sumit/CSV/data.txt", accnts, 32);
    i = ternary(accnts, len, 100.00);
    if(i == -1){
        printf("not found\n");
        return 1;
    }
    printf("%s %lu %u %lf\n", accnts[i].name, accnts[i].phone, accnts[i].accid, accnts[i].amount);
    return 0;
}

*/

// Write a program to demonstrate (using CSV files)
// (a) ternary search: divide the search space into 1/3 every time.
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct account {
    char name[16];
    unsigned long phone;
    unsigned int accid;
    double amount;
} acc;

int ternary(acc a[], int len, double n) {
    int l = 0;
    int h = len - 1;
    while (l <= h) {
        int m1 = l + (h - l) / 3;
        int m2 = h - (h - l) / 3;
        if (n == a[m1].amount)
            return m1;
        else if (n == a[m2].amount)
            return m2;
        else if (n < a[m1].amount)
            h = m1 - 1;
        else if (n > a[m2].amount)
            l = m2 + 1;
        else {
            l = m1 + 1;
            h = m2 - 1;
        }
    }
    return -1;
}

void insert(char *line, acc a[], int i) {
    char *token = strtok(line, ",");
    strcpy(a[i].name, token);

    token = strtok(NULL, ",");
    a[i].phone = atol(token);

    token = strtok(NULL, ",");
    a[i].accid = atoi(token);

    token = strtok(NULL, ",");
    a[i].amount = atof(token);
}

int readline(int fd, char *s, int size) {
    char *p = s;
    while (((s - p) < size - 1) && (read(fd, s, 1) == 1)) {
        if (*s == '\n') {
            break;
        }
        s++;
    }
    *s = '\0';
    return (s - p);
}

int readfile(char *filename, acc accnts[], int size) {
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("open failed");
        return 0;
    }
    char line[1024];
    int i = 0;
    while (readline(fd, line, 1024) && i < size) {
        insert(line, accnts, i);
        i++;
    }
    close(fd);
    return i;
}

int main(int argc, char *argv[]) {
    acc accnts[32];
    int len = 0, i = 0;
    double target;

    printf("target amount: ");
    scanf("%lf", &target);

    len = readfile(argv[1], accnts, 32);
    if (len == 0) {
        printf("Error reading file.\n");
        return 1;
    }

    i = ternary(accnts, len, target);
    if (i == -1) {
        printf("not found\n");
        return 1;
    }
    printf("%s %lu %u %lf\n", accnts[i].name, accnts[i].phone, accnts[i].accid, accnts[i].amount);
    return 0;
}
*/
/*
// (b) dictionary search: write a program that comes close to the way humans search in a dictionary.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
// #define SIZE 1024
int dict_search(char *lines[], char *target, int len){
    int l = 0;
    int h = len  - 1;
    while(l <= h){
        int mid = l + (h - l)/ 2;
        if(strcmp(lines[mid], target) == 0)
            return mid;
        else if(strcmp(lines[mid], target) > 0)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int dict_search(char *lines[], char *target, int len){
    int start = 0;
    for(int i = 0; i < len; i++){
        if(target[0] == (lines[i])[0]){
            start = i;
            break;
        }
    }
    for(int i = start; target[0] == (lines[i])[0]; i++){
        if(strcmp(target, lines[i]) == 0)  
            return i;
    }
    return -1;
}
int main(int argc, char *argv[])
{
    int fd = 0, len = 0;
    char buffer[SIZE];
    char *lines[100];
    long int readbytes = 0;
    fd = open(argv[1], O_RDONLY);
    if(fd == -1){
        perror("open failed\n");
        return 1;
    }
    readbytes = read(fd, buffer, SIZE - 1);
    if(readbytes < 0){
        perror("reading failed\n");
        return 1;
    }
    buffer[readbytes] = '\0';
    char *token = strtok(buffer, " , ");
    while(token != NULL){
        if(strlen(token) > 0){
            lines[len] = malloc((strlen(token) + 1) * sizeof(char));
            if(lines[len] == NULL){
                printf("allocation failed\n");
                return 1;
            }
            strcpy(lines[len], token);
            len++;
        }
        token = strtok(NULL, " , ");
    }
    int i = dict_search(lines, "yam", len);
    if(i == -1)
        printf("not found\n");
    else
        printf("found at index: %d\n", i);
    return 0;
}
*/



// int dict_search(dict d[], int len, char *target){
//     int start = 0;
//     for(int i = 0; i < len; i++){
//         if(target[0] == (d[i].word)[0]){
//             start = i;
//             break;
//         }
//     }
//     for (int i = start; i < len && target[0] == (d[i].word)[0]; i++) {
//         if (strcmp(target, d[i].word) == 0)
//             return i;
//         }
//     return -1;
// }

// real life dictionary program 
// which will involve use of struct 
// find a word and print it's meaning if it present otherwise it's not present

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <fcntl.h>
// #define SIZE 1024
// typedef struct dictionary{
//     int sr_no;
//     char word[SIZE];
//     char meaning[SIZE];
// }dict;
// int dict_search(dict d[], int len, char *target){
//     int l = 0;
//     int h = len  - 1;
//     while(l <= h){
//         int mid = l + (h - l)/ 2;
//         if(strcmp(d[mid].word, target) == 0)
//             return mid;
//         else if(strcmp(d[mid].word, target) > 0)
//             h = mid - 1;
//         else
//             l = mid + 1;
//     }
//     return -1;
// }
// void insert(char line[], dict d[], int i) {
//     char *token = strtok(line, ": ");
//     d[i].sr_no = atoi(token);

//     token = strtok(NULL, ": ");
//     strcpy(d[i].word, token);

//     token = strtok(NULL, ": ");
//     strcpy(d[i].meaning, token);
// }
// int readline(int fd, char *s, int size){
//     char *p = s;
//     while(((s - p) < size - 1) && (read(fd, s, 1) == 1)){
//         if(*s == '\n')
//             break;
//         s++;
//     }
//     *s = '\0';
//     return (s - p);
// }
// int readfile(char *filename, dict d[] ,int size){
//     int fd = open(filename, O_RDONLY);
//     if(fd == -1){
//         perror("open failed\n");
//         exit(1);
//     }
//     char line[SIZE];
//     int i = 0;
//     while(readline(fd, line, SIZE) && i < size){
//         insert(line, d, i);
//         i++;
//     }
//     close(fd);
//     return i;
// }
// int main(int argc, char *argv[])
// {
//     if (argc < 2) {
//     printf("Usage: %s <filename>\n", argv[0]);
//     exit(1);
//     }
//     dict d[32];
//     int len = 0, i = 0;
//     len = readfile(argv[1], d, 32);
//     i = dict_search(d, len, "Catharsis");
//     if(i == -1)
//         printf("not found\n");
//     else{
//         printf("found at index: %d\n", i);
//         printf("%d. %s: %s\n", d[i].sr_no, d[i].word, d[i].meaning);
//     }
//     return 0;
// }

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define SIZE 1024

typedef struct dictionary {
    int sr_no;
    char word[SIZE];
    char meaning[SIZE];
} dict;

int dict_search(dict d[], int len, char *target){
    int start = 0;
    for(int i = 0; i < len; i++){
        if(target[0] == (d[i].word)[0]){
            start = i;
            break;
        }
    }
    for(int i = start; target[0] == (d[i].word)[0]; i++){
        if(strcmp(target, d[i].word) == 0)  
            return i;
    }
    return -1;
}
void insert(char line[], dict d[], int i) {
    char *token = strtok(line, ".");
    if (token == NULL) return;
    d[i].sr_no = atoi(token);

    token = strtok(NULL, ". ");
    if (token == NULL) return;
    strcpy(d[i].word, token);

    size_t len = strlen(d[i].word);
    if (len > 0 && d[i].word[len - 1] == ':') {
        d[i].word[len - 1] = '\0';
    }

    token = strtok(NULL, ": ");
    if (token == NULL) return;
    strcpy(d[i].meaning, token);
}

int readline(int fd, char *s, int size) {
    char *p = s;
    while (((s - p) < size - 1) && (read(fd, s, 1) == 1)) {
        if (*s == '\n')
            break;
        s++;
    }
    *s = '\0';
    return (s - p);
}
int readfile(char *filename, dict d[], int size) {
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("open failed\n");
        exit(1);
    }

    char line[SIZE];
    int i = 0;
    while (readline(fd, line, SIZE) && i < size) {
        insert(line, d, i);
        i++;
    }

    close(fd);
    return i;
}

// Main function
int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        exit(1);
    }

    dict d[32];
    int len = 0, i = 0;

    len = readfile(argv[1], d, 32);

    i = dict_search(d, len, "");
    if (i == -1)
        printf("Word not found\n");
    else {
        printf("Found at index: %d\n", i);
        printf("%d. %s: %s\n", d[i].sr_no, d[i].word, d[i].meaning);
    }
    return 0;
}
*/
// a) min-max selection sort: in one iteration move the minimum to beginning and maximum to the end.
// bubble sort
// selection sort
// #include <stdio.h>
// #include <limits.h>
// void swap(int nums[], int first, int last){
//     int temp = nums[first];
//     nums[first] = nums[last];
//     nums[last] = temp;
// }
// int getmaxindex(int nums[], int start, int end){
//     int maxIndex = start;
//     for(int i = start; i <= end; i++){
//         if(nums[maxIndex] < nums[i])    
//             maxIndex = i;
//     }
//     return maxIndex;
// }
// void sortColors(int* nums, int numsSize) {
//     int len = numsSize;
//     for(int i = 0; i < len; i++){
//         int last = len - i - 1;
//         int maxindex = getmaxindex(nums, 0, last);
//         swap(nums, maxindex, last);
//     }
// }
// int main(void)
// {
//     int nums[] = {2,0,2,1,1,0};
//     int len = 6;
//     sortColors(nums, len);
//     for(int i = 0; i < len; i++)
//         printf("%d ", nums[i]);
//     return 0;
// }


// #include <stdio.h>
// #include <limits.h>
// void swap(int nums[], int first, int last){
//     int temp = nums[first];
//     nums[first] = nums[last];
//     nums[last] = temp;
// }
// int getmaxindex(int nums[], int start, int end){
//     int maxIndex = start;
//     for(int i = start; i <= end; i++){
//         if(nums[maxIndex] < nums[i])    
//             maxIndex = i;
//     }
//     return maxIndex;
// }
// int getminindex(int nums[], int start, int end){
//     int minindex = end;
//     for(int i = start; i <= end; i++){
//         if(nums[minindex] > nums[i])
//             minindex = i;
//     }
//     return minindex;
// }
// void sortColors(int* nums, int numsSize) {
//     int len = numsSize;
//     for(int i = 0; i < len; i++){
//         int maxindex = getmaxindex(nums, 0, len - i - 1);
//         int minindex = getminindex(nums, i, len - 1);
//         swap(nums, maxindex, len - i - 1);
//         swap(nums, minindex, i);
//     }
// }
// int main(void)
// {
//     int nums[] = {2,0,2,1,1,0};
//     int len = 6;
//     sortColors(nums, len);
//     for(int i = 0; i < len; i++)
//         printf("%d ", nums[i]);
//     return 0;
// }


// #include <stdio.h>
// void swap(int nums[], int first, int second){
//     int temp = nums[first];
//     nums[first] = nums[second];
//     nums[second] = temp;
// }
// void sortColors(int nums[], int len){
//     int n = len - 1;
//     for (int i = n; i > 0; i--) {
//         for (int j = i - 1; j < n; j++) {
//             if(nums[j] > nums[j + 1]){
//                 swap(nums,j, j+1);
//             }
//             else{
//                 break;
//             }
//         }
//     }
// }
// int main(void)
// {
//     int nums[] = {2,0,2,1,1,0};
//     int len = 6;
//     sortColors(nums, len);
//     for(int i = 0; i < len; i++)
//         printf("%d ", nums[i]);
//     return 0;
// }


// solve sorting questions using recursion
// 📝 1. Recursive Insertion Sort
/*
#include <stdio.h>
void inssort(int nums[], int len, int i){
    if(i <= 0) 
        return;
    
    for(int j = i - 1; j < len - 1; j++){
        if(nums[j] > nums[j + 1]){
            int temp = nums[j];
            nums[j] = nums[j + 1];
            nums[j + 1] = temp; 
        }
        else{
            break;
        }
    }
    return inssort(nums, len, i-1);
}
int main(void)
{
    int nums[5] = {3, 4, 1, 2, 5};
    int len = 5;
    inssort(nums, len, len - 1);
    for(int i = 0; i < len; i++)
        printf("%d ", nums[i]);
    return 0;
}
*/

// recursive bubble sort
/*
#include <stdio.h>
void bubblesort(int nums[], int len){
    int swapped;
    for(int i = 0; i < len; i++){
        swapped = 0;
        for(int j = 1; j < len - i; j++){
            if(nums[j - 1] > nums[j]){
                int temp = nums[j - 1];
                nums[j - 1] = nums[j];
                nums[j] = temp;
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
    bubblesort(nums, len);
    for(int i = 0; i < len; i++)
        printf("%d ", nums[i]);
    return 0;
}
*/
/*
#include <stdio.h>
void bubblesort(int nums[], int len, int i){
    if(i < 0)
        return;
    for(int j = len - 1; j >= len - i; j--){
        if(nums[j - 1] > nums[j]){
            int temp = nums[j - 1];
            nums[j - 1] = nums[j];
            nums[j] = temp;
        }
    }
    return bubblesort(nums, len, i - 1);
}
int main(void)
{
    int nums[] = {4, 3, 1, 2, 5};
    int len = 5;
    bubblesort(nums, len, len - 1);
    for(int i = 0; i < len; i++)
        printf("%d ", nums[i]);    
    return 0;
}
*/

// recursive selection sort
/*
#include <stdio.h>
#include <limits.h>
void swap(int nums[], int first, int last){
    int temp = nums[first];
    nums[first] = nums[last];
    nums[last] = temp;
}
int getmaxindex(int nums[], int start, int end){
    int maxIndex = start;
    for(int i = start; i <= end; i++){
        if(nums[maxIndex] < nums[i])    
            maxIndex = i;
    }
    return maxIndex;
}
int getminindex(int nums[], int start, int end){
    int minindex = end;
    for(int i = start; i <= end; i++){
        if(nums[minindex] > nums[i])
            minindex = i;
    }
    return minindex;
}
void clcnsort(int* nums, int len, int i) {
    if(i >= len)
        return;
    int maxindex = getmaxindex(nums, 0, len - i - 1);
    int minindex = getminindex(nums, i, len - 1);
    swap(nums, maxindex, len - i - 1);
    swap(nums, minindex, i);

    return clcnsort(nums, len, i + 1);
}
int main(void)
{
    int nums[] = {3, 4, 2, 1, 5};
    int len = 5;
    clcnsort(nums, len, 0);
    for(int i = 0; i < len; i++)
        printf("%d ", nums[i]);
    return 0;
}
*/



