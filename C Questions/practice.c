#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", a * b * c);

    printf("\n");

    return 0;
}


#include <stdio.h>
#define PI 3.14 // Macros

int main(void)
{
    float radius, perimeter;

    scanf("%f", &radius);
    perimeter = 2 * PI * radius;
    printf("%.2f\n", perimeter);

    printf("\n");
    return 0;
}

#include <stdio.h>
int main(void)
{
    float C, F;

    scanf("%f", &C);
    F = (9 * (C) + 160) / 5;
    printf("%.2f\n", F);

    printf("\n");
    return 0;
}


Odd Sum
#include <stdio.h>
int main(void){
    int n, Sum, odd_num;
    
    scanf("%d", &n);
    Sum of 1st n odd numbers = n^2
    Sum = n * n;
    Sum = 0;
    odd_num = -1;
    int i = 1;
    while(i  <= n){
        odd_num += 2;
        Sum  += odd_num;
        i++;
    }
    printf("%d\n", Sum);
    printf("\n");
    return 0;
}

#include <stdio.h>
int main(void)
{
    float length, mili;

    scanf("%f", &length);
    mili = length * 304.8;
    printf("%.2f\n", mili);

    printf("\n");
    return 0;
}


#include <stdio.h>
int main(void)
{
    int a, b, c, max;

    scanf("%d%d%d", &a, &b , &c);
    if(a >= b && a >= c) max = a;
    else if(b >= a && b >= c) max = b;
    else max = c;
    
    printf("%d\n", max);
    return 0;
}


Leap - Year
#include <stdio.h>
int main(void)
{
    int year;
    scanf("%d", &year);
    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
        printf("leap year");
    }
    else{
        printf("non-leap year");
    }
    return 0;
}

profit loss
#include <stdio.h>
int main(void)
{
    float sales, investment, percentage;
    scanf("%f%f", &investment, &sales);
    percentage = ((sales - investment) / investment) * 100;
    if(sales > investment){
        printf("Profit : %.2f\n", percentage); 
    }
    else if(sales < investment){
        printf("Loss: %.2f\n", (-1) * percentage);
    }
    else{
        printf("no-profit, no-loss\n");
    }
    printf("\n");
    return 0;
}

first max, second max, third max

#include <stdio.h>
int main(void)
{
    int a, b, c;
    swapping
    scanf("%d%d%d", &a, &b, &c);
    if(a <= b){
        int temp = a;
        a = b;
        b = temp;
    }
    if(a <= c){
        int temp = a;
        a = c;
        c = temp;
    }
    if(b <= c){
        int temp = b;
        b = c;
        c = temp;
    }

    printf("%d\n", a-c);
    printf("\n");
    return 0;
}

character counting 
WC Command in C programming 
#include <stdio.h>
#define IN 1
#define OUT 0

int main(void)
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nc = nw = 0;
    while((c = getchar()) != EOF){
        ++nc;
        if( c == '\n'){
            ++nl;
        }
        if(c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
        }
        else if(state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}

write a program that prints it's input one word per line
#include <stdio.h>
int main(void)
{
    int c;
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            printf("\n");
        }
        else{
            printf("%c", c);
        }
    }
    printf("\n");
    return 0;
}


// Sorting 
#include <stdio.h>
int main(void)
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if(a <= b){
        int temp = a;
        a = b;
        b = temp;
    }
    if(a <= c){
        int temp = a;
        a = c;
        c = temp;
    }
    if(a <= d){
        int temp = a;
        a = d;
        d = temp;
    }
    if(b <= c){
        int temp = b;
        b = c;
        c = temp;
    }
    if(b <= d){
        int temp = b;
        b = d;
        d = temp;
    }
    if(c <= d){
        int temp = c;
        c = d;
        d = temp;
    }
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}

//
#include <stdio.h>
int main(void)
{
    int c;
    while((c = getchar()) != EOF){
        if(c >= 'a' && c <= 'z'){
            printf("alphabet\n");
        }
        else if(c == '\n' || c == '\t' || c == ' '){
            printf("not-alphabet\n");
        }
    }
    return 0;
}

#include <stdio.h>
int main(void)
{
    char ch;
    // to skip intial whitespcaes i,e. /t, /n, /v
    while(scanf(" %c", &ch) != EOF){
        if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
            printf("Alphabet\n");
        }
        else{
            printf("not-alphabet\n");
        }
    }

    printf("\n");
    return 0;
}

switch case 
#include <stdio.h>
int main(void)
{
    int WeekDayNum;
    
    scanf("%d", &WeekDayNum);
    switch(WeekDayNum){
        case 1: printf("Monday\n");
            break;
        case 2: printf("Tuesday\n");
            break;
        case 3: printf("Wednesday\n");
            break;
        case 4: printf("Thursday\n");
            break;;
        case 5: printf("Friday\n");
            break;
        case 6: printf("Saturday\n");
            break;
        case 7: printf("Sunday\n");
            break;
        default:
            printf("Invalid-Input\n");
        }
        printf("\n");
        return 0;
}
    

// Month Days
#include <stdio.h>
int main(void)
{
    int MonthNum;

    scanf("%d", &MonthNum);
    switch(MonthNum){
        case 1: printf("31\n");
            break;
        case 2: printf("29\n"); // 2024
            break;
        case 3: printf("31\n");
            break;
        case 4: printf("30\n");
            break;
        case 5: printf("31\n");
            break;
        case 6: printf("30\n");
            break;
        case 7: printf("31\n");
            break;
        case 8: printf("31\n");
            break;
        case 9: printf("30\n");
            break;
        case 10: printf("31\n");
            break;
        case 11: printf("30\n");
            break;
        case 12: printf("31\n");
            break;
        default : 
            printf("Invalid-Input\n");
            break;
    }
    printf("\n");
    return 0;
}

Write a C program to count total number of minimum notes required to make a given amount.
1 2 5 10 20 50 100 200 500 2000
#include <stdio.h>
int main(void)
{
    long amount, N1, N2, N5, N10, N20, N50, N100, N200, N500;

    scanf("%ld", &amount);
    N500 = (int) (amount / 500);
    amount %= 500;

    N200 = (int) (amount / 200);
    amount %= 200;

    N100 = (int) (amount / 100);
    amount %= 100;

    N50 = (int) (amount / 50);
    amount %= 50;
     
    N20 = (int) (amount / 20);
    amount %= 20;

    N10 = (int) (amount / 10);
    amount %= 10;

    N5 = (int) (amount / 5);
    amount %= 5;

    N2 = (int) (amount / 2);
    amount %= 2;

    N1 = (int) (amount / 1);
    amount %= 1;

    if(N500 > 0) printf("500: %ld ", N500);
    if(N200 > 0) printf("200: %ld ", N200);
    if(N100 > 0) printf("100: %ld ", N100);
    if(N50 > 0)  printf("50: %ld ", N50);
    if(N20 > 0)  printf("20: %ld ", N20);
    if(N10 > 0)  printf("10: %ld ", N10);
    if(N5 > 0)   printf("5: %ld ", N5);
    if(N2 > 0)   printf("2: %ld ", N2);
    if(N1 > 0)   printf("1: %ld ", N1);
    
    printf("\n");
    return 0;
}


#include <stdio.h>

int main(void)
{
    float A, B, C;

    scanf("%f%f%f", &A, &B, &C);
    // For Degree System 
    if(A + B + C == 180){
        printf("valid\n");
    }
    else{
        printf("Not-Valid\n");
    }
    printf("\n");
    return 0;
}

Write a C program to input all sides of a triangle and check whether the triangle is valid or not.
Heron's Formula 
A = sqrt(s(s-a)(s-b)(s-c))
s = a+b+c/2
#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, s, Area;

    scanf("%f%f%f", &a, &b, &c);
    s = (float) (a + b + c) / 2;
    Area = sqrt(s * (s - a) * (s - b) * (s - c));
    if(Area > 0.0000){
        printf("Valid\n");
    }
    else{
        printf("Not-Valid\n");
    }
    return 0;
}


Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, s, Area;

    scanf("%f%f%f", &a, &b, &c);
    s = (float) (a + b + c) / 2;
    Area = sqrt(s * (s - a) * (s - b) * (s - c));
    if(Area > 0.0000){
        if(a == b && a == c){
            printf("Equilateral\n");
        }
        else if(a == b || b ==c || a == c){
            printf("Isosceles\n");
        }
        else if(a != b && a != c && b != c){
            printf("Scalene\n");
        }
    }
    else{
        printf("Not-Valid\n");
    }
    return 0;
}

#include <stdio.h>
#include <math.h>

int main(void)
{
    // ax^2+bx+c = 0 --> Quadratic equation
    int a, b, c, Determinant;
    float del, x, y; 

    scanf("%d%d%d", &a, &b, &c);
    Determinant = b * b - ( 4 * a * c);
    del = (float) sqrt((double) Determinant);
    x = (float) ((-1)*b + del) / (2 * a);
    y = (float) ((-1)*b - del) / (2 * a);

    if(Determinant >= 0){
        printf("x1: %.2f x2: %.2f\n", x, y);
    }
    else{
        printf("Imaginery Roots\n");
    }
    return 0;
}

// ROI Program 
#include <stdio.h>
int main(void)
{
    int Fees, Package;
    float ROI;
    // ROI > 100 - profit 
    // ROI < 100 - Loss

    scanf("%d%d", &Fees, &Package);
    ROI = (float) ((Package - Fees)/Fees) * 100;
    printf("%.2f\n", ROI);

    printf("\n");
    return 0;
}

Physics, Chemistry, Biology, Mathematics and Computer
#include <stdio.h>
int main(void)
{
    int MP, MCh, MB, MM, MCp;
    float Percentage, Marks, TMarks;

    scanf("%d%d%d%d%d", &MP, &MCh, &MB, &MM, &MCp);
    Marks = (float) (MP + MCh + MB + MM + MCp);
    TMarks = 500;
    Percentage = ((float) (Marks / TMarks))  * 100;

    if(Percentage >= 90)      printf("Grade A\n");
    else if(Percentage >= 80) printf("Grade B\n");
    else if(Percentage >= 70) printf("Grade C\n");
    else if(Percentage >= 60) printf("Grade D\n");
    else if(Percentage >= 40) printf("Grade E\n");
    else printf("Grade F\n");

    printf("\n");
    return 0;
}

Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
/*
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% 
*/

#include <stdio.h>
int main(void)
{
    float Basic_Salary, HRA, DA, Gross_Salary;

    scanf("%f", &Basic_Salary);
    if(Basic_Salary <= 10000){
        HRA = (20.0/100.0) * Basic_Salary;
        DA =  (80.0/100.0) * Basic_Salary;
        Gross_Salary = (Basic_Salary + HRA + DA);
    }
    else if(Basic_Salary <= 20000){
        HRA = (25.0/100.0) * Basic_Salary;
        DA =  (90.0/100.0) * Basic_Salary;
        Gross_Salary = ( Basic_Salary + HRA + DA);
    }
    else if(Basic_Salary > 20000){
        HRA = (30.0/100.0) * Basic_Salary;
        DA =  (95.0/100.0) * Basic_Salary;
        Gross_Salary = (Basic_Salary + HRA + DA);
    }
    printf("Gross Salary: %.2f\n", Gross_Salary);
    printf("\n");
    return 0;
}


// // Switch
#include <stdio.h>
int main(void)
{ 
    char ch;
    scanf(" %c", &ch);
    switch(ch){
        case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'g': case 'h': 
        case 'i': case 'j': case 'k': case 'l': case 'm': case 'n': case 'o': case 'p':
        case 'q': case 'r': case 's': case 't': case 'u': case 'v': case 'w': case 'x':
        case 'y': case 'z':
        case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': case 'G': case 'H': 
        case 'I': case 'J': case 'K': case 'L': case 'M': case 'N': case 'O': case 'P':
        case 'Q': case 'R': case 'S': case 'T': case 'U': case 'V': case 'W': case 'X':
        case 'Y': case 'Z':
            printf("alpahbet\n");
            printf("hi\n");
            break;
        case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7':
        case '8': case '9':
            printf("digit\n");
            break;
        default :
            printf("Special Character\n");
            break;
    }
    return 0;
}

using functions
#include <stdio.h>
int character(char ch){
    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))   return 1;
    else if(ch >= '0' && ch <= '9') return 2;
    else return 3;
}
int main(void)
{
    int num;
    char ch;

    scanf(" %c", &ch);
    num = character(ch);
    switch(num){
        case 1:
            printf("Alphabet\n");
            break;
        case 2:
            printf("digit\n");
            break;
        case 3:
            printf("Special Character\n");
            break;
        default :
            printf("error\n");
            break;
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
int main(void)
{   
    int n, first, last;
    int count = 0;

    while(scanf("%d", &n) != -1){
        if(count == 0){
            first = n;
        }
        count++;
        last = n;
    }
    if(count == 0){
        printf("error\n");
    }
    else{
        printf("%d\n",last-first);
    }
    return 0;
}

#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n, Min;
    Min = INT_MAX; 
    int count = 0;
    while(scanf("%d", &n) != -1){
        if(Min >= n){
            Min = n;
        }
        count++;
    }
    if(count == 0){
        printf("error\n");
    }
    else{
        printf("%d\n", Min);
    }
    return 0;
}

binomial coeff.
nCr = n!/ (n-r)! * r!

fibonnaci sequence
1 1 2 3 5 8 13 21 34 55...
#include <stdio.h>
void fibonacci(int a, int b){
    int prev, curr, next;
    prev = 1;
    curr = 1;
    while(curr <= b){
        if(a == prev && b == curr){
            printf("YES\n");
                return;
        }
        next = curr + prev;
        prev = curr;
        curr = next;        
    }
    printf("NO\n");

}
int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    fibonacci(x, y);
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <math.h>
int main(void)
{
    double x;
    unsigned int n, i;
    double ans = 1.0;

    scanf("%lf%u", &x, &n);
    i = 1;
    while (i <= n) {
        ans = (long double) ans * x / i;
        i = i + 1;
    }
    printf("%.2lf\n", ans);
    return 0;
}   

#include <stdio.h>
int main(void)
{
    int n, sum, r, c;

    r = 1;
    c = 1;
    sum = 0;
    scanf("%d", &n);
    int i = 1;
    while(i <= n){
        sum += r * c;

        if(i == 1) printf("%d",r*c);
        else{
            if(r == 1)  printf("+%d", c);
            else if(r == -1)    printf("-%d", c);
        }
        r *= -1;
        c += 2;
        i++;
    } 
    printf("\n%d\n", sum);
    return 0;
}

#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c, Determinant;
    float del, X1, X2;

    scanf("%d%d%d", &a, &b, &c);
    Determinant = (b * b) -( 4 * a * c );
    del = sqrt((double) Determinant);
    X1 = ((-1) * b + del ) / (2 * a) ;
    X2 = ((-1) * b - del ) / (2 * a) ;
    if(Determinant < 0){
        printf("can't find root's\n");
    }
    else{
        printf("%.2f %.2f\n", X1, X2);
    }
    return 0;
}

#include <stdio.h>
int main(void)
{
    float credit, grade,weighted_sum, total_credits, SGPA;
    
    weighted_sum = 0;
    total_credits = 0;
    int i = 0;
    while(i < 5){
        scanf("%f%f", &credit, &grade);
        weighted_sum += (credit * grade);
        total_credits += credit;
        i++;
    }
    SGPA = (float) (weighted_sum / total_credits);
    printf("%f\n", SGPA);
    printf("\n");
    return 0;
}
// 3 8 2 7 1 6 2 4 1 8
// 1 1 1 1 1 1 1 1 1 1 


#include <stdio.h>
int main(void)
{
    float a, b, c, sum, avg;

    while(scanf("%f%f%f", &a, &b ,&c) != -1){
        sum = a + b + c;
        avg = (float) sum / 3;
        printf("%.2f\n", avg);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
int main(void)
{
    int initial_price;
    float discount, final_price;

    while(scanf("%d%f", &initial_price, &discount) != -1){
        final_price = initial_price - (initial_price * (discount/100));
        printf("%.2f\n", final_price);
        printf("\n");
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
int main(void)
{
    float value;
    char unit;

    while(scanf("%f %c", &value, &unit) == 2){
    
        if(unit == 'f')  printf("Inches: %.2f\n", 12 * value);
        else if(unit == 'y') printf("Inches: %.2f\n", 36 * value);
        else if(unit == 'm') printf("Inches: %.2f\n", 63360 * value);
        else printf("error\n");
    }
    printf("\n");
    return 0;
}



 #include <stdio.h>
 int main(){
    int n;
    char in;
    scanf("%d %c",&n,&in);
    if(in == 'f'){
        printf("%d\n",n*12);
    }
    else if(in == 'y'){
        printf("%d\n",n*36);
    }
    else if(in == 'm'){
        printf("%d\n",n*63360);
    }
    else{
        printf("error\n");
    }
    return 0;
 }

Write a C program to count total number of minimum notes required to make a given amount.
1  5 10 20 50 100 
#include <stdio.h>
int main(void)
{
    long amount, N1, N5, N20, N50, N100, Total_Notes;

    scanf("%ld", &amount);
    
    N100 = (int) (amount / 100);
    amount %= 100;

    N50 = (int) (amount / 50);
    amount %= 50;
     
    N20 = (int) (amount / 20);
    amount %= 20;

    N5 = (int) (amount / 5);
    amount %= 5;

    N1 = (int) (amount / 1);
    amount %= 1;
    
    Total_Notes = N100 + N50 + N20 + N5 + N1;

    if(N100 > 0) printf("100 %ld ", N100);
    if(N50 > 0)  printf("50 %ld ", N50);
    if(N20 > 0)  printf("20 %ld ", N20);
    if(N5 > 0)   printf("5 %ld ", N5);
    if(N1 > 0)   printf("1 %ld ", N1);
    
    printf("%ld\n", Total_Notes);
    return 0;
}


/*
Write a program which reads two numbers, as month and date respectively.
For example, if the input is "2 3" then it means 3rd February. 
Then the program prints the day-of-year corresponding to that date in a non-leap year.  
So for input "2 3", 
the ouput will be "34" because 3rd Feb is 34th day-of-year (31 for Jan and 3 for Feb).
The program prints 0 on an invalid input.
*/

#include <stdio.h>
int main(void)
{
    int month, day_of_month, result;

    while(scanf("%d%d", &month, &day_of_month) == 2){
        if(month == 1){
        result = day_of_month;
        if(result > 0 && result <= 31) printf("%d\n", result);
        else printf("%d\n", 0);
        }
        if(month == 2){
            result = day_of_month + 31;
            if(result > 31 && result <= 59) printf("%d\n", result);
            else printf("%d\n", 0);
        }
        if(month == 3){
            result = day_of_month + 59;
            if(result > 59 && result <= 90) printf("%d\n", result);
            else printf("%d\n", 0);
        }
        if(month == 4){
            result = day_of_month + 90;
            if(result > 90 && result <= 120) printf("%d\n", result);
            else printf("%d\n", 0);
        }
        if(month == 5){
            result = day_of_month + 120;
            if(result > 120 && result <= 151) printf("%d\n", result);
            else printf("%d\n", 0);
        }
        if(month == 6){
            result = day_of_month + 151;
            if(result > 151 && result <= 181) printf("%d\n", result);
            else printf("%d\n", 0);
        }
        if(month == 7){
            result = day_of_month + 181;
            if(result > 181 && result <= 212) printf("%d\n", result);
            else printf("%d\n", 0);
        }
        if(month == 8){
            result = day_of_month + 212;
            if(result > 212 && result <= 243) printf("%d\n", result);
            else printf("%d\n", 0);
        }
        if(month == 9){
            result = day_of_month + 243;
            if(result > 243 && result <= 273) printf("%d\n", result);
            else printf("%d\n", 0);
        }
        if(month == 10){
            result = day_of_month + 273;
            if(result > 273 && result <= 304) printf("%d\n", result);
            else printf("%d\n", 0);
        }
        if(month == 11){
            result = day_of_month + 304;
            if(result > 304 && result <= 334) printf("%d\n", result);
            else printf("%d\n", 0);
        }
        if(month == 12){
            result = day_of_month + 334;
            if(result > 334 && result <= 365) printf("%d\n", result);
            else printf("%d\n", 0);
        }
    }
    
    printf("\n");
    return 0;
}

#include <stdio.h>
int main(void)
{
    char ch;
    scanf(" %c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("vowel\n");
    
    else
        printf("not vowel\n");

    return 0;
// }

#include <stdio.h>
int main(void)
{
    int day_of_year, day_of_month, month;
    month = 0;
    while(scanf("%d", &day_of_year) == 1){
        if(day_of_year <= 31){
            if(day_of_year > 0){
                month = 1;
                day_of_month = day_of_year;
            }
            else  printf("error\n");
        }
        else if(day_of_year <= 59){
            if(day_of_year > 31){
                month = 2;
                day_of_month = day_of_year - 31;
            }
            else  printf("error\n");
        }
        else if(day_of_year <= 90){
            if(day_of_year > 59){
                month = 3;
                day_of_month = day_of_year - 59;
            }
            else  printf("error\n");
        }
        else if(day_of_year <= 120){
            if(day_of_year > 90){
                month = 4;
                day_of_month = day_of_year - 90;
            }
            else  printf("error\n");
        }
        else if(day_of_year <= 151){
            if(day_of_year > 120){
                month = 5;
                day_of_month = day_of_year - 120;
            }
            else  printf("error\n");
        }
        else if(day_of_year <= 181){
            if(day_of_year > 151){
                month = 6;
                day_of_month = day_of_year - 151;
            }
            else  printf("error\n");
        }
        else if(day_of_year <= 212){
            if(day_of_year > 181){
                month = 7;
                day_of_month = day_of_year - 181;
            }
            else  printf("error\n");
        }
        else if(day_of_year <= 243){
            if(day_of_year > 212){
                month = 8;
                day_of_month = day_of_year - 212;
            }
            else  printf("error\n");
        }
        else if(day_of_year <= 273){
            if(day_of_year > 243){
                month = 9;
                day_of_month = day_of_year - 243;
            }
            else  printf("error\n");
        }
        else if(day_of_year <= 304){
            if(day_of_year > 273){
                month = 10;
                day_of_month = day_of_year - 273;
            }
            else  printf("error\n");
        }
        else if(day_of_year <= 334){
            if(day_of_year > 304){
                month = 11;
                day_of_month = day_of_year - 304;
            }
            else  printf("error\n");
        }
        else if(day_of_year <= 365){
            if(day_of_year > 334){
                month = 12;
                day_of_month = day_of_year - 334;
            }
            else  printf("error\n");
        }
        else{
            printf("error\n");
            break;
        }
        printf("%d %d\n", day_of_month, month);
    }
    return 0;
}

#include <stdio.h>
int main() {
    int a, b, c, d;
    int max, min;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    max = a;
    if(max < b)
        max = b;
    if(max < c)
        max = c;
    if(max < d)
        max = d;
    min = a;
    if(min > b)
        min = b;
    if(min > c)
        min = c;
    if(min > d)
        min = d;
    if(a != min && a != max)
        printf("%d ", a);
    if(b != min && b != max)
        printf("%d ", b);
    if(c != min && c != max)
        printf("%d ", c);
    if(d != min && d != max)
        printf("%d ", d);
}

#include <stdio.h>
void fibonacci(int a, int b){
    int prev, curr, next;
    prev = 1;
    curr = 1;
    while(curr <= b){
        if(a == prev && b == curr){
            printf("yes\n");
            return;
        }
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    printf("no\n");
}
int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    fibonacci(x, y);

    return 0;
}


#include <stdio.h>
int main(void)
{
    int n, term;
    scanf("%d", &n);
    term = 1;
    int i = 0;

    while(i < n){
        printf("%d ", term);
        term *= 2;
        i++;
    }
    return 0;
}

#include <stdio.h>
#include <limits.h>

int main(void)
{
    int num;
    int first, second, third;

    first = INT_MIN; second = INT_MIN; third = INT_MIN;
    while(scanf("%d", &num) != EOF){
        if(num >= first){
            third = second;
            second = first;
            first = num;
        }
        else if(num >= second){
            third = second;
            second = num;
        }
        else if(num >= third){
            third = num;
        }
        else{
            printf("not found\n");
        }
    }
    if(third != INT_MIN){
        printf("%d\n", third);
    }
    else{
        printf("not found\n");
    }
    return 0;
}

// 5 1 2 3 4 6
// 5 6 6 7

cosinex program



#include <stdio.h>
#include <math.h>
#define ERROR 1.0e-6

double fact(int n) {
    double f = 1;
    for (int i = 1; i <= n; i++) { 
        f *= i;
    }
    return f;
}
double powr(double num, int pow) {
    double pw = 1;
    for (int i = 1; i <= pow; i++) {
        pw *= num;
    }
    return pw;
}
int main() {
    double x;
    scanf("%lf", &x);
    int r = 1;
    double sum = 0, term = 1;
    int c = 0;
    
    while (fabs(term) > ERROR) {  
        term = (r * powr(x, c)) / fact(c);
        sum += term;
        c += 2;
        r *= -1;
    }
    printf("%.4f\n", sum);
    return 0;
}

#include <stdio.h>
#include <limits.h>

int main(void)
{
    int num, MAX;
    MAX = INT_MIN;

    while(scanf("%d", &num) != EOF){
        if(num >= MAX){
            MAX = num;
        }
    }
    printf("%d\n", MAX);
}
// 8 2 3 1 4 132  1 32123 5 1 23 2 5 123 1 2 32 1

#include <stdio.h>
double fact(int n){
    double f = 1;
    for(int i = 1; i <= n; i++){
        f *= i;
    }
    return f;
}
int main(void)
{
    int n;

    scanf("%d", &n);
    int term = 0;
    int r = 0;
    while(r <= n){
        term = fact(n) / (fact(r) * fact(n-r));
        r++;
        printf("%d ", term);
    }
    return 0;
}


#include <stdio.h>
int main(void)
{
    int n;
    float sum;
    sum = 0;
    scanf("%d", &n);
    int i = 1;
    while(i <= n){
        sum += (1.00/i);
        i++;
    }
    printf("%.2f\n", sum);
    return 0;
}

#include <stdio.h>
int add(int x, int y){
    return x + y;
}
int mult(int a, int b){
    int i, sum;
    sum = 0, i = 0;
    if(a==0 || b == 0) return sum;
    if(b > 0){
        while(i < b){
            sum += add(a, 0);
            i++;
        }
    }
    else if(b < 0){
        while(i > b){
            sum -= add(a, 0);
            i--;
        }
    }
    return sum;
}
int main(void){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", mult(a, b));
    return 0;
}

#include <stdio.h>
#include <math.h>

double fact(int n){
    double f = 1;
    for(int i = 1; i <= n; i++){
        f *= i;
    }
    return f;
}
int main(void)
{
    float x, ans;
    int n;
    scanf("%f%d", &x, &n);
    ans = (double) pow(x, n)/fact(n);
    printf("%.2f\n", ans);
}

I can attempt the quiz again
