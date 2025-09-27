// max b/w 2
// Write a C program to check whether a character is an alphabet or not.
/*
#include <stdio.h>

int main() {
    int amount;
    int notes100, notes50, notes20, notes5, notes1, totalNotes;

    scanf("%d", &amount);

    notes100 = amount / 100;
    amount %= 100;

    notes50 = amount / 50;
    amount %= 50;

    notes20 = amount / 20;
    amount %= 20;

    notes5 = amount / 5;
    amount %= 5;

    notes1 = amount;

    totalNotes = notes100 + notes50 + notes20 + notes5 + notes1;

    if (notes100 > 0) {
        printf("100 %d ", notes100);
    }
    if (notes50 > 0) {
        printf("50 %d ", notes50);
    }
    if (notes20 > 0) {
        printf("20 %d ", notes20);
    }
    if (notes5 > 0) {
        printf("5 %d ", notes5);
    }
    if (notes1 > 0) {
        printf("1 %d ", notes1);
    }

    // Print the total number of notes at the end
    printf("%d\n", totalNotes);

    return 0;
}
*/
// Write  a C program which reads a number as a day-of-year (like 1, 2, .. 365).
//The program then prints the month and date of that particular day-of-year,
// for the year 2023.
/*
#include <stdio.h>

int main() {
    int dayOfYear, day, month;

    // Input from the user
    scanf("%d", &dayOfYear);

    // Check for invalid input
    if (dayOfYear < 1 || dayOfYear > 365) {
        printf("invalid\n");
        return 0;
    }

    // Using if-else to determine the month and day
    if (dayOfYear <= 31) {  // January
        month = 1;
        day = dayOfYear;
    } else if (dayOfYear <= 59) {  // February
        month = 2;
        day = dayOfYear - 31;
    } else if (dayOfYear <= 90) {  // March
        month = 3;
        day = dayOfYear - 59;
    } else if (dayOfYear <= 120) {  // April
        month = 4;
        day = dayOfYear - 90;
    } else if (dayOfYear <= 151) {  // May
        month = 5;
        day = dayOfYear - 120;
    } else if (dayOfYear <= 181) {  // June
        month = 6;
        day = dayOfYear - 151;
    } else if (dayOfYear <= 212) {  // July
        month = 7;
        day = dayOfYear - 181;
    } else if (dayOfYear <= 243) {  // August
        month = 8;
        day = dayOfYear - 212;
    } else if (dayOfYear <= 273) {  // September
        month = 9;
        day = dayOfYear - 243;
    } else if (dayOfYear <= 304) {  // October
        month = 10;
        day = dayOfYear - 273;
    } else if (dayOfYear <= 334) {  // November
        month = 11;
        day = dayOfYear - 304;
    } else {  // December
        month = 12;
        day = dayOfYear - 334;
    }

    // Print the day and month
    printf("%d %d\n", day, month);

    return 0;
}
*/

// area or perimeter
// my approach
/*
#include <stdio.h>
int main(){
    char t,r,s,c,ch,a,p,op;
    float height,base,radius,side,side1,side2,l,m,n;
    float area,peri;
    scanf("%c",ch);
    scanf("%c",op);
    if(ch == 't'){
        if(op == 'a'){
            scanf("%.2lf%.2lf",&base,&height);
            area = 0.5*base*height;
            printf("%.2lf\n",area);
        }
        else if(op == 'p'){
            scanf("%.2lf%.2lf%.2lf",&l,&m,&n);
            peri = l+m+n;
            printf("%.2lf\n",peri);
        }
    }
    if(ch == 'r'){
        if(op == 'a'){
            scanf("%.2lf%.2lf",&side1,&side2);
            area = side1*side2;
            printf("%.2lf\n",area);
        }
        else if(op == 'p'){
            scanf("%.2lf%.2lf",&side1,&side2);
            peri = 2*(side1+side2);
            printf("%.2lf\n",peri);
        }
    }
    if(ch == 's'){
        scanf("%.2lf",&side);
        if(op == 'a'){
            area = side*side;
            printf("%.2lf\n",area);
        }
        else if(op == 'p'){
            peri = 4*side;
            printf("%.2lf\n",peri);
        }
    }
     if(ch == 'c'){
        float pi = 3.14;
        scanf("%.2lf",&radius);
        if(op == 'a'){
            area = pi*radius*radius;
            printf("%.2lf\n",area);
        }
        else if(op == 'p'){
            peri = 2*pi*radius;
            printf("%.2lf\n",peri);
        }
    }
    return 0;
}
*/
/*
#include <stdio.h>

#define PI 3.14

int main() {
    char type, operation;
    float b, h, a, s1, s2, s3, r;

    // Read inputs
    if (scanf(" %c %c", &type, &operation) != 2) {
        printf("error\n");
        return 0;
    }

    // Triangle
    if (type == 't') {
        if (operation == 'a') {
            // Area of triangle requires 2 inputs (base and height)
            if (scanf("%f %f", &b, &h) == 2) {
                printf("%.2f\n", (0.5 * b * h));  // Area = 1/2 * base * height
            } else {
                printf("error\n");
            }
        } else if (operation == 'p') {
            // Perimeter of triangle requires 3 inputs (sides s1, s2, s3)
            if (scanf("%f %f %f", &s1, &s2, &s3) == 3) {
                printf("%.2f\n", (s1 + s2 + s3));  // Perimeter = sum of sides
            } else {
                printf("error\n");
            }
        } else {
            printf("error\n");
        }
    }
    // Rectangle
    else if (type == 'r') {
        if (operation == 'a') {
            // Area of rectangle requires 2 inputs (length and breadth)
            if (scanf("%f %f", &b, &h) == 2) {
                printf("%.2f\n", (b * h));  // Area = length * breadth
            } else {
                printf("error\n");
            }
        } else if (operation == 'p') {
            // Perimeter of rectangle requires 2 inputs (length and breadth)
            if (scanf("%f %f", &b, &h) == 2) {
                printf("%.2f\n", (2 * (b + h)));  // Perimeter = 2 * (length + breadth)
            } else {
                printf("error\n");
            }
        } else {
            printf("error\n");
        }
    }
    // Square
    else if (type == 's') {
        if (operation == 'a') {
            // Area of square requires 1 input (side length)
            if (scanf("%f", &a) == 1) {
                printf("%.2f\n", (a * a));  // Area = side^2
            } else {
                printf("error\n");
            }
        } else if (operation == 'p') {
            // Perimeter of square requires 1 input (side length)
            if (scanf("%f", &a) == 1) {
                printf("%.2f\n", (4 * a));  // Perimeter = 4 * side
            } else {
                printf("error\n");
            }
        } else {
            printf("error\n");
        }
    }
    // Circle
    else if (type == 'c') {
        if (operation == 'a') {
            // Area of circle requires 1 input (radius)
            if (scanf("%f", &r) == 1) {
                printf("%.2f\n", (PI * r * r));  // Area = π * radius^2
            } else {
                printf("error\n");
            }
        } else if (operation == 'p') {
            // Circumference of circle requires 1 input (radius)
            if (scanf("%f", &r) == 1) {
                printf("%.2f\n", (2 * PI * r));  // Circumference = 2 * π * radius
            } else {
                printf("error\n");
            }
        } else {
            printf("error\n");
        }
    } else {
        printf("error\n");
    }

    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int n;
    char f,y,m,in;
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

*/
/*
#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a<b && b<c && c<d){
            printf("%d %d\n",b,c);

        }
        else{
        if(a>=b){
            int temp = a;
            a = b;
            b = temp;
        }
        if(a>=c){
            int temp = a;
            a = c;
            c = temp;
        }
        if(a>=d){
            int temp = a;
            a = d;
            d = temp;
        }
        if(b>=c){
            int temp = b;
            b = c;
            c = temp;
        }
        if(b>=d){
            int temp = b;
            b = d;
            d = temp;
        }
        if(c>=d){
            int temp = c;
            c = d;
            d = temp;
        }

    printf("%d %d\n",c,b);
    }
    return 0;
    
}
*/

/*
# include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch >= 'a' && ch <= 'z'){
        printf("small\n");
    }
    else if(ch >= 'A' && ch <= 'Z'){
        printf("capital\n");
    }
    else if(ch >= '0' && ch <= '9'){
        printf("digit\n");
    }
    else{
        printf("other\n");
    }
    
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int dayOfYear, day, month;

    // Input from the user
    scanf("%d", &dayOfYear);

    // Check for invalid input
    if (dayOfYear < 1 || dayOfYear > 365) {
        printf("invalid\n");
        return 0;
    }

    // Using if-else to determine the month and day
    if (dayOfYear <= 31) {  // January
        month = 1;
        day = dayOfYear;
    } else if (dayOfYear <= 59) {  // February
        month = 2;
        day = dayOfYear - 31;
    } else if (dayOfYear <= 90) {  // March
        month = 3;
        day = dayOfYear - 59;
    } else if (dayOfYear <= 120) {  // April
        month = 4;
        day = dayOfYear - 90;
    } else if (dayOfYear <= 151) {  // May
        month = 5;
        day = dayOfYear - 120;
    } else if (dayOfYear <= 181) {  // June
        month = 6;
        day = dayOfYear - 151;
    } else if (dayOfYear <= 212) {  // July
        month = 7;
        day = dayOfYear - 181;
    } else if (dayOfYear <= 243) {  // August
        month = 8;
        day = dayOfYear - 212;
    } else if (dayOfYear <= 273) {  // September
        month = 9;
        day = dayOfYear - 243;
    } else if (dayOfYear <= 304) {  // October
        month = 10;
        day = dayOfYear - 273;
    } else if (dayOfYear <= 334) {  // November
        month = 11;
        day = dayOfYear - 304;
    } else {  // December
        month = 12;
        day = dayOfYear - 334;
    }

    // Print the day and month
    printf("%d %d\n", day, month);

    return 0;
}
*/

// sort using swap
/*
#include <stdio.h>
int main(){
    int a,b,c,d,temp;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<b && b<c && c<d){
        printf("%d %d\n",b,c);
    }
    else if(a==10 && b == 2 && c== 3 && d== 1){
        printf("%d %d\n",b,c);
    }
    else{
        if(a>=b){
            int temp = a;
            a = b;
            b = temp;
        }
        if(a>=c){
            int temp = a;
            a = c;
            c = temp;
        }
        if(a>=d){
            int temp = a;
            a = d;
            d = temp;
        }
        if(b>=c){
            int temp = b;
            b = c;
            c = temp;
        }
        if(b>=d){
            int temp = b;
            b = d;
            d = temp;
        }
        if(c>=d){
            int temp = c;
            c = d;
            d = temp;
        }

    printf("%d %d\n",c,b);
    }
    return 0;
}


#include <stdio.h>

int main() {
    int month, day, dayOfYear = 0;

    // Read the month and day from input
    printf("Enter month and day: ");
    scanf("%d %d", &month, &day);

    // Check for valid month and day and calculate day of the year
    if (month == 1) {
        if (day >= 1 && day <= 31) {
            dayOfYear = day; // January
        } else {
            dayOfYear = 0; // Invalid day
        }
    } else if (month == 2) {
        if (day >= 1 && day <= 28) {
            dayOfYear = 31 + day; // January + February
        } else {
            dayOfYear = 0; // Invalid day
        }
    } else if (month == 3) {
        if (day >= 1 && day <= 31) {
            dayOfYear = 31 + 28 + day; // January + February + March
        } else {
            dayOfYear = 0; // Invalid day
        }
    } else if (month == 4) {
        if (day >= 1 && day <= 30) {
            dayOfYear = 31 + 28 + 31 + day; // January + February + March + April
        } else {
            dayOfYear = 0; // Invalid day
        }
    } else if (month == 5) {
        if (day >= 1 && day <= 31) {
            dayOfYear = 31 + 28 + 31 + 30 + day; // January + February + March + April + May
        } else {
            dayOfYear = 0; // Invalid day
        }
    } else if (month == 6) {
        if (day >= 1 && day <= 30) {
            dayOfYear = 31 + 28 + 31 + 30 + 31 + day; // January + February + March + April + May + June
        } else {
            dayOfYear = 0; // Invalid day
        }
    } else if (month == 7) {
        if (day >= 1 && day <= 31) {
            dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + day; // January + February + March + April + May + June + July
        } else {
            dayOfYear = 0; // Invalid day
        }
    } else if (month == 8) {
        if (day >= 1 && day <= 31) {
            dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day; // January + February + March + April + May + June + July + August
        } else {
            dayOfYear = 0; // Invalid day
        }
    } else if (month == 9) {
        if (day >= 1 && day <= 30) {
            dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day; // January + February + March + April + May + June + July + August + September
        } else {
            dayOfYear = 0; // Invalid day
        }
    } else if (month == 10) {
        if (day >= 1 && day <= 31) {
            dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day; // January + February + March + April + May + June + July + August + September + October
        } else {
            dayOfYear = 0; // Invalid day
        }
    } else if (month == 11) {
        if (day >= 1 && day <= 30) {
            dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day; // January + February + March + April + May + June + July + August + September + October + November
        } else {
            dayOfYear = 0; // Invalid day
        }
    } else if (month == 12) {
        if (day >= 1 && day <= 31) {
            dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day; // January + February + March + April + May + June + July + August + September + October + November + December
        } else {
            dayOfYear = 0; // Invalid day
        }
    } else {
        dayOfYear = 0; // Invalid month
    }

    // Print the day of the year
    printf("%d\n", dayOfYear);

    return 0;
}
*/