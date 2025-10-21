// Nice Approach // 
//In this program you can control the Precision of the Value of want.
//Larger data types have been used here.
// #include <stdio.h>
// #include <math.h>

// double fact(int n) {
//     double f = 1;
//     for (int i = 1; i <= n; i++) { 
//         f *= i;
//     }
//     return f;
// }
// double powr(double num, int pow) {
//     double pw = 1;
//     for (int i = 1; i <= pow; i++) {
//         pw *= num;
//     }
//     return pw;
// }
// int main() {
//     double x;
//     scanf("%f", &x);
//     int r = 1;
//     double sum = 0, term = 1;
//     int c = 0;
//     double precision = 1e-6;  

//     while (fabs(term) > precision) {  
//         term = (r * powr(x, c)) / fact(c);
//         sum += term;
//         c += 2;
//         r *= -1;
//     }
//     printf("%.4f\n", sum);
//     return 0;
// }


// // 2nd Approach 

// #include <stdio.h>
// #include <math.h>

// #define PI 3.14

// double fact(int n) {
//     double f = 1;
//     for (int i = 1; i <= n; i++) { 
//         f *= i;
//     }
//     return f;
// }

// double powr(double num, int pow) {
//     double pw = 1;
//     for (int i = 1; i <= pow; i++) {
//         pw *= num;
//     }
//     return pw;
// }

// int main() {
//     double x;
//     scanf("%lf", &x); 

//     x = fmod(x, 2 * PI);

//     int r = 1;  
//     double sum = 1.0, term = 1.0;
//     int c = 2; 

//     double precision = 1e-6;

//     while (fabs(term) > precision) {  
//         term = (r * powr(x, c)) / fact(c);  
//         sum += term;  
//         c += 2;      
//         r *= -1;      
//     }

//     printf("%.4f\n", sum);  

//     return 0;
// }



// #include <stdio.h>
// #include <math.h>
// double fact(int n) {
//     double f = 1;
//     for (int i = 1; i <= n; i++) { 
//         f *= i;
//     }
//     return f;
// }
// double powr(double num, int pow) {
//     double pw = 1;
//     for (int i = 1; i <= pow; i++) {
//         pw *= num;
//     }
//     return pw;
// }
// int main() {
//     double x;
//     scanf("%lf", &x);
//     int r = 1;
//     double sum = 0, term = 1;
//     int c = 0;
//     long double precision = 0.000001;  
//     while (fabs(term) > precision) {  
//         term = (r * powr(x, c)) / fact(c);
//         sum += term;
//         c += 2;
//         r *= -1;
//     }
//     printf("%.4f\n", sum);
//     return 0;
// // }

// #include <stdio.h>
// #include <limits.h>

// int main() {
//     int num, max = INT_MIN;  

   
//     while (scanf("%d", &num) == 1) {  
//         if (num > max) {  
//             max = num;
//         }
//     }

//     printf("%d\n", max);  
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n;
//     int r = 1;
//     int c = 1;
//     int sum = 0;
//     int i=1;
//     scanf("%d",&n);
//     while(i<=n){
//         sum += r*(c);
//         r*= -1;
//         c+= 2;
//         i++;
        
//     }
//     printf("%d\n",sum);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n;
//     int r = 1;  
//     int c = 1;  
//     int sum = 0; 
//     int i = 1;  

   
//     scanf("%d", &n);

//     while (i <= n) {
        
//         sum += r * c;
//         if (i == 1) {
//             printf("%d", c * r); 
//         } else {
//             if (r == 1) {
//                 printf("+%d", c);
//             } else {
//                 printf("-%d", c); 
//             }
//         }
//         r *= -1; 
//         c += 2;  
//         i++;     
//     }

//     printf("\n%d\n", sum);

//     return 0;
// }


// #include <stdio.h>

// long long factorial(int num) {
//     long long fact = 1;
//     for (int i = 2; i <= num; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// long long binomialCoefficient(int n, int r) {
//     return factorial(n) / (factorial(r) * factorial(n - r));
// }

// int main() {
//     int n;
//     scanf("%d", &n);
    
//     for (int r = 0; r <= n; r++) {
//         printf("%lld ", binomialCoefficient(n, r));
//     }

//     printf("\n");
    
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int num;
//     int i=1;
//     double sum = 0;
//     scanf("%d",&num);
//     while(i<=num){
//         sum +=(double) 1/i;
//         i++;
//     }
//     printf("%.2lf\n",sum);

//     return 0;
// }

// #include <stdio.h>
// double fact(int n) {
//     double f = 1;
//     for (int i = 1; i <= n; i++) { 
//         f *= i;
//     }
//     return f;
// }
// double powr(double num, int n) {
//     double pw = 1;
//     for (int i = 1; i <= n; i++) {
//         pw *= num;
//     }
//     return pw;
// }
// int main(){
//     double x,ans,N,D;
//     int n;
//     scanf("%lf%d",&x,&n);
//     N = powr(x,n);
//     D = fact(n);
//     ans = N/D;
//     printf("%.2f\n",ans);

//     return 0;
// }

// // Q.10)
// #include <stdio.h>
// int main() {
//     int op1, op2;
//     char opr1;

//     while (1) {
    
//         if (scanf("%d", &op1) != 1) {
//             printf("bad op1\n");
//             while (getchar() != '\n'); 
//             continue;
//         }

//         if (scanf(" %c", &opr1) != 1) {
//             printf("bad opr1\n");
//             continue;
//         }

//         if (scanf("%d", &op2) != 1) {
//             printf("bad op2\n");
//             continue;
//         }

//         switch (opr1) {
//             case '+':
//                 printf("%d\n", op1 + op2);
//                 break;
//             case '-':
//                 printf("%d\n", op1 - op2);
//                 break;
//             case '*':
//                 printf("%d\n", op1 * op2);
//                 break;
//             case '/':
//                 if (op2 == 0) {
//                     printf("error\n");
//                 } else {
//                     printf("%d\n", op1 / op2);
//                 }
//                 break;
//             case '%':
//                 if (op2 == 0) {
//                     printf("error\n");
//                 } else {
//                     printf("%d\n", op1 % op2);
//                 }
//                 break;
//             case '|':
//                 printf("%d\n", op1 | op2);
//                 break;
//             case '&':
//                 printf("%d\n", op1 & op2);
//                 break;
//             case '<':
//                 printf("%d\n", op1 << op2);
//                 break;
//             case '>':
//                 printf("%d\n", op1 >> op2);
//                 break;
//             default:
//                 printf("bad opr1\n");
//                 break;
//         }

//         while (getchar() != '\n');
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int op1, op2, result;
//     char opr1,opr2;

//     while (1) {
//         int i = scanf("%d %c %d",&op1,&opr1,&op2);

//         if (i < 1) {
//             printf("bad op1\n");
//             while (getchar() != '\n');  
//             continue;
//         } else if (i < 2) {
//             printf("bad opr1\n");
//             while (getchar() != '\n');  
//             continue;
//         } else if (i < 3) {
//             printf("bad op2\n");
//             while (getchar() != '\n'); 
//             continue;
//         } else if (i == 4) {
//             printf("opr1 %c != opr2 %c\n", opr1, opr2);
//             while (getchar() != '\n'); 
//             continue;
//         }
//         switch (opr1) {
//             case '+':
//                 result = op1 + op2;
//                 break;
//             case '-':
//                 result = op1 - op2;
//                 break;
//             case '*':
//                 result = op1 * op2;
//                 break;
//             case '/':
//                 if (op2 == 0) {
//                     printf("error\n");
//                     continue;
//                 }
//                 result = op1 / op2;
//                 break;
//             case '%':
//                 if (op2 == 0) {
//                     printf("error\n");
//                     continue;
//                 }
//                 result = op1 % op2;
//                 break;
//             case '|':
//                 result = op1 | op2;
//                 break;
//             case '&':
//                 result = op1 & op2;
//                 break;
//             case '<':
//                 result = op1 << op2;
//                 break;
//             case '>':
//                 result = op1 >> op2;
//                 break;
//             default:
//                 printf("bad opr1\n");
//                 continue;
//         }
//         printf("%d\n", result);
//     }
//     return 0;
// }

// #include <stdio.h>  
// #include <stdlib.h>  
// #include <ctype.h>  
  
// int main() {  
//    int op1, op2;  
//    char opr1, opr2;  
  
//    while (1) {  
//       // Read first operand  
//       if (scanf("%d", &op1) != 1) {  
//         printf("bad op1\n");  
//         return 1;  
//       }  
  
//       // Read first operator  
//       if (scanf(" %c", &opr1) != 1 || !strchr("+-*/%<>|&", opr1)) {  
//         printf("bad opr1\n");  
//         return 1;  
//       }  
  
//       // Read second operand  
//       if (scanf("%d", &op2) != 1) {  
//         printf("bad op2\n");  
//         return 1;  
//       }  
  
//       // Read second operator (should be the same as the first operator)  
//       if (scanf(" %c", &opr2) != 1 || opr1 != opr2) {  
//         if (opr1 != opr2) {  
//            printf("opr1 %c != opr2 %c\n", opr1, opr2);  
//         } else {  
//            printf("bad opr2\n");  
//         }  
//         return 1;  
//       }  
  
//       // Evaluate the expression  
//       switch (opr1) {  
//         case '+':  
//            printf("%d\n", op1 + op2);  
//            break;  
//         case '-':  
//            printf("%d\n", op1 - op2);  
//            break;  
//         case '*':  
//            printf("%d\n", op1 * op2);  
//            break;  
//         case '/':  
//            if (op2 == 0) {  
//               printf("Error: Division by zero\n");  
//               return 1;  
//            }  
//            printf("%d\n", op1 / op2);  
//            break;  
//         case '%':  
//            if (op2 == 0) {  
//               printf("Error: Division by zero\n");  
//               return 1;  
//            }  
//            printf("%d\n", op1 % op2);  
//            break;  
//         case '<':  
//            printf("%d\n", op1 << op2);  
//            break;  
//         case '>':  
//            printf("%d\n", op1 >> op2);  
//            break;  
//         case '|':  
//            printf("%d\n", op1 | op2);  
//            break;  
//         case '&':  
//            printf("%d\n", op1 & op2);  
//            break;  
//         default:  
//            printf("Invalid operator\n");  
//            return 1;  
//       }  
//    }  
  
//    return 0;  
// }

// #include <stdio.h>

// int power(int n) {
//     int p;
//     p = 1;
//     while(n>=1) {
//         p = p*2;
//         n--;
//     }
//     return p;
// }

// int main() {
//     int a, b, ans;
//     char op1, op2, s;
//     while(scanf(" %d", &a) == 1) {
//             if(scanf(" %c", &op1) == 1) {
//                 if(op1=='+' || op1=='-' || op1=='*' || op1=='/' || op1=='%' || op1=='&' || op1=='|') {
//                     if(scanf(" %d", &b) == 1) {
//                         switch(op1) {
//                             case '+':
//                             ans = a+b;
//                             printf("%d\n", ans);
//                             break;
//                             case '-':
//                             ans = a-b;
//                             printf("%d\n", ans);
//                             break;
//                             case '*':
//                             ans = a*b;
//                             printf("%d\n", ans);
//                             break;
//                             case '/':
//                             ans = a/b;
//                             printf("%d\n", ans);
//                             break;
//                             case '&':
//                             ans = a&b;
//                             printf("%d\n", ans);
//                             break;
//                             case '|':
//                             ans = a|b;
//                             printf("%d\n", ans);
//                             break;
//                             case '%':
//                             ans = a%b;
//                             printf("%d\n", ans);
//                             break;
//                         }
//                     } else {
//                         scanf(" %c", &op2);
//                         printf("bad op2\n");
//                     }
//                 } else if(op1=='<' || op1=='>') {
//                     if(scanf(" %c", &op2) == 1) {
//                         if(op2 == op1) {
//                             if(scanf(" %d", &b) == 1) {
//                                 if(op1 == '>') {
//                                     ans = a / power(b);
//                                     printf("%d\n", ans);
//                                 } else if(op1 == '<') {
//                                     ans = a * power(b);
//                                     printf("%d\n", ans);
//                                 }
                                
//                             } else {
//                                 printf("bad op2\n");
//                             }
//                         } else {
//                             printf("opr1 %c != opr2 %c\n", op1, op2);
//                             scanf(" %d", &b);
//                         }
//                     } else {
//                         printf("bad opr2\n");
//                     }
//                 } else {
//                     printf("bad opr1\n");
//                     scanf(" %d", &b);
//                 }
//             } else {
//                 printf("bad opr1\n");
//             }
//     }
//     if(scanf(" %c", &s) == 1)
//         printf("bad op1\n");
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int i= 3;
//     while(i>0){
//         printf("%d\n",i);
//         i--;
//     }
//     printf("Happy Diwali\n");

//     return 0;
// }


