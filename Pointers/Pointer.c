
// #include <stdio.h>
// int main(void)
// {
//     int a = 49;
//     int *ptr = &a;
//     printf("Address of pointer to a: %p\n", &ptr);
//     printf("Value of pointer to a: %d\n", *ptr);
//     printf("%p\n", ptr);
//     printf("address of a : %p\n", &a);
//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {   
//     int *p, a[4];
//     p = &a[1];
//     p[2] = 20;
//     p[-1] = 10;
//     // p[i] --> *(p + i)
//     printf("%d\n", *p);
//     return 0;

// }

// #include <stdio.h>
// int main(void)
// {
//     char a = '3';
//     char *ptra = &a;
//     printf("%d\n", ptra);
//     ptra++;
//     printf("%d\n", ptra-2); // added 4 byte at last 

//     return 0;

// }
// // Multi Cursor Functionality in VS Code 

// #include <stdio.h>
// int main(void)
// {
//     int arr[] = {1, 2 ,3, 4 ,5 ,6};
//     printf("Value at this index is : %d\n", *(arr)); // address of an element at 0th index
//     printf("Value at this index is : %d\n", *(&arr[0])); // Address of a element at 0th index

//     printf("Value at this index is : %d\n", *(&arr[1]));
//     printf("Value at this index is : %d\n", *(arr + 1));
//     return 0;
// }
// //Seems to be working 

// algorithm of smallest divisor of an integer 

// #include <stdio.h>
// int main(void)
// {
//     int num, c = 3;
//     scanf("%d", &num);
//     if(num % 2 == 0){
//         printf("divisor: %d\n", 2);
//     }
//     else{
//         while(num % c != 0){
//             c += 2;
//         }
//         printf("divisor: %d\n", c);
//     }
//     printf("\n");
//     return 0;
// }


// // Smallest Prime factor of large number 
// #include <stdio.h>
// int Smallest_Prime_Fact(int n){
//     int isPrime = 1;
    
// }
// int main(void)
// {
//     // Prime Factor 

//     return 0;
// }

// // Character Pointers in C 
// #include <stdio.h>
// int main(void)
// {
//     //char amessage[] = "Hello World";
//     char *pmessage = "Hello world";
//     printf("%p\n", &pmessage);
//     return 0;
// }

// #include <stdio.h>
// #define SIZE 10
// void Strcpy(char *s, char *t){
//     // Version 1:
//     //while((*s = *t) != '\0'){
//       //  s++;
//        // t++;
//     //}
//     // Vesrsion 2:

//     while((*s++ = *t++) != '\0')
//         ;
    
// }
// int main(void)
// {
//     char s[SIZE];
//     char *t = "sumit";
//     Strcpy(s, t);
//     printf("%s\n", s);
//     return 0;
// }

// String ConCatenation 
#include <stdio.h>
#define SIZE 1000
// Version 1:
/*
void Strcat(char *s, char *t){
    int i, j;
    i = j = 0;
    while(s[i] != '\0') // find end of s
        i++;
    while((s[i++] = t[j++]) != '\0') // copy t
        ;
}
*/
// // Version 2:
// void Strcat(char *s, char *t){
//     // find end of s
//     while(*s != '\0')
//         *s++;
//     while((*s++ = *t++) != '\0')
//         ;
// }
// int main(void)
// {
//     char s[SIZE] = "sumit";
//     char t[] = " desai";
//     Strcat(s, t);
//     printf("%s\n", s);
//     return 0;
// }

// strend
