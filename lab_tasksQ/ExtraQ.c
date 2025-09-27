// square root of number 

// #include <stdio.h>
// double sqroot(double x)
// {
//     double y;
//     y = x - 1;
//     while(y * y >= x){
//         y = y - 1;
//     }
//     y = y - 1;
//     while(y *  y <= x){
//         y = y + 0.1;
//     }
//     y = y + 0.1;
//     while(y * y >= x){
//         y = y - 0.01;
//     }
//     y = y - 0.01;
//     while(y * y <= x){
//         y = y + 0.001;
//     }
//     y = y + 0.001;
//     while(y * y >= x){
//         y = y - 0.0001;
//     }
//     y = y - 0.0001;
//     while(y * y <= x){
//         y = y + 0.00001;
//     }
//     y = y + 0.00001;
//     while(y * y >= x){
//         y = y - 0.000001;
//     }
//     y = y - 0.000001;
//     while(y * y <= x){
//         y = y + 0.0000001;
//     }
//     y = y + 0.0000001;

//     return y;
// }
// int main() {
//     double m;
//     scanf("%lf", &m);
//     if(m == 0)
//         printf("0.00000\n");
    
//     else if(m < 0.000000)
//         printf("error\n");
    
//     else
//         printf("%lf\n", sqroot(m));

//     printf("\n");
//     return 0;
// }
///* */

// // GCD Of a & b

// #include <stdio.h>
// #include <math.h>

// int gcd(int a, int b){
    // int small,gcd, GCD;
    // if( a > 0 && b > 0 ){
    // if(a <= b) small = a;
    // else small = b;
    // int i = 1;
    // while(i <= small){
    //     if(a % i == 0 && b % i == 0){
    //         gcd = i;
    //     }
    //     i++;
    // }
    // GCD = gcd;
    // }
//     //In Case of negative numbers --> fabs()

//     else if( a < 0 && b < 0 ){
//         if(a <= b) small = -1* (b);
//         else small = -1 * (a);
//         int i = 1;
//         while(i <= small){
//             if(a % i == 0 && b % i == 0){
//                 gcd = -1 * (i);
//             }
//             i++;
//         }
//         GCD = gcd;
//     }
//     // // one case if either of any number is negative -- Hold
//     // else if(a == 0 || b == 0){
//     //     if(a == 0) gcd = b;
//     //     if(b == 0) gcd = a;

//     //     return gcd;
//     // }
//     return GCD;
// } 
// int main()
// {
//     int a, b;
//     scanf("%d%d", &a, &b);
//     printf("%d\n", gcd(a,b));
//     printf("\n");
//     return 0;
// }


// #include <stdio.h>
// #define AREA(l, b) l * b; // #define token value - format
// int main(void)
// {
//     int l1, l2;
//     scanf("%d%d", &l1, &l2);
//     int area = AREA(l1,l2);
//     printf("%d\n", area);
//     return 0;
// }


// preprocessor directives 
// #include <stdio.h>
// #define MAN(x,y) ((x) > (y)) ? (x) : (y);
// int main(void)
// {
//     int i = 10, j = 5, k = 0;
//     k = MAN(++i,j++);
//     printf("%d %d %d\n", i, j, k);
//     return 0;
// }


// #include <stdio.h>
// #define MAX(a,b) ((a) > (b) ? (a) : (b))
// #define SQ(x) ((x) * (x))
// #define DOUBLEMAX(x,y) (MAX(x,y) + MAX(x,y))

// int main(void)
// {
//     int i, j;
//     scanf("%d%d", &i, &j);
//     printf("%d\n", (SQ(DOUBLEMAX(i,j))));
//     return 0;
// }

/*
#include <stdio.h>
#define M1(a,b) ((a) + (b))
#define M2(a,b,c) (M1(a,b) / M1(b,c))
#define M3(a,b,c) M2(a,b,c) / M1(a,c)
#define M4(a,b,c) (M3(a,b,c))
int main(void)
{
    int i = M4(1,2,3);
    printf("%d\n", i);
    return 0;
}
*/

// #include <stdio.h>
// int main(void)
// {

//     return 0;
// }

// Solve as many problems as possible 
// Print non- repeating numbers of an array
// #include <stdio.h>
// #define SIZE 16
// int main(void)
// {
//     int n = 0;
//     int nums[SIZE];
//     int unique_nums[n];
//     // INPUT 

//     for(int i = 0; i < SIZE; i++){
//         scanf("%d", &nums[i]);
//     }
     
//     // Code Body
//     for(int i = 0; i < SIZE; i++){
//         // n iterator
//         int n = 0;
//         for(int j = 0; j < SIZE; j++){
//             if(nums[i] == nums[j]){
//                 n++;
//             }
//         }
//         if(n == 1){
//             unique_nums[n] = nums[i];
//             n++;
//         }
//     }
//     // OUTP
//     for(int j = 0; j < n; j++){
//         printf("%d ", unique_nums[j]);
//     }
//     return 0;
// }


// #include <stdio.h>
// #define SIZE 16

// int main(void)
// {
//     int n = 0;
//     int nums[SIZE];
//     int unique_nums[SIZE]; 
//     int i = 0;

//     while(i < SIZE){
       
//         scanf("%d", &nums[i]);
//         int n = 0;

//         for(int j = 0; j < i; j++){ 
//             if(nums[i] == nums[j]){
//                 n++;
//             }
//         }
//         if(n == 1){
//             unique_nums[n] = nums[i];
//             n++;
//         }

//         i++;
//     }
//     for(int j = 0; j < n; j++){
//         printf("%d ", unique_nums[j]);
//     }

//     printf("\n");
//     return 0;
// }


// #include <stdio.h>
// #define SIZE 16

// int main(void) {
//     int n = 0; 
//     int nums[SIZE];
//     int unique_nums[SIZE];
//     int i = 0;

//     while (i < SIZE && scanf("%d", &nums[i]) == 1) {
//         scanf("%d", &nums[i]); 
//         int n = 0;

//         for (int j = 0; j <= i; j++) {
//             if (nums[i] == nums[j]) {
//                 n++;
//             }
//         }

//         if (n == 1) {
//             unique_nums[n] = nums[i];
//             n++;
//         }

//         i++;
//     }

//     for (int j = 0; j < n; j++) {
//         printf("%d ", unique_nums[j]);
//     }

//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     // int a = 10, b = 20, c;  
//     // c = a + b++;
//     // printf("%d\n", c);
//     int a = 10, b = 20, c = 30; d;
//     d = a && b | b && c;
//     printf("\n"
//     )
//     return 0;
// }


// // count digits whitespaces and others 
// #include <stdio.h>
// int main(void)
// {
//     /*count digits, whitespaces, other*/
//     int c, nwhite, nother;
//     int ndigit[10];

//     for(int i = 0; i < 10; i++){
//         ndigit[i] = 0;
//     }
//     while((c = getchar()) != EOF){
//         if(c >= '0' && c <= '9'){
//             ++ndigit[c - '0'];
//         }
//         else if(c == ' ' || c == '\n' || c == '\t'){
//             ++nwhite;
//         }
//         else{
//             ++nother;
//         }
//     }
//     printf("\ndigits = ");
//     for(int i = 0; i < 10; i++){
//         printf(" %d", ndigit[i]);
//     }
//     printf(" , whitespaces =  %d, other = %d\n", nwhite, nother);

//     return 0;
// }

// // print histogram
// // histogram of length of words in it's input
// #include <stdio.h>
// #define SIZE 16

// int main(void)
// {
//     int c;
//     char arr[SIZE];
        
//     return 0;
// }

// // TA 
// #include <stdio.h>
// int main(void)
// {
//     int a = 10, b = 20, c = 30, d;
//     d = a && b | b && c;
//     printf("%d\n", d);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {   
//     int a = 10, b = 20, c = 30, d;
//     d = a & b || b & c;
//     printf("%d\n", d);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int a = 10, b = 20, c = 30, d;
//     d = a == b <= c;
//     printf("%d\n", d);

//     return 0;
// // }

// #include <stdio.h>

// int main() {
//     int x, y;
//     scanf("%d%d", &x, &y);
//     if (x % 2)
//     if (y % 2)
//     printf("Odd Pair");
//     else if (x % 3)
//     printf("Divisible by 3");
//     else
//     printf("Even Pair");
//     printf(" End");
//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     int x = 0;
//     x = printf("%d%c", 123, 'x');
//     printf("\n%d\n", x);
//     return 0;
// }

// #include <stdio.h>
// #define ADD(a, b)    a + b
// int main() {
//     printf("%d\n", ADD(10, 20) * ADD(10, 20));
//     return 0;   
// }


// #include <stdio.h>
// int main(void)
// {
//     float p, r, n, SI,final_amount;

//     scanf("%f%f%f", &p, &r, &n);
//     SI = p*r*n / 100;
//     final_amount = p + SI;
//     printf("%f\n", final_amount);
//     return 0;
// }
