/*
Practice Example:
Try writing the following functions to reinforce your understanding:

A function that takes two integers as arguments and returns their sum.
A function that swaps the values of two variables using pointers.
A function that prints the first n Fibonacci numbers using recursion.
*/

// #include <stdio.h>
// int sum(int a,int b){
//     return a+b;
// }
// int main(){
//     printf("%d\n",sum(3,4));
//     return 0;
// }

// swaping function
/*
#include <stdio.h>
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    printf("%d %d\n",a,b);
}
int main(){
    int p = 10,q = 20;
    scanf("%d %d",&p,&q);
    swap(p,q);

    return 0;
}
*/

// fibonacci sequence -- hold 

// questions on function in c 

// #include <stdio.h>

// int g(int x, int y) {
// return x % y;
// }
// int e(int a) {
// int t = 3;
// t = g(a, t);
// return t;

// }

// int d(int x, int y) {

// return x- y+e(3) + g(5, 7);

// }

// int c(int p, int q) {

// int z;

// z = d(p, q) + 2 + e(7);

// return z;

// }

// int main(){

// int a= 10, b = 20, d;

// d = c(a, b);

// printf("%d\n", d);
// }


// #include <stdio.h>

// int g(int x, int y) {

// return x % y;

// }

// int e(int a) {

// int t = 3;

// t = g(a, t);

// return t;

// }

// int d(int x, int y) {

// return x - y+ e(3);

// }

// int c(int p, int q) {

// int z;

// z = d(p, q) + 2;

// return z;

// }

// int main() {

// int a= 10, b = 20, d;
//  d = c(a, b);

// printf("%d\n", d);

// }

// #include <stdio.h>
// int add(int p,int q){
//     int r;
//     r = a + b;
//    return  r;
// }
// int main(){
//     int a = 20,b = 30, c,x;
//     x = add(a,b);
//     printf("%d\n",x);
//     return 0;

// }

// #include <stdio.h>

// int m = 30; // global variable

// int add(int, int);

// int sub(int x, int y) {

// int z;

// z = add(x, -y) + m;

// return z;

// }

// int add(int a, int b) {

// int c;

// m = 40;

// c = a + b;

// return c;
// }

// int main() { 
// int a = 20, b = 30, c, x;
// m = 10;
// x = sub(a, b);
// printf("sub; %d\n", x);

// return 0;

// }

// print value of sinx 

