// // bubble sort 
// #include <stdio.h>

// struct student
// {
//     int mis;
//     char name[32];
//     float marks;
// };
// #define SIZE 16
// typedef struct student student;
// void print_record(student a[], int len){
//     printf("*-----------original-array------------------*\n");
//     for(int i = 0; i < len; i++){
//         printf("%d %s %.2f\n", a[i].mis, a[i].name, a[i].marks);
//     }
// }
// // bubble sort
// void bubblesort(student a[], int len){
    // int swapped;
    // for(int i = 0; i < len; i++){
    //     swapped = 0;
    //     for(int j = 1; j < len - i; j++){
    //         if(a[j-1].mis > a[j].mis){
    //             int temp = a[j-1].mis;
    //             a[j-1].mis = a[j].mis;
    //             a[j].mis = temp;
    //             swapped = 1;
    //         }
    //     }
    //     if(!swapped){
    //         break;
    //     }
//     }
//     // output
//     printf("*---------------sorted-array-----------------*\n");
//     for(int i = 0; i < len; i++){
//         printf("%d %s %.2f\n", a[i].mis, a[i].name, a[i].marks);
//     }
// }
// int main(void)
// {
//     student a[SIZE];
//     int len = 0;
//     while(len < SIZE && (scanf("%d %s %f\n", &a[len].mis, a[len].name, &a[len].marks)) == 3)
//         len++;

//     print_record(a, len);
//     bubblesort(a, len);
//     return 0;
// }


// #include <stdio.h>
// struct student{
//         int mis;
//         char name[32];
//         float marks;
// };
// typedef struct student student;
// // print_record
// void print_record(student a[], int len){
//         printf("*---------------orignal-array--------------*\n");
//         for(int i = 0; i < len; i++){
//                 printf("%d %s %.2f\n", a[i].mis, a[i].name, a[i].marks);
//         }
// }                                                                                                                                    // insertion sort                                                                                                                    void inserion(student a[], int len){                                                                                                         // better sorting algo.                                                                                                              int swapped;                                                                                                                         for(int i = 0; i < len; i++){                                                                                                                swapped = 0;                                                                                                                         for(int j  = i + 1; j >= 0; j--){                                                                                                            if(a[j].mis < a[j-1].mis){                                                                                                                   int temp = a[j].mis;                                                                                                                 a[j].mis = a[j-1].mis;                                                                                                               a[j-1].mis = temp;                                                                                                           }                                                                                                                            }                                                                                                                                    if(!swapped){                                                                                                                                break;                                                                                                                       }                                                                                                                            }                                                                                                                                    // outer loop                                                                                                                        for(int i = 0;i  < len; i++){
// void insertion(student a[], int len){
//     for(int i = 0; i < len; i++){
//         for(int j = i + 1; j > 0; j--){
//             if(a[j].mis < a[j-1].mis){
//                 int temp = a[j].mis;
//                 a[j].mis = a[j-1].mis;
//                 a[j-1].mis = temp;
//             }
//             else{
//                 break;
//             }
//         }
//     }
//     // output
//     printf("*---------------sorted-array--------------*\n");
//         for(int i = 0; i < len; i++){
//                 printf("%d %s %.2f\n", a[i].mis, a[i].name, a[i].marks);
//         }
// }
// int main(void)
// {       
    
//     student a[16];
//     int len = 0;
//     while(len < 16 && (scanf("%d %s %f\n", &a[len].mis, a[len].name, &a[len].marks) == 3)){
//         len++;
//     }
//     print_record(a, len);
//     insertion(a, len);
//         return 0;
// }
           