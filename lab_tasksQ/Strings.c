/*
Write a function that locates a given string (b) as a substring in another string (a),
and returns a pointer to the first occurrence of b, in a.
char *strstr(char *a, char *b);

// */

// #include <stdio.h>
// char *Strstr(char *a, char *b){
//     for( ; *a != '\0'; a++){ // Two Pointer technique
//         char *start = a; // start pointer ->  To Traverse through string a
//         char *p = b; // p pointer -> To Traverse through string b
//         while(*start == *p && *p != '\0'){ // abhijit is here
//             start++;                       // s->     s == p
//             p++;

//             if(*p == '\0'){
//                 return a;
//             }
//         }

//     }
//     return NULL;
// }
// int main(void)
// {
//     char *a = "abhijit is here";
//     char *b = "is";
//     char *result = Strstr(a, b);
//     if(result){
//         printf("%s\n", result);
//     }
//     else{
//         printf("substring not found\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// char *Strstr(char *a, char *b){
//     while(*a != '\0'){ // Null Byte
//         char *start = a;
//         char *p = b;

//         while(*start ==  *p && *p  != 'p'){
//             start++;
//             p++;

//             if( *p == '\0'){
//                 return a;

//             }
//         }
//         a++;
//     }
//     return NULL;
// }
// int main(void)
// {
//     char *a  = "sumit";
//     char *b  = "it";
//     char *result = Strstr(a, b);
//     if(result){
//         printf("%s\n", result);
//     }
//     else{
//         printf("substring not found\n");
//     }
//     return 0;
// }

/*
Write a function that finds the maximum length substring of a given string(b) in another
string (a) and returns a pointer to the first occurrence of the maximum length substring of
b, in a.
char *strmaxstr(char *a, char *b);
e.g. if  a is "abcee abcdm bdefg" and a is "abcdf", then the maximum length substring of b
that occurs in a , is "abcd" (as part of "abcdm" ) and hence a pointer to "a" in "abcdm.."
of a is returned.
*/

// trial
// // Logic
// #include <stdio.h>
// char *strmaxstr(char *a, char *b){
//     int max = 0;
//     char *result = NULL;
//     while(*a != '\0'){
//         char *start = a; // Two pointers have to be considered 
//         char *p = b;
//         int count = 0;
//         while((*start == *p) && (*p != '\0') && (*start != '\0')){
//             start++;
//             p++;
//             count++;
//         }
//         if(count > max){
//             max = count;
//             result = a;
//         }
//         a++;
//     }
//     return result;
// }
// int main(void)
// {
//     char *a = "abcee abcdm bdefg";
//     char *b = "abcdf";
//     printf("%s\n", strmaxstr(a, b));
//     return 0;
// }

// lexicographical order
/*
Write a function which compares two strings based on dictionary ordering,
ignoring the case, and returns -1 if a is smaller than b, 0 if they are equal,
and +1 if a is greater than b.
ignoring the case??
*/
/*
// #include <stdio.h>
// #include <string.h>
// // lexicographical string comparison
// int strcomp(char *a, char *b){
//    while((*a != '\0') && (*b != '\0')){
//     if((*a) > (*b)){
//         return 1;
//     }
//     else if((*a) < (*b)){
//         return -1;
//     }
//         a++;
//         b++;
//    }
//    return 0;
// }
int main(void)
{
    char *a = "aaabc";
    char *b = "aaabc";
    printf("%d\n", strcomp(a, b)); 
    
    return 0;
}
*/

// ------------------------------------------ PSPP ------------------------------------------------------
// 1st Question 

// #include <stdio.h>
// #include <stdlib.h>

// char *inttostring(int x){
//     char *result = (char *)malloc(12 * sizeof(char));
//     // convert int to string using sprintf
//     sprintf(result, "%d", x);
//     return result;
// }
// int main(void)
// {
//     char *p = inttostring(100);
//     printf("%s\n", p);
//     free(p);
//     return 0;
// }

// Typecasting 
/*
This is a similar to the C library atoi(). Note - when you use scanf("%d", ... )
then scanf does a job similar to this function.
Write a function stringtoint() with the given prototype. 
The function converts the sequence of digits (found until NUL or a non-digit character) 
and returns the integer equivalent of it.
Function returns 0 if there is no digit character in the given string. 
Handle negative numbers as well.

long stringtoint(char *str);

*/
// string to int
// not efficient code 

// #include <stdio.h>
// #include <math.h>

// #define SIZE 16

// long stringtoint(char *str){
//     int i = 0, nums[SIZE];
//     long ans = 0;

//     while(str[i] >= '0' && str[i] <= '9'){
//         nums[i] = str[i] - '0';
//         i++;
//     }
//     int pw = i - 1;
//     for(int j = 0; j < i; j++){
//        ans  += nums[j] * pow(10,(double) pw);
//        pw--;
//     }
//     return ans + 1;
// }
// int main(void)
// {
//     char s[8] = "964";
//     //stringtoint(s);
//     printf("%ld\n", stringtoint(s));
//     return 0;
// }

// more optimal solution 
/*
#include <stdio.h>
#include <stdbool.h>

long stringtoint(char *str){
    int i = 0;
    bool is_negative = false;
    long ans = 0;

    if(str[i] == '-'){
        is_negative = true;
        i++;
    }
    // string parsing 
    while(str[i] >= '0' && str[i] <= '9'){
        ans = ans * 10 + (str[i] - '0');
        i++;
    }
    // if it is not a digit or sign
    if(i == (is_negative ? 1 : 0)){
        return 0;
    }
    
    return is_negative ? ((-1) * ans) : ans;
}
int main(void)
{
    char *str = "-dd343";
    printf("%ld\n", stringtoint(str));
    return 0;
}
*/
// 3rd question 
  
// #include <stdio.h>

// char *stranybyte(char *s, char *accept){
//     // traverse through a string 
//     while(*s != '\0'){
//         const char *p = accept;
//         while(*p != '\0'){
//             if(*s == *p){
//                 return s;
//             }
//             p++;
//         }
//         s++;
//     }
//     return NULL;
// }
// int main(void)
// {
//     printf("%s\n", stranybyte("abhijit","xiy") ? stranybyte("abhijit","xiy"): "");
//     return 0;
// }


// Q. 5)

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h> // to use strlen and strcpy

// char *strdupl(const char *s){
//     char *new_str = (char *)malloc((strlen(s) + 1) * sizeof(char)); // +1 for null byte 
//     strcpy(new_str, s);

//     return new_str;
// }
// int main(void)
// {
//     char *str = "hello", *p;
//     p = strdupl(str); 
//     printf("%s\n", p);
//     free(p);
//     return 0;
// }

// #include <stdio.h>
// char *strconcat(char *dest, const char *src){
//     int i = 0 , j = 0;
//     while(dest[i] != '\0'){
//         i++;
//     }
//     while((dest[i++] = src[j++]) != '\0'){
//         ;
//     }
//     return dest;
// }
// int main(void)
// {
//     char b[16] = "abhijit", a[16]="coep";
//     printf("%s\n", strconcat(b, a));

//     return 0;
// }
  
// 7th question 

// #include <stdio.h>

// char *strchar(char *str, char c){
//     // traverse through a string 
    
//     while(*str != '\0'){
//         if(*str == c){
//             return str;
//         }
//         str++;
//     }
//     if(c == '\0'){
//         return str;
//     }
//     return NULL;
// }
// int main(void)
// {
//     printf("%s\n", strchar("abhijit", '\0'));
//     return 0;
// }


// great desire to learn rubik's cube I want to learn it in any way possible
