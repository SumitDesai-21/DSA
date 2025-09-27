/*
 Write a C program that reads an integer n, and then prints the sum of first n elements of the odd number series.
 The odd number series is 1, 3, 5, 7, 9, 11, ....
 the sum of first 3 elements is 1 + 3 + 5 = 9
 the sum of first 5 elements is 1 + 3 + 5 +7 + 9 = 25
*/
/*
#include <stdio.h>
int main(){

    int n,sum; 
    scanf("%d",&n);

    sum = n*n;  // sum of odd numbers till n number
    printf("%d\n",sum);

    return 0;
}
*/

// Write a C program which : reads two numbers from end-user (using scanf), 
//then adds them, and then prints their result.
/*
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);

    printf("%d\n",a+b);

    return 0;
}
*/
/*
#include <stdio.h>
#include <math.h>  // To use the sqrt() function

int main() {
    float a, b, c, discriminant, root1, root2;

    // Asking for user input
    scanf("%f %f %f", &a, &b, &c);

    // Handle cases when a = 0
    if (a == 0) {
        if (b == 0) {
            // If both a = 0 and b = 0, print "can't find roots"
            printf("can't find roots\n");
        } else {
            // If a = 0 and b != 0 (linear equation bx + c = 0)
            root1 = -c / b;
            if (c == 0) {
                printf("can't find roots\n");
            } else {
                printf("%.2f\n", root1);
            }
        }
    } else {
        // For a ≠ 0, we have a quadratic equation
        discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            // Two real and distinct roots
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("%.2f\n%.2f\n", root1, root2);
        } else if (discriminant == 0) {
            // One real root (but print it twice)
            root1 = -b / (2 * a);
            printf("%.2f\n%.2f\n", root1, root1);
        } else {
            // Discriminant is negative, so no real roots
            printf("can't find roots\n");
        }
    }

    return 0;
}
*/