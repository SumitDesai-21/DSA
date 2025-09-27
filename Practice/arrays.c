
// array counting or histogramming 
// #include <stdio.h>
// int main(void)
// {
//     int n = 0;
//     scanf("%d", &n);
//     int marks[n], count[n], processed[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &marks[i]);
//         count[i] = 0;
//         processed[i]  = 0;
//     }
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             if(marks[j] == marks[i]){
//                 count[i]++;
//             }
//         }
//     }
//     // output
//     for(int i = 0; i < n; i++){
//         if(!processed[i]){
//             printf("%d marks -> %d students\n", marks[i], count[i]);
//             for(int j = 0; j < n; j++){
//                 if(marks[j] == marks[i]){
//                     processed[j] = 1;
//                 }
//             }
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// #define SIZE 16
// // Longest Montone Subsequence Using DP
// int LMS(int a[], int len){
//     int length[len], maxlength = 1;
//     for(int i = 0; i < len; i++){
//         length[i] = 1;
//     }
//     // LMS Logic
//     for(int i = 1; i < len; i++){
//         for(int j = 0; j < i; j++){
//             if(a[i] > a[j] && length[i] < length[j] + 1){
//                 length[i] = length[j] + 1;
//             }
//         }
//         if(maxlength < length[i]){
//             maxlength = length[i];
//         }
//     }
//     return maxlength;
// }
// int main(void)
// {
//     int monotone[SIZE], len = 0;
//     while((scanf("%d", &monotone[len]) != EOF)){
//         len++;
//     }
//     printf("%d\n", LMS(monotone, len));
//     return 0;
// }



// // LIS (Longest Increasing Sequence) // DP
// #include <stdio.h>
// #define SIZE 16

// int LIS(int a[], int len){
//     int length[len], maxlength = 1;
//     for(int i = 0; i < len; i++)
//         length[i] = 1;
//     // LIS Logic
//     for(int i = 1; i < len; i++){
//         for(int j = 0; j < len; j++){
//             if(a[i] > a[j] && length[i] < length[j] + 1)
//                 length[i] = length[j] + 1;
//         }
//         if(maxlength < length[i])
//             maxlength = length[i];
//     }
//     return maxlength;
// }
// int main(void)
// {
//     int a[SIZE], len = 0;
//     while(scanf("%d", &a[len]) != EOF)
//         len++;
//     printf("%d\n", LIS(a, len));
//     return 0;
// }

// // Partition an array
// #include <stdio.h>
// int main(void)
// {
//     int nums[] = {28, 26, 25, 11, 16, 12, 24, 29, 6, 10};
//     int len = 10, x, i = 0, j = len - 1;
//     scanf("%d", &x);
//     // logic 
//     // were using two pointer technique
//     while(i <= j){
//         while(i <= j && nums[i] <= x)
//             i++;
//         while(i <= j && nums[j] > x)
//             j--;
//         if(i < j){
//             int temp = nums[i];
//             nums[i] = nums[j];
//             nums[j] = temp;
//             i++;
//             j--;
//         }
//     }
//     for(int i = 0; i < len; i++)      
//         printf("%d ", nums[i]);
//     printf("\n");
//     return 0;
// // 
/*
#include <stdio.h>
int main(void)
{
    int nums[] = {28, 26, 25, 11, 16, 12, 24, 29, 6, 10};
    int len = 10, i = 0, j = len - 1, x;
    scanf("%d", &x);
    while(i <= j){
        if(nums[i] <= x)
            i++;
        else if(nums[j] > x)
            j--;
        else{
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        } 
    }
    for(int i = 0; i < len; i++)
        printf("%d ", nums[i]);
    return 0;
}
*/


