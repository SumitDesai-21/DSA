// Fibbonacci

// #include <stdio.h>
// void fibo(int a, int b){
//     int prev, curr, next;
//     prev = curr = 1;
//     while(curr <= b){
//         if(a == prev && b == curr){
//             printf("%d\n", a+b);
//             return;
//         }
//         next = prev + curr;
//         prev = curr;
//         curr = next;
//     }
//     printf("Invalid input\n");
// }
// int main(void)
// {
//     int x, y;
//     scanf("%d%d", &x, &y);
//     fibo(x, y);
//     return 0;
// }

// Lucas 
// #include <stdio.h>
// int main(void)
// {
//     int n, prev, curr, next;
//     prev = 1;
//     curr = 3;
//     scanf("%d", &n);
//     int i = 0;
//     while(i < n){
//         printf("%d ", prev);
//         next = prev + curr;
//         prev = curr;
//         curr = next;

//         i++;
//     }
//     return 0;
// }

// nth root of number
// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     int num, n;
//     double nroot, pawr;
//     scanf("%d%d",&num, &n);

//     pawr = (double) 1 / n;
//     nroot = pow((double) num, (double) pawr);
//     printf("%lf\n", nroot);
//     return 0;
// }

// Newton's raphson implementation method
// binary search in a C 

// #include <stdio.h>
// #define SIZE 16

// int binarySearch(int nums[], int target, int len){
//     int start = 0;
//     int end = len - 1;
    
//     while(start <= end){
//         int mid = start + (end-start)/2;
//         if(target > nums[mid]){
//             start = mid + 1;
//         }
//         else if(target < nums[mid]){
//             end = mid - 1;
//         }
//         else{
//             return mid;
//         }
//     }
//     return -1;
// }
// int main(void)
// {
//     int nums[SIZE], i = 0, len = 0, target;
//     while(scanf("%d", &nums[i]) != EOF){
//         len++;
//         i++;
//     }
//     scanf("%d", &target);
//     printf("%d\n", binarySearch(nums, target, len));
//     return 0;   
// }

// reverse a string 
// NICE 
// #include <stdio.h>
// #define SIZE 10000
// void reverse(char s[], int len){
//     int i, j;
//     char c;
//     for(i = 0, j = len - 1; i < j; i++, j--){
//         c = s[i];
//         s[i] = s[j];
//         s[j] = c;
//     }
//     for(int i = 0; i < len; i++){
//         printf("%c", s[i]);
//     }
// }
// int main(void)
// {   
//     char s[SIZE];
//     int i = 0, len = 0;
//     while(scanf("%c", &s[i]) != EOF && s[i] != '\n'){
//         len++;
//         i++;
//     }
//     reverse(s, len);
//     return 0;
// }

// // itoa
// #include <stdio.h>
// int main(void)
// {
//     int Secret_Code[] = {73, 32, 76, 111, 118, 101, 32, 89, 111, 117, 32, 83, 104, 119, 101, 116, 97,  3};
//     int i = 0;
//     while(i < 18){
//         printf("%c",Secret_Code[i]);
//         i++;
//     }
//     return 0;
//}


// #include <stdio.h>
// #define SIZE 1000
// int main(void)
// {   
//     char ch[SIZE];
//     int i = 0, len = 0;
//     while(scanf("%c", &ch[i]) != EOF && ch[i] != '\n'){
//         len++;
//         i++;
//     }
//     for(int i = 0; i < len; i++){
//         printf("%d ", ch[i]);

//     }
//     return 0;
// }

// #include <stdio.h>
// #define SIZE 10000

// int main(void){
//     int nums[SIZE];
//     int i = 0, len = 0;
//     while(scanf("%d", &nums[i]) != EOF){
//         len++;
//         i++;
//     }
//     // OutPut
//     for(int i = 0; i < len; i++){
//         printf("%c ", nums[i]);
//     }
//     return 0;
// }

// Two's compliment 
// #include <stdio.h>
// #define SIZE 10000

// int main(void)
// {
//     int num[SIZE];
//     int i = 0, len = 0, n;
//     n = 0;
//     while(scanf("%d", &num[i]) != EOF){
//         len++;
//         i++;
//     }
//     for(int i = 0; i < len; i++){
//         if(num[i] >= 0){
//             printf("%c", num[i]);
//         }
//         else if(num[i] < 0){
//             n = (-1) * num[i];
//             n = (n << 0);
//             printf("%c", n);
//         }
//         else{
//             printf("invalid\n");
//         }
//     }
//     return 0;
// }

// Sequence 
// #include <stdio.h>
// int main(void)
// {   
//     int n, a, b, c, next;
//     a = 0, b = 1, c= 1;
//     scanf("%d", &n);
//     int i = 0;
//     while(i < n){
//         printf("%d ", a);
//         next = a + b + c;
//         a = b;
//         b = c;
//         c = next;

//         i++;
//     }
//     return 0;
// } 

// Farey Series 

// sequence 
// #include <stdio.h>
// int fact(int n){
//     int f = 1;
//     for(int i = 1; i <= n; i++){
//         f *= i;
//     }
//     return f;
// }
// int main(void)
// {
//     int n, prev1, prev2, curr;
//     prev1 = prev2 = 0;
//     curr = 1;
//     scanf("%d", &n);
//     int i = 0;
//     while(i < n){
//         if(i <= 1){
//             printf("%d ", fact(prev1));
//             prev1++; 
//         }
//         else{
//             printf("%d ",fact(curr) + fact(prev2));
//             prev2++;
//             curr++;
//         }
//         i++;
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #define SIZE 10000
// int strrindex(char s[], char t[]){
//     int i, j, k;

//     for(i = 0; s[i] != '\0'; i++){
//         for(j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++){
//             ;
//         }
//         if(k > 0 && t[k] == '\0'){
//             return i;
//         }
//     }
//     return - 1;
    
// }
// int main(void)
// {   
//     char s[SIZE], t[SIZE];
//     int i = 0, lens = 0, lent = 0;
//     while(scanf("%c", &s[i]) != EOF && s[i] != '\n'){
//         lens++;
//         i++;
//     }
//     int j = 0;
//     while(scanf("%c", &t[j]) != EOF && t[j] != '\n'){
//         lent++;
//         j++;
//     }
//     printf("%d\n", strrindex(s, t));
//     return 0;
// }

// Reverse a digit of an integer
// #include <stdio.h>
// #define SIZE 16

// int main(void)
// {
//     int nums[SIZE], ans[SIZE];
//     int i = 0, len = 0;
//     while(scanf("%d", &nums[i]) != EOF){
//         len++;
//         i++;
//     }
//     for(int j = 0; j < len; j++){
//         ans[j] = nums[(len - 1) - j];
//         printf("%d", ans[j]);
//     }
//     return 0;
// }

// Reversing a digit of an integer
// while loop4

// #include <stdio.h>

// int main(void)
// {
//     int num, reverse = 0, remainder;
    
//     // Input
//     scanf("%d", &num);
    
//     // Reverse the number
//     while (num != 0) {
//         remainder = num % 10;          // Get the last digit
//         reverse = reverse * 10 + remainder; // Build the reversed number
//         num /= 10;                     // Remove the last digit
//     }
//     printf("%d\n", reverse);
//     return 0;
// }

// reverse a digit of an integer
// #include <stdio.h>
// int main(void)
// {   
//     int num, reverse, remainder;
//     reverse = 0;
//     reverse = 0;
//     scanf("%d", &num);
//     while(num != 0){
//         remainder = num % 10;
//         reverse = reverse * 10 + remainder;
//         num /= 10;
//     }
//     printf("%d\n", reverse);
//     return 0;
// }


// number of digits in an integer
// #include <stdio.h>
// int main(void)
// {
//     int num, len = 0;
//     scanf("%d", &num);
//     if(num == 0){
//         printf("%d\n", 1);
//         return 0;
//     }
//     while(num != 0){
//         num /= 10;
//         len++;
//     }
//     printf("%d\n", len);
//     return 0;
// }

// sum the digits of an integer
// #include <stdio.h>
// int main(void)
// {
//     int num, sum = 0, remainder;
//     scanf("%d", &num);
//     while(num != 0){
//         remainder = num % 10;
//         sum += remainder;
//         num /= 10;
//     }
//     printf("%d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     int nums[n];
//     int i = 0;
//     while(i < n){
//         scanf("%d", &nums[i]);
//         i++;
//     }
//     for(int i = 0; i < n; i++){
//         printf("%d", nums[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//   int Secret_Code[] = {65, 119, 119, 119, 32, 78,101, 120, 116, 32, 84, 105, 109, 101, 32, 73, 116, 39, 108, 108, 32, 66, 101, 32, 77, 69, 32, 60, 51};
//   int i = 0;
//   while (i < 29)
//   {
//     printf("%c", Secret_Code[i]);
//     i++;
//   }
//   return 0;
//}

// #include <stdio.h>
// #define SIZE 10000

// int main(void)
// {
//     char s[SIZE];
//     int i = 0, len = 0;
//     while(scanf("%c", &s[i]) != EOF){
//         len++;
//         i++;
//     }
//     for(int i = 0; i <len; i++){
//         printf("%d ", s[i]);
//     }
//     return 0;
//  }

// // // 
// #include <stdio.h>
// int main(void)
// {
//   int Secret_Code[] = {
//     73, 32, 97, 109, 32, 97, 99, 116, 97, 108, 108, 121, 32, 115, 108, 101, 101, 112, 121, 32, 98, 97, 98, 101,
//     10, 71, 111, 111, 100, 32, 78, 105, 103, 104, 116, 32, 77, 121, 32, 76, 111, 118, 101, 108, 121, 32, 80, 114,
//     105, 110, 99, 101, 115, 115, 10, 83, 119, 101, 101, 116, 32, 68, 114, 101, 97, 109, 32, 97, 110, 100, 32, 84,
//     97, 107, 101, 32, 67, 97, 114, 101, 32, 84, 111, 111, 10, 65, 110, 100, 32, 89, 117, 112, 32, 76, 111, 118, 101,
//     32, 89, 111, 117, 117, 117, 117, 117, 117, 117, 46, 46, 46, 46, 33, 10, 3
//   };
//   int i = 0;
//   while (i < 114)
//   {
//     printf("%c", Secret_Code[i]);
//     i++;
    
//   }
//   return 0;
// }


// // // Decimal TO Octal
// #include <stdio.h>
// #define SIZE 1000

// int main(void)
// {
//     int num, base, q, r, nums[SIZE];
//     scanf("%d%d", &num, &base);
//     q = num;
//     int len = 0;
//     while(q != 0){
//         r = q % base;
//         nums[len] = r;
//         q /= base;
//         len++;
//     }
//     // OUTPUT
//     for(int i = len - 1; i >= 0; i--){
//         printf("%d", nums[i]);
//     }
//     return 0;
// }

// // Binary To Octal
// #include <stdio.h>
// int pawr(int x, int n){
//     int pw = 1;
//     for(int i = 1; i <= n; i++){
//         pw *= x;
//     }
//     return pw;
// }
// int main(void)
// {
//     // 100
//     int num, octal, r;
//     octal = 0;
//     scanf("%d", &num);
//     int i = 0;
//     while(num != 0){
//         r = num % 10;
//         octal += r * pawr(8, i);
//         num /= 10;
//         i++;
//     }
//     printf("%d\n", octal);
//     return 0;
// }

// 1 0 0 0 0
// 0 0 1 0 0 
// 1 0 1 0 0 
// 4 3 2 1 0 
// 16 + 4 = 20

// 1 + 1 - 2 - 3 + 5 + 8 - 13 - 21 ...
// Binary to octal

// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     int num, octal = 0, remainder = 0;
//     double i = 0;
//     scanf("%d", &num);  
//     while(num != 0){
//         remainder = num % 10;
//         octal += (remainder * pow(8, i));
//         num /= 10;
//         i++;
//     }   
//     printf("%d\n", octal);  
//     return 0;
// }

// Binary to Decimal

// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     int num, octal = 0, remainder = 0;
//     double i = 0;
//     scanf("%d", &num);  
//     while(num != 0){
//         remainder = num % 10;
//         octal += (remainder * pow(2, i));
//         num /= 10;
//         i++;
//     }   
//     printf("%d\n", octal);  
//     return 0;
// }

// #include <stdio.h>
// #define SIZE 1000

// int main(void)
// {
//     int num, base, q, r, nums[SIZE];
//     scanf("%d", &num);
//     base = 2;
//     q = num;
//     int len = 0;
//     while(q != 0){
//         r = q % base;
//         nums[len] = r;
//         q /= base;
//         len++;
//     }
//     // OUTPUT
//     for(int i = len - 1; i >= 0; i--){
//         printf("%d", nums[i]);
//     }
//     return 0;
// // }

// Fraction Conversion in a binary

// #include <stdio.h>
// #define SIZE 16

// int main(void)
// {   
//     int whole_part, nums[SIZE], i = 0, len = 0;
//     float num;
//     scanf("%f", &num);
//     while(num != 1.00){
//         whole_part = num * 2;
//         nums[i] = whole_part;
//         num *= 2;
//         len++;
//         i++;
//     }
//     nums[len] = 1;
//     for(int i = 0 ; i < len; i++){
//         printf("%d ", nums[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #define SIZE 100000
// int main(void)
// {
//     char ch[SIZE];
//     int i = 0, len = 0;
//     while(scanf(" %c", &ch[i]) != EOF){
//         len++;
//         i++;
//     } 
//     for(int i = 0; i < len; i++){
//         printf("%.2f ",(float) ch[i]-'0');
//     }
//     return 0;
// }








// ----------------------------------------------------------------------------------------------
// PSPP


// #include <stdio.h>
// #define SIZE 16
// void reverse(int nums[], int len){
//     int start = 0;
//     int end = len - 1;
//     while(start < end){
//         int temp = nums[start];
//         nums[start] = nums[end];
//         nums[end] = temp;

//         start++;
//         end--;
//     }
// }
// int main(void)
// {
//     int nums[SIZE];
//     int i = 0, len = 0;
//     while(scanf("%d", &nums[i]) != EOF){
//         len++;
//         i++;
//     }
//     reverse(nums, len);
//     for(int i = 0; i < len; i++){
//         printf("%d ",nums[i]);
//     }
//     return 0;
// }


// // Q. 2) 
// #include <stdio.h>
// #define SIZE 16

// void sort(int nums[], int len){
//     int swapped;
//     for(int i = 0; i < len; i++){
//         swapped = 0;
//         for(int j = 1; j < len - i; j++){
//             if(nums[j] < nums[j-1]){
//                 int temp = nums[j];
//                 nums[j] = nums[j-1];
//                 nums[j-1] = temp;
//                 swapped = 1;
//             }
//         }
//         if(!swapped){
//             break;
//         }
//     }
// }
// int removedupl_k(int a[], int len, int k){
//     int count[len];

//     sort(a, len);

//     for(int i = 0; i < len; i++){
//         for(int j = 0; j < len; j++){
//             if(a[i] == a[j]){
//                 count[i]++;
//             }
//         }
//     }
//     int lens = 0;
//     for(int i = 0; i < len; i++){
//         if(count[i] == k){
//             a[lens] = a[i];
//             i += k;
//         }
//         else{
//             a[lens] = a[i];
//             i++;
//         }
//         lens++;

//     }
//     return lens;
// }
// int main(void)
// {
//     int a[128] = {1, 1, 1, 2, 2, 2, 3, 3, 4, 5}; 
//     int len = 10;
//     len = removedupl_k(a, len, 3);
//     for(int i = 0; i < len; i++){
//        printf("%d ", a[i]); 
//     }
//     printf("\n");
//     return 0;   
// }

// #include <stdio.h>

// void movetozero(int nums[], int len){
//     int MIN = nums[0];

//     for(int i = 0; i < len; i++){
//         if(MIN > nums[i]){
//             MIN = nums[i];
//         }
//     }
//     nums[0] = MIN;
// }
// int main(void)
// {
//     int a[8] = {1}, len = 0;
//     movetozero(a, len);
//     printf("%d\n", a[0]);
//     return 0;
// }

// #include <stdio.h>

// int removedupl_k(int a[], int len, int k) {
//     int new_len = 0; // Tracks the new length of the array

//     for (int i = 0; i < len; i++) {
//         int count = 1; // Count occurrences of a[i]

//         // Count duplicates for a[i]
//         for (int j = i + 1; j < len; j++) {
//             if (a[j] == a[i]) {
//                 count++;
//             }
//         }

//         // If count >= k, add only one copy
//         if (count >= k) {
//             a[new_len++] = a[i];

//             // Skip all other duplicates of a[i]
//             for (int j = i + 1; j < len; j++) {
//                 if (a[j] == a[i]) {
//                     i++;
//                 }
//             }
//         }
//         // If count < k, copy all occurrences
//         else {
//             for (int j = 0; j < count; j++) {
//                 a[new_len++] = a[i];
//             }
//             i += (count - 1); // Skip the duplicates we just processed
//         }
//     }

//     return new_len;
// }

// int main(void) {
//     int a[128] = {1, 1, 1, 2, 2, 2, 3, 3, 4, 5};
//     int len = 10;
//     len = removedupl_k(a, len, 3);

//     for (int i = 0; i < len; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
//     return 0;
// }
    
// #include <stdio.h>

// int removedupl_k(int a[], int len, int k) {
//     int count[128] = {0}; 
//     int included[128] = {0};
//        int new_len = 0;
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

// int main(void) {
//     int a[128] = {1, 2, 1, 3, 4, 1, 3, 2, 4, 3};
//     int len = 10;
//     len = removedupl_k(a, len, 3);

//     for (int i = 0; i < len; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// int is_non_descending(int *a, int len){
//     int flag = 1;
//     for(int i = 1; i < len; i++){
//         if(a[i-1] > a[i]){
//             flag = 0;
//         }
//     }
//     return flag;
// }
// int main(void)
// {
//     int a[8] = {1, 2, 3, 4, 5}, len = 5; 
//     printf("%d \n", is_non_descending(a, len));
//     return 0;
// }

// 2nd one 

// #include <stdio.h>

// int removedupl_k(int a[], int len, int k){
//     int b[len], n = 0;
//     int count[50] = {0};
//     for(int i = 0 ; i < len ; i++){
//         for(int j = 0 ; j < len ; j++){
//             if(a[i] == a[j]){
//                 count[i]++;
//             }
//         }
//     }

//     for(int i = 0 ; i < len; i++){
//         if(count[i] >= k){
//             int alrstr = 1;
//             for(int j = 0 ; j < n; j++){
//                 if(b[j] == a[i]){
//                     alrstr = 0;
//                     break;
//                 }
//             }
//             if(alrstr)
//                 b[n++] = a[i];
//         } else {
//             b[n++] = a[i];
//         }
//     }
//     for(int i = 0 ; i < n; i++){
//         a[i] = b[i];
//     }
//     // for(int i = 0 ; i < n ; i++){
//     //     printf("%d ", b[i]);
//     // }
//     return n;
// }

// int main(void) {
//     int a[128] = {1, 2, 1, 3, 4, 1, 3, 2, 4, 3};
//     int len = 10;
//     len = removedupl_k(a, len, 3);

//     for (int i = 0; i < len; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
//     return 0;
// }


// 2nd Question 
// If the number occurs more than or equal to K times removes duplicates otherwise print duplicates too

// //  For Sorted Array
// #include <stdio.h>
// int removedupl_k(int a[], int len, int k){
//     int new_len = 0;
//     // OUTER LOOP
//     for(int i = 0; i < len; i++){
//         // INNER LOOP
//         int count = 1;
//         for(int j = i + 1; j < len; j++){
//             if(a[j] == a[i]){
//                 count++;
//             }
//         }
//         // Check Count
//         if(count >= k){
//             a[new_len++] = a[i];

//             // Skip Other Duplicates 
//             for(int j = i + 1; j < len; j++){
//                 if(a[j] == a[i]){
//                     i++;
//                 }
//             }
//         }
//         else{
//             for(int j = 0; j < count; j++){
//                 a[new_len++] = a[i];
//             }
//             i += (count - 1);
//         }
//     }
//     return new_len;
// }
// int main(void)
// {
//     int a[128] = {1, 1, 1, 2, 2, 2, 3, 3, 4, 5};
//     int len = 10, lens = 0;
//     lens = removedupl_k(a, len, 3);
//     for(int i = 0; i < lens; i++){
//         printf("%d ", a[i]);
//     }
//     return 0;
// }



// #include <stdio.h>

// int removedupl_k(int a[], int len, int k) {
//     int new_len = 0; // Tracks the new length of the array

//     for (int i = 0; i < len; i++) {
//         int count = 1; // Count occurrences of a[i]

//         // Count duplicates for a[i]
//         for (int j = i + 1; j < len; j++) {
//             if (a[j] == a[i]) {
//                 count++;
//             }
//         }

//         // If count >= k, add only one copy
//         if (count >= k) {
//             a[new_len++] = a[i];

//             // Skip all other duplicates of a[i]
//             for (int j = i + 1; j < len; j++) {
//                 if (a[j] == a[i]) {
//                     i++;
//                 }
//             }
//         }
//         // If count < k, copy all occurrences
//         else {
//             for (int j = 0; j < count; j++) {
//                 a[new_len++] = a[i];
//             }
//             i += (count - 1); // Skip the duplicates we just processed
//         }
//     }

//     return new_len;
// }

// int main(void) {
//     int a[128] = {1, 1, 1, 2, 2, 2, 3, 3, 4, 5};
//     int len = 10;
//     len = removedupl_k(a, len, 3);

//     for (int i = 0; i < len; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
//     return 0;
// }
 
// If The Array Is Not Given In Sorted Order 

// #include <stdio.h>

// int removedupl_k(int a[], int len, int k) {
//     int count[100000] = {0}; 
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
// int main(void) {
//     int a[128] = {};
//     int len = 10;
//     len = removedupl_k(a, len, 3);

//     for (int i = 0; i < len; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
//     return 0;
// }


// // BEST APPROACH 
// #include <stdio.h>

// int removedupl_k(int a[], int len, int k) {
//     int count[len]; // To count occurrences
//     int included[len]; // To mark inclusion in the result
//     int new_len = 0;

//     // Initialize arrays
//     for (int i = 0; i < len; i++) {
//         count[i] = 0; // Every elemets initial occurence is Zero 
//         included[i] = 0; // And the element is not included 
//     }

//     // Count Occurences for each element
//     for (int i = 0; i < len; i++) {
//         for (int j = 0; j < len; j++) {
//             if (a[i] == a[j]) {
//                 count[i]++; 
//             }
//         }
//     }

//     // Rebuild array in original order
//     for (int i = 0; i < len; i++) {
//         if (count[i] >= k && !included[i]) {
//             a[new_len++] = a[i]; // Include only one copy
//             for (int j = 0; j < len; j++) {
//                 if (a[j] == a[i]) {
//                     included[j] = 1; // Mark all occurrences as included
//                 }
//             }
//         } else if (count[i] < k) {
//             a[new_len++] = a[i]; // Include all occurrences
//         }
//     }

//     return new_len;
// }

// int main(void) {
//     int a[128] = {1, 2, 3, 3, 3, 2, 4, 5, 5, 6};
//     int len = 10;
//     len = removedupl_k(a, len, 3);

//     for (int i = 0; i < len; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
//     return 0;
// }


// // // solve that questions
// #include <stdio.h>
// int removedupl_k(int a[], int len, int k){
//     int new_len = 0;
//     int count[len];
//     int included[len];

//     // Initialize arrays
//     for(int i = 0; i < len; i++){
//         count[i] = 0;
//         included[i] = 0;
//     }
//     // Occurences 
//     for(int i = 0; i < len; i++){
//         for(int j = 0; j < len; j++){
//             if(a[j] == a[i]){
//                 count[i]++;
//             }
//         }
//     }
//     // condition // rebuild array 
//     for(int i = 0; i < len; i++){
//         if(count[i] >= k && !included[i]){
//             a[new_len++] = a[i]; // Included only one copy

//             for(int j = 0; j < len; j++){
//                 if(a[j] == a[i]){
//                     included[j] = 1;
//                 }
//             }
//         }
//         else if(count[i] < k){
//             a[new_len++] = a[i];
//         }
//     }
//     return new_len;
// }
// int main(void)
// {
//     int a[128] = {1, 1, 1, 2, 2, 2, 3, 3, 4, 5};
//     int len = 10;
//     len = removedupl_k(a, len, 3);
//     for(int i = 0; i < len; i++){
//         printf("%d ", a[i]);
//     }
//     return 0;
// }


// // Find Nth root of given number 
// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int num, base;
//     scanf("%d%d", &num, &base);
//     double pawr = (double) 1/base;
//     printf("%.2f\n", pow(num, pawr));
//     return 0;
// }

// #include <stdio.h>
// double sqrt(double m){
//     double n = m - 1;
//     while(n * n > m){
//         n -= 1;
//     }
//     n -= 1;
//     while(n * n < m){
//         n += 0.1;
//     }
//     n += 0.1;
//     while(n * n > m){
//         n -= 0.01;
//     }
//     n -= 0.01;
//     while(n * n < m){
//         n += 0.001;
//     }
//     n += 0.001;
//     while(n * n > m){
//         n -= 0.0001;
//     }
//     n -= 0.0001;
//     while(n * n < m){
//         n += 0.00001;
//     }
//     n += 0.00001;
//     while(n * n > m){
//         n -= 0.000001;
//     }
//     n -= 0.000001;
//     while(n * n < m){
//         n += 0.0000001;
//     }
//     n += 0.0000001;
//     return n;
// }
// int main(void)
// {
//     double m;
//     scanf("%lf", &m);
//     printf("%lf\n", sqrt(m));
//     return 0;
// }

// Geometric mean 
// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     int num, n, i = 0, product = 1;
//     float GM;
//     scanf("%d", &n);
//     double base = (double) 1 / n;
//     while(i < n){
//         scanf("%d", &num);
//         product *= (double) num;
//         i++;
//     }
//     GM = pow(product, base);
//     printf("%.2f\n", GM);
//     return 0;
// }

// // EOF
// #include <stdio.h>
// #define SIZE 10000
// #include <math.h>

// int main(void)
// {
//     int i = 0, n = 0, num[SIZE], product = 1;
//     float GM, base;

//     while(scanf("%d", &num[i]) != EOF){
//         n++;
//         i++;
//     }
//     for(int i = 0; i < n; i++){
//         product *= (double) num[i];
//     }
//     base = (double) 1 / n;
//     GM = pow(product, base);
//     printf("%.2f\n", GM);
//     return 0;
// }


// Ceiliing of a Number 
// #include <stdio.h>
// int Ceiling(int n){
//     int q = 0;
//     while(q * q <= n){
//         q++;
//     }
//     return q;
// }
// int main(void)
// {
//     int num; 
//     scanf("%d", &num);
//     printf("%d\n", Ceiling(num));
//     return 0;
// }

// reciprocal of number using iteation 
// 
// #include <stdio.h>
// int main(void)
// {
//     int num;
//     float reciprocal;
//     scanf("%d", &num);
//     reciprocal = (float) 1 / num;
//     printf("%.2f\n", reciprocal);
// }

// Newton - Raphson Implementation method 
// -- Hold 

// #include <stdio.h>
// int main(void)
// {
//     int n, i = 2, divisor = 1;

//     scanf("%d", &n);
//     while(i <= n){
//         if(n % i == 0){
//             divisor = i;
//             break;
//         }
//         i++;
//     }
//     printf("%d\n", divisor);
//     return 0;
// }


// find number with highest divisors
// #include <stdio.h>
// #define SIZE 1000
// #include <limits.h>

// int main(void)
// {
//     int count[SIZE] = {0}, Max = INT_MIN, ans = 0;

//     for(int i = 1; i <= 100; i++){
//         for(int j = 1; j <= i; j++){
//             if(i % j == 0){
//                 count[i]++;
//             }
//         }
//     }
//     for(int i = 1; i <= 100; i++){
//         if(count[i] >= Max){
//             Max = count[i];
//             ans = i;
//         }
//     }
//     printf("%d\n", ans);
//     return 0;
// }

// #include <stdio.h>
// #define SIZE 1000
// #include <limits.h>

// int main(void)
// {
//     int count[SIZE] = {0}; // Initialize all elements to 0
//     int Max = INT_MIN, ans  = 0;

//     for (int i = 1; i <= 100; i++) {
//         for (int j = 1; j <= i; j++) {
//             if (i % j == 0) {
//                 count[i]++;
//             }
//         }
//     }

//     for (int i = 1; i <= 100; i++) {
//         if (count[i] > Max) {
//             Max = count[i];
//             ans = i;
//         }
//     }
//     printf("%d\n", ans);
//     return 0;
// }

// largest factor of an odd integer 
// #include <stdio.h>
// int main(void)
// {
//     int n, ans;
//     ans = 0;
//     scanf("%d", &n);
//     if(n % 2 == 1){
//         int i = 1;
//         while(i < n){
//             if(n % i == 0){
//                 ans = i;
//             }
//             i++;
//         }
//     }
//     else{
//         printf("invalid input\n");
//         return 0;
//     }
//     printf("%d\n", ans);
//     return 0;
// }

// gcd 
// For Positive number
// #include <stdio.h>
// #include <math.h>

// int gcd(int a, int b){
//     int q = 0, ans = 0;
//     a < b ? (q = a) : (q = b);
//     for(int i = 1; i <= q; i++){
//         if(a % i == 0 && b % i == 0){
//             ans = i;
//         }
//     }
//     return ans;
// }
// int main(void)
// {
//     int x, y;
//     scanf("%d%d", &x, &y);
//     printf("%d\n", gcd(fabs(x), fabs(y)));
//     return 0;
// }

// Design an algorithm that will find the gcd of n positive non - Zero Integers 
// least comman multiple

// #include <stdio.h>
// int main(void)
// {
//     int (*a)[16]; // 2D Array
//     int a[2][16];
//     return 0;
// }

