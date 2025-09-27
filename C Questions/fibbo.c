// #include <stdio.h>
// #define SIZE 1000

// int main(void)
// {
//     int n, prev, curr, next, sum1, sum2, r;

//     prev = 1;
//     curr = 1;
//     r = 1;
//     sum1 = 0;
//     sum2 = 0;

//     int fibbo[SIZE];
//     scanf("%d", &n);
//     if(n < 1){
//         printf("invalid input\n");
//     }
//     int i = 0;
//     while(i < n){
//         fibbo[i] = prev;

//         next = prev + curr;
//         prev = curr;
//         curr = next;

//         i++;
//     }
//     int j = 0;
//     while(j < n - 1){
//         sum1 += (r * fibbo[j]);
//         r *= -1;
//         j += 2;
//     }
//     int k = 1;
//     while(k < n){
//         sum2 += (r * fibbo[k]);
//         r *= -1;
//         k += 2;
//     }
   
//     printf("%d\n", sum1+sum2);
//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     int n, prev, curr, next, sum;
//     prev = 1;
//     curr = 1;

//     sum = 0;
//     scanf("%d", &n);
//     if(n < 0){
//         printf("invalid input\n");
//     }
//     int i = 1;
//     while(i <= n){
//         if((i-1) % 4 < 2){
//             sum += prev;
//         }
//         else{
//             sum -= prev;
//         }
//         next = curr + prev;
//         prev = curr;
//         curr = next;
//         i++;
//     }
//     printf("%d\n", sum);
//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     int n, prev = 1, curr = 1, next, sum = 0, i = 1;
//     scanf("%d", &n);
//     if(n >= 1){
//         while(i <= n){
//             if((i-1) % 4 < 2){
//             sum += prev;
//             }
//             else{
//                 sum -= prev;
//             }
//             next = prev + curr;
//             prev = curr;
//             curr = next;

//             i++;
//         }
//         printf("%d\n", sum);
//     }
//     else{
//         printf("invalid input\n");
//     }
//     return 0;
// }

// define a macro
// #include <stdio.h>
// #define SIZE 16
// #define swap(t, x, y) (x = x + y); (y = x - y); (x = x - y);
// int main(void)
// {
//     int nums[SIZE], i = 0, len = 0, swapped;

//     while(scanf("%d", &nums[i]) != EOF){
//         len++;
//         i++;
//     }
//     for(int i = 0; i < len; i++){
//         swapped = 0;
//         for(int j = 1 ; j < len - i; j++){
//             if(nums[j] < nums[j-1]){
//                 swap(nums, nums[j], nums[j-1])
//                 swapped = 1;
//             }
//         }
//         if(!swapped){
//             break;
//         }
//     }
//     for(int i = 0; i <len; i++){
//         printf("%d ", nums[i]);
//     }
//     return 0;
// }


