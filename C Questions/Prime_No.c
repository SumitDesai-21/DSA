#include <stdio.h>
int main(void)
{
    int n;
    int isPrime = 1;
    scanf("%d", &n);
    if(n <= 1){
        isPrime = 0;
    }
    int i = 2;
    while(i <= n/2){
        if(n % i == 0){
            isPrime = 0;
        }
        i++;
    }
    if(isPrime){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}


Print Prime Numbers
#include <stdio.h>
#include <math.h>
int isPrime(int num){
    int i = 2;
    while(i <= sqrt(num)){
        if(num % i == 0){
            return 0;
        }
        i++;
    }
    return 1;
}
int main(void)
{
    int n, x;
    x = 0;
    scanf("%d", &n);
    int i = 2;
    while(i <= n){
        x = isPrime(i);
        if(x == 1){
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}

#include <stdio.h>
#define D(m, n) m / n // 1
#define C(y) (y / 2) // 2
#define B(x) x * x // 2 + 1 * 2 + 1
#define A(a, b) B(C(a) + D(a, b)) // 2 + 2 +1  

int main() {
    printf("%d\n", A(4, 4)); // 5
}
