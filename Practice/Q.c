// // length of arbitarary long input lines 
// #include <stdio.h>
// #define SIZE 10000

// int main(void)
// {
//     int c, len;

//     len = 0;
//     while((c = getchar()) != EOF){

//         if(c != '\n' && c != '\t' && c != ' '){
//             len++;
//         }
//     }
//     printf("%d\n", len);
//     return 0;
// }

// #include <stdio.h>
// #define SIZE 10000

// int main(void)
// {
//     int Char[SIZE];
//     int i = 0, len = 0;

//     while((Char[i] = getchar()) != EOF){
//         len++;
//         i++;

//     }
//     return 0;
// }


// #include <stdio.h>
// #define SIZE 10000

// int main(void)
// {
//     int arr[SIZE];
//     int i = 0, len = 0;

//     while((arr[i] = getchar()) != EOF){
//         i++;
//         len++;
//     }
//     if(len > 80){
//         for(int i = 0; i < len; i++){
//             printf("%c", arr[i]);
//         }
//     }
//     return 0;
// }

// getline 
// #include <stdio.h>

// int main(void)
// {
//     char *str[] = {"sumit", "desai"};
//     for(int i = 0; i < 2; i++){
//         printf("%s\n", str[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #define SIZE 10000

// int main(void)
// {
//     char ch[SIZE];
//     int i = 0, len = 0;
//     while((ch[i] = getchar()) != EOF){
        
//         len++;
//         i++;
//     }
//     for(int i = 0; i < len; i++){
//         putchar(ch[i]);
//     }
//     printf("%d\n", len);
//     return 0;
// }

// sort an array
// // swap 
// #include <stdio.h>
// #define SIZE 16

// void swap(int *arr, int first, int second){
//     int temp = 0;
//     temp = arr[first];
//     arr[first] = arr[second];
//     arr[second] = temp;
// }
// void sort(int *arr, int len){
//     int swapped;
//     for(int i = 0; i < len; i++){
//         swapped = 0;
//         for(int j = 1; j < len - i; j++){
//             if(arr[j] < arr[j-1]){
//                 swap(arr, j, j -1);
//                 swapped = 1;
//             }
//         }
//         if(!swapped){
//             break;
//         }
//     }
// }
// int main(void)
// {
//     int nums[SIZE];
//     int i = 0, len = 0;
//     while(scanf("%d", &nums[i]) == 1){
//         len++;
//         i++;
//     }
//     sort(nums, len);
//     for(int i = 0; i <len; i++){
//         printf("%d ", nums[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int atoi(char s[]){
//     int n, i;
//     n = i = 0;
//     while(s[i] >= '0' && s[i] <= '9'){
//         n += (s[i] - '0');
//         i++;
//     }
//     return n;
// }
// int main(void)
// {
//     char s[] = {'0','2','3'};
//     printf("%d\n", atoi(s));

//     return 0;
// }

// #include <stdio.h>
// #include <ctype.h>
// #define SIZE 16


// int main(void)
// {
//     char ch[SIZE];
//     int i = 0, len = 0;

//     while(scanf("%c", &ch[i]) != EOF && ch[i] != '\n'){
//         len++;
//         i++;
//     }
//     for(int i = 0; i < len; i++){
//         if(ch[i] >= '0' && ch[i] <= '9'){
//             printf("%d ", ch[i] - '0');
//         }
//         else{
//             printf("%c ", toupper(ch[i]));
//         }
//     }
//     return 0;
// }

// Hexadecimal to decimal 
// #include <stdio.h>
// #define SIZE 10000

// int main(void)
// {
//     char ch[SIZE];
//     int i = 0, len = 0, n1, n2, num, ans;
//     ans = 0;
//     while(scanf("%c", &ch[i]) != EOF && ch[i] != '\n'){
//         len++;
//         i++;
//     }
//     for(int i= 0; i < len; i++){
//         if(ch[i] >= '0' && ch[i] <= '9'){
//             num = ch[i] - '0';
//         }
//         else if(ch[i] >= 'a' && ch[i] <= 'f'){
//             n1 = (int) ch[i] - 87;
//         } 
//         else if(ch[i] >= 'A' && ch[i] <= 'Z'){
//             n2 = (int) ch[i] - 55;
//         }
//     }
//     return 0;
// }

// Doubt regarding pointers in Arrays and Strings 
// Remove character from string 
// #include <stdio.h>
// #define SIZE 1000

// int main(void){
//     char s[SIZE];
//     int i = 0, len = 0, c;
//     while(scanf("%c", &s[i]) != EOF){
//         len++;
//         i++;
//     }
//     c = getchar();

//     int count = 0, j = 0;
//     for(int i = 0; i < len; i++){
//         if(s[i] != c){
//             s[j++] = s[i];
//             count++;
//         }
//     }
//     for(int i = 0; i < count; i++){
//         printf("%c", s[i]);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #define SIZE 10000

// int main(void)
// {
//     char s[SIZE];
//     char t[SIZE];
//     int i = 0, lens = 0;
//     while(scanf("%c", &s[i]) == 1 && s[i] != '\n'){
//         lens++;
//         i++;
//     }
//     int j = 0, lent = 0;
//     while(scanf("%c", &t[j]) == 1 && t[j] != '\n'){
//         lent++;
//         j++;
//     }
//     printf("%s\n", strcat(s, t));
//     return 0;
// }

// bitcount
// #include <stdio.h>
// int bitcount(unsigned x){
//     int b;
//     for(b = 0; x != 0; x >>= 1){
//         if(x & 01){
//             b++;
//         }
//     }
//     return b;
// }
// int main(void)
// {
//     unsigned x;
//     scanf("%u", &x);
//     printf("%d\n", bitcount(x));
//     return 0;
// }

// swapping without using third temporary variable
// #include <stdio.h>
// int main(void)
// {
//     int a = 5, b = 10;
//     // a = a + b;
//     // b = a - b;
//     // a = a - b;
//     a = a ^ b; // biwise XOR
//     b = a ^ b;
//     a = a ^ b;
//     printf("a : %d b : %d", a, b);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int num, i = 0, count = 0, sum = 0;
//     float PPR;

//     while(scanf("%d" ,&num) != EOF){
//         sum += num;
//         if(num >= 50){
//             count++;
//         }
//         i++;
//     }
//     PPR = ( ((float)count)/i ) * 100;
//     printf("TMarks: %d Pass Student: %d PPR: %.2f", sum, count, PPR);
//     return 0;
// }

// // 
// #include <stdio.h>
// int main(void)
// {
//     int num, sq, sum, i;
//     sq = 1, i = 0, sum = 0;

//     while(scanf("%d", &num) != EOF){
//         sq = num * num;
//         sum += sq;
//         i++;
//     }
//     printf("%d\n", sum);
//     return 0;
// }

// Th Harmonic 
// #include <stdio.h>
// int main(void)
// {
//     int num, count = 0;
//     float sum = 0, HP = 0;
//     int i = 0;
//     while(scanf("%d", &num) != EOF){
//         count++;
//         i++;
//         sum += (float) 1 / num;
//     }
//     HP = (float) count / sum;
//     printf("%.2f\n", HP);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int num, c = 1, i = 0, sum = 0;

//     scanf("%d", &num);
//     while(i < num){
//         sum += c;
//         c *= 2;
//         i++;
//     }
//     printf("%d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int n, r = 1, sum = 0, i = 0;

//     scanf("%d", &n);
//     while(i < n){
//         sum += r;
//         r  *= -1;
//         i++;
//     }
//     printf("%d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int num, i = 1;
//     float q;
//     scanf("%d", &num);
//     q = num;
//     while(q != 1.0000 && q > 1.0000){
//         q /= (float) i;
//         i++;
//     }
//     if(q == 1.000){
//         printf("yes\n");
//     }
//     else{
//         printf("no\n");
//     }
//     return 0;
// }
// // fact series
// #include <stdio.h>
// int fact(int x){
//     int f = 1;
//     if(x < 0){
//         printf("Invalid\n");
//     }
//     for(int i = 1; i <= x; i++){
//         f *= i;
//     }
//     return f;
// }
// int main(void)
// {   
//     int sum, n, i, c;
//     sum = 0, i = 0, c = 0;
//     scanf("%d", &n);
//     while(i < n){
//         sum += 1/fact(c);
//         c += 1;
//         i++;
//     }
//     printf("%d\n", sum);
//     return 0;
// }
