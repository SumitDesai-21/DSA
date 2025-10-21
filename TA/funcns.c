// #include <stdio.h>
// int add(int a,int b){
//     return a+b;
// }
// int mult(int x,int y){
//     int i=0,sum =0;
//     if(x == 0 || y==0) return sum;
//     if(y > 0){
//         while(i<y){
//             sum += add(x,0);
//             i++;
//         }
//     }
//     else if(y<0){
//         while(i>y){
//             sum -= add(x,0);
//             i--;
//         }
//     }
//     return sum;
// }
// int main(void){
//     int l,m;
//     scanf("%d%d",&l,&m);
//     printf("%d\n", mult(l,m));
//     return 0;
// }


// 2nd Que.
// #include <stdio.h>
// int isodd(int n){
//     if(n<0){
//         n*=-1;
//     }
//     else{
//         if(n%2==1){
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d\n",isodd(n));
//     return 0;
// }

// // 3rd que.
// #include <stdio.h>
// int max3(int a,int b,int c){
//     if(a>=b && a>= c) return a;
//     else if(b>=a && b>= c) return b;
//     else return c;
// }
// int main(){
//     int x,y,z;
//     scanf("%d%d%d",&x,&y,&z);
//     printf("%d\n",max3(x,y,z));
//     return 0;
// }

// #include <stdio.h>
// int isadigit(char ch){
//     int ans = 0;
//     if(ch >= '0' && ch <= '9'){
//         ans = 1;
//     }
//     return ans;
// }
// int main(){
//     char ch;
//     scanf(" %c",&ch);
//     printf("%d\n",isadigit(ch));
//     return 0;
// }
/*
#include <stdio.h>
unsigned long factorial(unsigned int n){
    unsigned long f = 1;
    for(int i=1;i<=n;i++){
        f *= i;
    }
    return f;
}
int main(){
    unsigned int n;
    scanf("%u",&n);
    printf("%lu\n", factorial(n));
    return 0;
}
*/

// LA EP BEEE - PSPP
// Be Serious about your life bro learn as many things as possible ans solve as many questions as possible read books and many textbooks blgs

