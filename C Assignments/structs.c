// Insertion sort // sorting algo.
/*
#include <stdio.h>
struct student{
        int mis;
        char name[32];
        float marks;
};
typedef struct student student;
void print_records(student a[], int len){
    printf("*---------------original-array--------------*\n");
        for(int i = 0; i < len; i++){
                printf("%d %s %.2f\n", a[i].mis, a[i].name, a[i].marks);
        }
}
void insert(student a[], int len, int i){
student t;
  t = a[i];
  while(i > 0 && (a[i-1].mis > t.mis)){
    a[i] = a[i-1];
    i--;
  }
  a[i] = t; // insert key at the correct position
  return;
}
void inssort(student a[], int len){
  // repeated insert is insertionsort
  for(int i = 1; i < len; i++){
    insert(a, len, i);
  }
}
int main(void)
{

    student a[16];
    int len = 0;
    while(len < 16 && (scanf("%d %s %f", &a[len].mis, a[len].name, &a[len].marks) == 3)){
        len++;
    }
    print_records(a, len);
    inssort(a, len);
    printf("*---------------sorted-array--------------*\n");
        for(int i = 0; i < len; i++){
                printf("%d %s %.2f\n", a[i].mis, a[i].name, a[i].marks);
        }
        return 0;
}
*/

/*
1. Write a program that reads data in an array of following structs, 
and then finds the struct with the smallest name (use strcmp() library function for this) 
and prints that struct. Use some proper #define to define account types,
or you can use an enum for the same.
struct  account { int acctid; char name[32]; double amount; int type; }
*/
/*
#include <stdio.h>
#define SIZE 16
#include <string.h>

struct account 
{ 
    int acctid; 
    char name[32]; 
    double amount; 
    int type; 
};
#define SAVINGS 1
#define CURRENT 2
#define LOAN 3
typedef struct account account;
// get account_type 
const char *get_account_type(int type){
    switch(type){
        case SAVINGS : return "SAVINGS";
        case CURRENT : return "CURRENT";
        case LOAN : return "LOAN";
        default : return "Unknown";
    }
}
int main(void)
{
    account arr[SIZE];
        // INPUT
    int len = 0, min = 10000, minIndex = 0;
    while(len < SIZE &&(scanf("%d %s %lf %d", &arr[len].acctid,
    arr[len].name, &arr[len].amount, &arr[len].type)) == 4){
        len++;
    }
    
    for(int i = 0; i < len; i++){
        if(min > strlen(arr[i].name)){
            min = strlen(arr[i].name);
            minIndex = i;
        }
    }
    printf("%d %s %.2lf ", arr[minIndex].acctid,
    arr[minIndex].name, arr[minIndex].amount);
    printf("%s\n", get_account_type(arr[minIndex].type));
    return 0;
}
*/
/*
612415049 sumit 15 1
612415115 anay 15 2
612415112 prajwal 25 3
612415122 niranjan 14 1
612415118 ameya 21 3
*/

// 2) Number Of Records to be read
// #include <stdio.h>
// #define SIZE 16
// struct point 
// {
//     int x, y, z;
// };
// typedef struct point point;
// int main(void)
// {
//     int n, i = 0, index = 0;
//     point arr[SIZE];
//     scanf("%d", &n);
//     if(n > SIZE){
//         printf("error\n");
//         return 1;
//     }
//     while(i < n){
//         scanf("%d %d %d", &arr[i].x, &arr[i].y, &arr[i].z);
//         i++;
//     }
//     printf("-------array--------\n");
//     for(int i = 0; i < n; i++){
//         printf("%d %d %d\n", arr[i].x, arr[i].y, arr[i].z);
//     }
//     printf("\n");
//     scanf("%d", &index); // index should be less than n
//     // base cases
//     if(index > n || index < 0){
//         printf("Invalid Input\n");
//         return 1;
//     }
//     // shifting index
//     for(int i = n; i > index; i--){
//         arr[i] = arr[i-1];
//     }
//     scanf("%d %d %d", &arr[index].x, &arr[index].y, &arr[index].z);
//     for(int i = 0; i <= n; i++){
//         printf("%d %d %d\n", arr[i].x, arr[i].y, arr[i].z);
//     }

//     return 0;
// }

// lexicographical order or dictionary order 
/*
#include <stdio.h>
#include <string.h>
#define SIZE 16
struct account
{
    int acctid; char name[32]; double amount; int type;
};
#define SAVINGS 0
#define CURRENT 1
#define LOAN 2
typedef struct account acc;
const char *gettype(int type){
    switch(type){
        case SAVINGS : return "SAVINGS";
            break;
        case CURRENT : return "CURRENT";
            break;
        case LOAN : return "LOAN";
            break;
        default : return "Unknown";
            break;
    }
}
// return index of that struct 
int minlexi(acc a[], int len){
    int minindex = 0;
    char *min = (char *) a[0].name;
    for(int i = 0; i < len; i++){
        if(strcmp(min, a[i].name) > 0){
            strcpy(min, a[i].name);
            minindex  = i;
        }
    }
    return minindex;
}
int main(void)
{
    acc a[SIZE];
    int len = 0, index = 0;
    while(len < SIZE && (scanf("%d %s %lf %d", &a[len].acctid, a[len].name, &a[len].amount, &a[len].type) == 4))
        len++;
    index = minlexi(a, len);
    printf("%d %s %.2lf %s\n", a[index].acctid, a[index].name, a[index].amount, gettype(a[index].type));
    return 0;
}
*/



#include <stdio.h>
#include <string.h>
#define SIZE 16
struct account
{
    int acctid; char name[32]; double amount; int type;
};
enum {SAVINGS = 0, CURRENT = 1, LOAN = 2};
typedef struct account acc;
const char *gettype(int type){
    switch(type){
        case SAVINGS : return "SAVINGS";
            break;
        case CURRENT : return "CURRENT";
            break;
        case LOAN : return "LOAN";
            break;
        default : return "Unknown";
            break;
    }
}
// return index of that struct 
int minlexi(acc a[], int len){
    int minindex = 0;
    char *min = (char *) a[0].name;
    for(int i = 0; i < len; i++){
        if(strcmp(min, a[i].name) > 0){
            strcpy(min, a[i].name);
            minindex  = i;
        }
    }
    return minindex;
}
int main(void)
{
    acc a[SIZE];
    int len = 0, index = 0;
    while(len < SIZE && (scanf("%d %s %lf %d", &a[len].acctid, a[len].name, &a[len].amount, &a[len].type) == 4))
        len++;
    index = minlexi(a, len);
    printf("%d %s %.2lf %s\n", a[index].acctid, a[index].name, a[index].amount, gettype(a[index].type));
    return 0;
}
