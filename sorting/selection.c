// selection sort
#include <stdio.h>
struct student
{
    int mis;
    char name[32];
    float marks;
};
#define SIZE 16
typedef struct student student;  // 
// typedef is keyword which is used to rename a datatype and as struct is datatype we can rename it
void print_records(student a[], int len){
    int i = 0;
    printf("---------------array----------------\n");
    while(i < len){
        printf("%d %s %.2f\n", a[i].mis, a[i].name, a[i].marks);
        i++;
    }
}
// selection sort
void swap(student a[], int first, int second){
    int temp = a[first].mis;
    a[first].mis = a[second].mis;
    a[second].mis = temp;
}
int getmaxIndex(student a[], int start, int end){
    int maxIndex = start;
    for(int i = start; i <= end; i++){
        if(a[maxIndex].mis < a[i].mis){
            maxIndex = i;
        }
    }   
    return maxIndex;
} 
void selsort(student a[], int len){
    printf("---------------------sorted-array-----------------------\n");
    for(int i = 0; i < len; i++){
        int last = len - 1 - i;
        int maxindex = getmaxIndex(a, 0, last);
        swap(a, maxindex, last);
    }
    // output
    for(int i = 0; i < len; i++){
        printf("%d %s %.2f\n", a[i].mis, a[i].name, a[i].marks);
    }
} 

int main(void)
{
    student a[SIZE]; // create an array of student structs
    int len = 0;
    while(len < SIZE && (scanf("%d  %s %f", &a[len].mis, a[len].name, &a[len].marks) == 3))
        len++;
    
    print_records(a, len);
    selsort(a, len);
    return 0;
}
