// Solve the basic fundamental problems on a string functions
// HomeWork Problems
//1) 
// locate substring in a given string
// #include <stdio.h>
// char *strstr(char *a, char *b){
//     char *result = NULL;
//     while(*a != '\0'){
//         char *start = a;
//         char *p = b;
//         while(*start == *p && (*p != '\0')){
//             result = (char *) a;
//             p++;
//         }
//         a++;
//     }
//     return result;
// }
// int main(void)
// {
//     char *a = "abhijit is here";
//     char *b = "here";
//     char *p = strstr(a, b);
//     if(p == NULL)
//         printf("not found\n");
//     else 
//         printf("%s\n", p); 
//     return 0;
// }

// 2) 
// max length substring of a given string(b) in another string(a)
// How can I solve this problem
/*
#include <stdio.h>
char *strmaxstr(char *a, char *b){
    int max = 0, count;
    char *result  = NULL;
    while(*a != '\0'){
        char *start = a;
        char *p = b;
        // counter 
        count = 0;
        while((*start == *p) && (*start != '\0') && (*p != '\0')){
            start++;
            p++;
            count++;
        }
        if(max < count){
            max = count;
            result = (char *)a;
        }
        a++;
    }
    return result;
}
int main(void)
{
    char *a = "abcee abcdm bdefg";
    char *b = "abcdf";
    printf("%s\n", strmaxstr(a, b));
    return 0;
}
*/
