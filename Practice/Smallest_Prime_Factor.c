// #include <stdio.h>
// #include <math.h>
// int isPrime(int num){
//     int i = 2;
//     while(i <= sqrt(num)){
//         if(num % i == 0){
//             return 0;
//         }
//         i++;
//     }
//     return 1;
// }
// int main(void)
// {
//     int n, x;
//     x = 0;
//     scanf("%d", &n);
//     int i = 2;
//     while(i <= n){
//         x = isPrime(i);
//         if(x == 1){
//             printf("%d ", i);
//         }
//         i++;
//     }
//     return 0;
// }

// // Smallest_Prime_Factor
// #include <stdio.h>
// #include <math.h>
// int Smallest_Prime_Fact(int num){
//     // Also Covers negative numbers 
//     int i = 2;
//     while(i <= sqrt(num)){
//         if(num % i == 0){
//             return 0;
//         }
//         i++;
//     }
//     return 1;
// }
// int main(void)
// {
//     int i = 2, x = 0, n;
//     scanf("%d", &n);
//     n = fabs(n);
//     if(n == 0){
//         printf("%d\n", 2);
//     }
//     while(i <= n){
//         x = Smallest_Prime_Fact(i);
//         if(x == 1){
//             if(n % i == 0){
//                 printf("%d\n", i);
//                 break;
//             }
//         }
//         i++;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int num, i = 1;

//     scanf("%d", &num);
//     if(num <= 0){
//         printf("invalid input\n");
//     }
//     else{
//         while(i <= num){
//             if(num % i == 0){
//                 printf("%d ", i);
//             }
//             i++;
//         }
//     }
//     return 0;
// }


// Desing and implement an algorithm that finds 
// smallest positive integer that has n or more divisors

// #include <stdio.h>
// int main(void)
// {
//     int n, count = 0, start = 1, i = 1;
//     scanf("%d", &n);
//     while(count != n){
//         while(i <= start){
//             if(start % i == 0){
//                 count++;
//             }
//             i++;
//        }
//        start++;
//     }
//     return 0;
// }

// Smallest Positive Integer 

// #include <stdio.h>
// int countnums(int num){
//     int count = 0;
//     for(int i = 1; i <= num; i++){
//         if(num % i == 0){
//             count++;
//         }
//     }
//     return count;
// }
// int smallint(int n){
//     int i = 1, ans = 0;
//     while(1){
//         if(countnums(i) >= n){
//             ans = i;
//             break;
//         }
//         i++;
//     }
//     return ans;
// }
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d\n", smallint(n));
//     return 0;
// }


//  for the integers in the range of 
