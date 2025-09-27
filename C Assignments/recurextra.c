// Homework problems on recursion
// Write recursive versions of the following functions.
// char *strchr(const char *s, int c)
/*
#include <stdio.h>
#include <string.h>
char *a = NULL;
char *strchar(const char *s, char ch){
    // using iterations
    while(*s != '\0'){
        const char *start = s;
        if(*start == ch){
            a = (char *)s;
            return a;
        }
        if(ch == '\0'){
            return (char *)s;
        }
        s++;
    }
    return a;
}
int main(void)
{
    char *str = "abhijit";
    printf("%s\n", strchar(str, 'i'));
    return 0;
}

*/
//iteration 
// #include <stdio.h>
// int num_str_to_num(char *str){
//     int i = 0, num = 0;
//     while(str[i] != '\0'){
//         if(str[i] >= '0' && str[i] <= '9'){
//             num = (10 * num) + (str[i] - '0');
//         }
//         i++;
//     }
//     if(str[0] == '-'){
//         num = num * (-1);
//     }
//     return num;
// }
// int main(void)
// {
//     char *str = "sumit007";
//     printf("%d\n", num_str_to_num(str));
//     return 0;
// }

//recursion 
// #include <stdio.h>
// int num = 0, neg = 0;
// int num_str_to_num(char *str){
//     if(*str != '\0'){ // terminating condn (base case)
//         if(*str == '-')
//             neg = 1;
//         if(*str >= '0' && *str <= '9'){
//             num = (num * 10) + (*str - '0');
//         }
//         return num_str_to_num(++str); // recursive call to a function 
//     }
//     if(neg == 1)
//         return (-1) * num;
//     else    
//         return num;
// }
// int main(void)
// {
//     char *str = "-100";
//     printf("%d\n", num_str_to_num(str));
//     return 0;
// }

// multiply two numbers
/*
#include <stdio.h>
int mult(int a, int b)
{
    if(b == 0)
        return 0;
    if(b > 0)
        return a + mult(a, b - 1);
    
    return -a + mult(a, b + 1);
}
int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", mult(x, y));
    return 0;
}
*/

// strcompare 
// #include <stdio.h>
// #include <string.h>
// int strcompare(char *a, char *b){
//     while(*a != '\0'){
//         while(*b != '\0'){
//             if(*a > *b)
//                 return 1;
//             else if(*a < *b)
//                 return -1;

//             b++;
//         }
//         a++;
//     }
//     return 0;
// }
// int main(void)
// {
//     char *a = "ameya";
//     char *b = "anay";
//     printf("%d\n", strcompare(a, b));
//     return 0;
// }

// #include <stdio.h>

// int strcompare(char *a, char *b){
//     if(*a != '\0'){
//         if(*b != '\0'){
//             if(*a > *b)
//                 return 1;
//             else if(*a < *b)
//                 return -1; 
//             return strcompare(++a, ++b);
//         }
//     }
//     return 0;
// }
// int main(void)
// {
//     char *a = "anay";
//     char *b = "ameya";
//     printf("%d\n", strcompare(a, b));
//     return 0;
// }

// //General Program to Convert Decimal Number System To Another
// #include <stdio.h>
// #include <stdlib.h>
// #define SIZE 1000

// int main(void)
// {
//     int num, q, r, nums[SIZE];
//     scanf("%d", &num);
//     q = num;
//     int len = 0;
//     while(q != 0){
//         r = q % 2;
//         nums[len] = r;
//         q /= 2;
//         len++;
//     }
//     // OUTPUT
//     char *binary = (char *) malloc((len + 1) * sizeof(char));
//     binary[len] = '\0';
//     for(int i = len - 1; i >= 0; i--){
//         binary[(len - 1) - i] = (nums[i] + '0');
//     }
//     printf("%s\n", binary);
//     return 0;
// }

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to return the binary equivalent of a decimal number
char* decimalToBinary(int num) {
    // Handle the base case
    if (num == 0) {
        char *binary = (char *)malloc(2 * sizeof(char));
        strcpy(binary, "0");
        return binary;
    }
    if (num == 1) {
        char *binary = (char *)malloc(2 * sizeof(char));
        strcpy(binary, "1");
        return binary;
    }

    // Recursive case
    char *prevBinary = decimalToBinary(num / 2); 
    int len = strlen(prevBinary);             
    char *binary = (char *)malloc((len + 2) * sizeof(char));

    strcpy(binary, prevBinary);
    char bit = (num % 2) + '0';
    strncat(binary, &bit, 1);  
    binary[len + 1] = '\0';    

    free(prevBinary); 
    return binary;
}

int main(void) {
    int num;
    scanf("%d", &num);

    if (num < 0) {
        printf("not for negative\n");
        return 0;
    }

    char *binary = decimalToBinary(num);
    printf("%s\n", binary);
    free(binary); 

    return 0;
}
*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char *decimal_to_binary(int n){
//     if(n == 0){
//         char *binary = (char *) malloc(2 * sizeof(char));
//         strcpy(binary, "0");
//         return binary;
//     }
//     if(n == 1){
//         char *binary = (char *) malloc(2 * sizeof(char));
//         strcpy(binary, "1");
//         return binary;
//     }
//     char *prevBinary = decimal_to_binary(n / 2);
//     int len = strlen(prevBinary);
//     char *binary = (char *) malloc((len + 2) * sizeof(char));
//     strcpy(binary, prevBinary);
//     char bit = (n % 2) + '0';
//     strncat(binary, &bit, 1);
//     binary[len + 1] = '\0';

//     free(prevBinary);
//     return binary;
// }
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     char *ans = decimal_to_binary(n);
//     printf("%s\n", ans);
//     return 0;
// }

// // negative number
// /**/
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void invertbits(char *Binary){
//     for(int i = 0; Binary[i] != '\0'; i++){
//         Binary[i] = (Binary[i] == '0') ? '1' : '0';
//     }
// }
// void addOneToBinary(char *binary) {
//     int carry = 1; // Start with carry = 1 (to add 1)
//     for (int i = strlen(binary) - 1; i >= 0; i--) {
//         if (binary[i] == '1' && carry == 1) {
//             binary[i] = '0'; // Overflow at this bit
//         } else if (carry == 1) {
//             binary[i] = '1'; // Add 1 at this bit
//             carry = 0;       // Clear carry
//         }
//     }
// }
// char *decimal_to_postive_binary(int n){
//     if(n == 0){
//         char *Binary = (char *) malloc(2 * sizeof(char));
//         strcpy(Binary, "0");
//         return Binary;
//     }
//     if(n == 1){
//         char *Binary = (char *) malloc(2 * sizeof(char));
//         strcpy(Binary, "1");
//         return Binary;
//     }
//     char *prevBinary = decimal_to_postive_binary(n / 2);
//     int len = strlen(prevBinary);
//     char *Binary = (char *) malloc((len + 2) * sizeof(char));
//     strcpy(Binary, prevBinary);
//     char bit = (n % 2) + '0';
//     strncat(Binary, &bit, 1);
//     Binary[len + 1] = '\0';
//     free(prevBinary);
//     return Binary;
// }
// char *decimal_to_binary(int n){
//     if(n >= 0)
//         return decimal_to_binary(n);

//     int absn = -n;
//     char *prevbinary = decimal_to_postive_binary(absn);
//     invertbits(prevbinary);
//     addOneToBinary(prevbinary);

//     return prevbinary;
// }
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     char *binary = decimal_to_binary(n);
//     printf("%s\n", binary);
//     free(binary);
//     return 0;
// }

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertBinary(char *binary) {
    for (int i = 0; binary[i] != '\0'; i++) {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }
}
void addOneToBinary(char *binary) {
    int carry = 1; // Start with carry = 1 (to add 1)
    for (int i = strlen(binary) - 1; i >= 0; i--) {
        if (binary[i] == '1' && carry == 1) {
            binary[i] = '0'; // Overflow at this bit
        } else if (carry == 1) {
            binary[i] = '1'; // Add 1 at this bit
            carry = 0;       // Clear carry
        }
    }
}
char* decimalToBinaryPositive(int num) {
    if (num == 0) {
        char *binary = (char *)malloc(2 * sizeof(char));
        strcpy(binary, "0");
        return binary;
    }
    if (num == 1) {
        char *binary = (char *)malloc(2 * sizeof(char));
        strcpy(binary, "1");
        return binary;
    }
    char *prevBinary = decimalToBinaryPositive(num / 2);
    int len = strlen(prevBinary);
    char *binary = (char *)malloc((len + 2) * sizeof(char));
    strcpy(binary, prevBinary);
    char bit = (num % 2) + '0';
    strncat(binary, &bit, 1);
    binary[len + 1] = '\0';
    free(prevBinary);
    return binary;
}
char* decimalToBinary(int num) {
    if (num >= 0) {
        return decimalToBinaryPositive(num); // Direct conversion for positive numbers
    }

    // Handle negative numbers (Two's complement)
    int absNum = -num; // Get the absolute value
    char *positiveBinary = decimalToBinaryPositive(absNum); // Convert to binary
    invertBinary(positiveBinary); // Invert binary digits (1's complement)
    addOneToBinary(positiveBinary); // Add 1 to get two's complement
    return positiveBinary;
}

int main(void) {
    int num;
    scanf("%d", &num);

    char *binary = decimalToBinary(num);
    printf("Binary equivalent: %s\n", binary);
    free(binary); // Free allocated memory
    return 0;
}
*/

// return the binary equivalent of a decimal number as binary in the form of a string of 0's and 1's

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// void invertbits(char *binary){
//     for(int i = 0; binary[i] != '\0'; i++){
//         binary[i] = (binary[i] == '0') ? '1' : '0';
//     }
// }
// void addOneToBinary(char *binary){
//     int carry = 1;
//     for(int i = strlen(binary) - 1; i >= 0; i--){
//         if(binary[i] == '1' && carry == 1)
//             binary[i] = '0';
//         else if(carry == 1){
//             binary[i] = '1';
//             carry = 0;
//         }
//     }
// }
// char *decimal_to_binary_positive(int n){
//     if(n == 0){
//         char *binary = (char *) malloc(2 * sizeof(char));
//         strcpy(binary, "0");
//         return binary;
//     }
//     if(n == 1){
//         char *binary = (char *) malloc(2 * sizeof(char));
//         strcpy(binary, "1");
//         return binary;
//     }
//     char *prevbinary = decimal_to_binary_positive(n / 2);
//     int len = strlen(prevbinary);
//     char *binary = (char *) malloc((len + 2) * sizeof(char));
//     strcpy(binary, prevbinary);
//     char bit = (n % 2) + '0';
//     strncat(binary, &bit, 1);
//     binary[len + 1] = '\0';
//     free(prevbinary);
//     return binary;
// }
// char *decimal_to_binary(int n){
//     if(n > 0)
//         return decimal_to_binary_positive(n);
    
//     int absn = -n;
//     char *prevbinary = decimal_to_binary_positive(absn);
//     invertbits(prevbinary);
//     addOneToBinary(prevbinary);

//     return prevbinary;
// }
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     char *binary = decimal_to_binary(n);
//     printf("%s\n", binary);
//     free(binary);
//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void binary_recursive(unsigned int num, int len, char *binary, int i) {
//     if (len == 0) {
//         return; 
//     }
//     binary_recursive(num / 2, len - 1, binary, i - 1); 
//     binary[i] = (num % 2) + '0';
// }

// char *decimal_to_binary(int n) {
//     int len = 8; 
//     char *binary = (char *)malloc((len + 1) * sizeof(char)); 
//     if (binary == NULL) {
//         printf("Memory allocation failed.\n");
//         exit(1);
//     }
//     binary[len] = '\0'; // Null-terminate the string

//     unsigned int num = (unsigned int)n; // Convert to unsigned for two's complement
//     binary_recursive(num, len, binary, len - 1); // Call the recursive helper

//     return binary;
// }

// int main(void) {
//     int n;
//     scanf("%d", &n);

//     char *binary = decimal_to_binary(n);
//     printf("%s\n", binary);

//     free(binary); 
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// void binary_recursive(unsigned int n, int len, char *binary, int i){
//     if(len == 0)
//         return;
//     binary_recursive(n / 2, len -1, binary, i - 1);
//     binary[i] = (n % 2) + '0';
// }
// char *decimal_to_binary(int n){
//     int len = 8;
//     char *binary = (char *) malloc((len + 1) * sizeof(char));
//     if(binary == NULL){
//         printf("allocation failed\n");
//         exit(1);
//     }
//     binary[len] = '\0';
//     unsigned int num = (unsigned int) n;
//     binary_recursive(num, len, binary, len - 1);

//     return binary;
// }
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     char *binary = decimal_to_binary(n);
//     printf("%s\n", binary);
//     free(binary);
//     return 0;
// }

/*
void print_binary(int n);
 print all binary numbers of a given length;
 e.g. if n = 3, then program prints
 000
 001
 010
 011
 ...
 ...upto
 111

*/
// with iterations
/* 
#include <stdio.h>
#include <stdlib.h>
#define SIZE 16

int pawr(int x, int n){
    int pw = 1;
    for(int i = 1; i <= n; i++){
        pw *= x;
    }
    return pw;
}
void print_binary(int n){
    int num = 0, i = 0;
    while(i < n){
        num += pawr(2, i);
        i++;
    }  
    int j = 0, nums[SIZE], r = 0, q = 0;
    while(j <= num){
        q = j;
        if(q == 0){
            printf("%d", 0);
        }
        int len = 0;
        while(q != 0){
            r = q % 2;
            nums[len] = r;
            q /= 2;
            len++;
        }
        // OUTPUT
        char *binary = (char *) malloc((len + 1) * sizeof(char));
        binary[len] = '\0';
        for(int i = len - 1; i >= 0; i--){
            binary[(len - 1) - i] = (nums[i] + '0');
        }
        printf("%s\n", binary);
        j++;
    }
}
int main(void)
{
    int n;
    scanf("%d", &n);
    print_binary(n);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#define SIZE 16

int pawr(int x, int n){
    int pw = 1;
    for(int i = 1; i <= n; i++){
        pw *= x;
    }
    return pw;
}
int num = 0; 
int printbinary(int n){ // helper function 
    if(n == 0)
        return num;
    num += pawr(2, n - 1);
    printbinary(n - 1);
    
    return num;
}
void print_binary(int n){
    int num = printbinary(n);
    int j = 0, nums[SIZE], r = 0, q = 0;
    while(j <= num){
        q = j;
        if(q == 0){
            printf("%d", 0);
        }
        int len = 0;
        while(q != 0){
            r = q % 2;
            nums[len] = r;
            q /= 2;
            len++;
        }
        // OUTPUT
        char *binary = (char *) malloc((len + 1) * sizeof(char));
        binary[len] = '\0';
        for(int i = len - 1; i >= 0; i--){
            binary[(len - 1) - i] = (nums[i] + '0');
        }
        printf("%s\n", binary);
        j++;
    }
}
int main(void)
{
    int n;
    scanf("%d", &n);
    print_binary(n);
    return 0;
}
*/
// permutation generation // recursion (level up)
/*
#include <stdio.h>
#define SIZE 16
typedef char *String;
void swap(String *first, String *second){
    String temp = *first;
    *first = *second;
    *second = temp;
}
void print_permutations(String str[], int len){
    static int idx =  -1; // static keyword (to hold value in a idx)
    idx = idx + 1;
    if(idx == len){
        for(int i = 0; i < len; i++){
            printf("%s ", str[i]);
        }
        printf("\n");
        idx = idx - 1;
        return;
    }
    for(int i = idx; i < len; i++){
        swap(&str[idx], &str[i]);
        print_permutations(str, len);
        swap(&str[idx], &str[i]);
        
    }
    idx = idx - 1;
}
int main(void)
{
    int len = 3;
    String str[] = {"xx", "yy", "zz"};
    print_permutations(str, len);
    return 0;
}
*/
// given an array of strings, print all possible permutations of those strings. 
//E.g. if str = {"xx", "yy", "zz"} and obviously len = 3, then function prints   
/*
                                  xx yy zz
                xx - -               yy - -                   zz - -
        xx yy -   xx zz -    yy xx -     yy zz -       zz xx -    zz yy -
        xx yy zz  xx zz yy   yy xx zz    yy zz xx      zz xx yy   zz yy xx

// */
// #include <stdio.h>
// void swap(char *first[], char *second[]){
//     char *temp = *first;
//     *first = *second;
//     *second = temp;
// }
// void print_permutations(char *str[], int len){
//     static int idx = -1;
//     idx = idx + 1;
//     if(idx == len){
//         for(int i = 0; i < len; i++){
//             printf("%s ", str[i]);
//         }
//         printf("\n");
//         idx = idx - 1;
//         return;
//     }

//     for(int i = idx; i < len; i++){
//         swap(&str[idx], &str[i]);
//         print_permutations(str, len);
//         swap(&str[idx], &str[i]); // backtrack
//     }
//     idx = idx -  1; 
// }
// int main(void)
// {
//     char *str[] = {"xx", "yy", "zz"};
//     int len = 3;
//     print_permutations(str, len);
//     return 0;
// }

// char *strchar(char *str, char ch);  
#include <stdio.h>
char *a = NULL;
char *strchar(char *str, char ch){
    if(*str == '\0')
        return NULL;
    else if(*str == ch){
        a = (char *) str;
        return a;
    }
    else 
        return strchar(++str, ch);
}
int main(void)
{
    char *str = "sumit";
    printf("%s\n", strchar(str, 'u')); 
    return 0;
}
