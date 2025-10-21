#include <stdio.h>

// Function to find GCD using Euclid's Algorithm
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a; // last non-zero a is GCD
}

int main()
{
    int numerator, denominator;

    // Input fraction
    printf("Enter numerator: ");
    scanf("%d", &numerator);
    printf("Enter denominator: ");
    scanf("%d", &denominator);

    // Find GCD
    int g = gcd(numerator, denominator);

    // Reduce fraction
    numerator /= g;
    denominator /= g;

    // Print lowest form
    printf("Lowest form = %d/%d\n", numerator, denominator);

    return 0;
}
