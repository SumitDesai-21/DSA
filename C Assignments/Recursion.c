// // fact problem using recursion 
// #include <stdio.h>
// int fact(int n){
//     // base case 
//     if(n == 0){
//         return 1;
//     }

//     return n * fact(n-1);
// }
// int main(void)
// {
//     int num;
//     scanf("%d", &num);
//     printf("%d\n", fact(num));
//     return 0;
// }

// nth fibonacci number using recursion
// #include <stdio.h>
// int fibbo(int n){
//     // base case  -> also called as terminating case 
//     // Terminating case --> non - recursive case 
//     // Point where recursion stops 
//     if(n == 1 || n == 2){
//         return 1;
//     }

//     return fibbo(n-1) + fibbo(n-2);

// }
// int main(void)
// {
//     int num;
//     scanf("%d", &num);
//     printf("%d\n", fibbo(num));
//     return 0;
// }
// gcd compputation using recursion 


// compute gcd iteratively 
/*
#include <stdio.h>
int gcd(int n, int m){
    int gcd;
    if(n > m){
        n = n + m;
        m = n - m;
        n = n - m;
    }
    gcd = m;
    for(int i = 1; i <= n; i++){
        if(n % i == 0 && m % i == 0){
            gcd = i;
        }
    } 
    return gcd;
}
int main(void)
{
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d\n", gcd(n, m));
    return 0;
}
*/

// // recursively
// #include <stdio.h>

// int gcd(int n, int m){
//     if(n < m){ // we want n to be big and m to be smaller
//         n = n + m;
//         m = n - m;
//         n = n - m;
//     }
//     if(m == 0){
//         return n;
//     }

//     return gcd(m, n % m);
// }
// int main(void)
// {
//     int n, m;
//     scanf("%d%d", &n, &m);
//     printf("%d\n", gcd(n, m));
//     return 0;
// }

// // iteratively
// #include <stdio.h>
// int gcd(int n, int m){
//     int GCD;
//     if(n < m){
//         n = n + m;
//         m = n - m;
//         n = n - m;
//     }
//     GCD = n;
//     while(m != 0 && m > 0){  
//         int temp = m;
//         m = n % m;
//         n = temp;
//     }
//     if(m == 0){
//         GCD = n;
//     }
//     return GCD;
// }
// int main(void)
// {
//     int n, m;
//     scanf("%d%d", &n, &m);
//     printf("%d\n", gcd(n, m));
//     return 0;
// }
/*
// Tower of Hanoi 
#include <stdio.h>
void Towershanoi(int n, char originpole, char sparepole, char finalpole){
    // Termination Point
    if(n == 1){
        printf("%c -> %c\n", originpole, finalpole);
        return; // Breaking Point
    }
    Towershanoi(n-1, originpole, finalpole, sparepole);
    printf("%c -> %c\n", originpole, finalpole);
    Towershanoi(n-1, sparepole, originpole, finalpole);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    Towershanoi(n, 'a', 'b', 'c');
    return 0;
}
*/

// // Tower of Hanoi // Intermediate level recursion problem
// #include <stdio.h>
// void Towershanoi(int n, char originpole, char sparepole, char finalpole){
//     // Terminating condition
//     if(n == 1){
//         printf("%c -> %c\n", originpole, finalpole);
//         return; // Terminator
//     }
//     Towershanoi(n-1, originpole, finalpole, sparepole);
//     printf("%c -> %c\n", originpole, finalpole);
//     Towershanoi(n-1, sparepole, originpole, finalpole);

// }
// int main(void)
// {
//     Towershanoi(3, 'a', 'b', 'c');
//     return 0;
// }

// 



