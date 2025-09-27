#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// void swap(char *str, int f, int s) {
//     char temp = str[f];
//     str[f] = str[s];
//     str[s] = temp;
// }

// void bubblesort(char *str) {
//     int swapped;
//     int len = strlen(str);
//     for (int i = 0; i < len; i++) {
//         swapped = 0;
//         for (int j = 1; j < len - i; j++) {
//             if (str[j - 1] > str[j]) {
//                 swap(str, j - 1, j);
//                 swapped = 1;
//             }
//         }
//         if (!swapped)
//             break;
//     }
// }
int charCompare(const void *a, const void *b){
    return (*(char *)a - *(char *)b);
}
int isAnagram(char *s, char *t) {
    qsort(s, strlen(s), sizeof(char), charCompare);
    qsort(t, strlen(t), sizeof(char), charCompare);
    return strcmp(s, t) == 0;
}
int main(void) {
    char s[] = "anagram";
    char t[] = "nagaram";

    int flag = isAnagram(s, t);
    if (flag == 1)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}

// anagrams check
// code to check if the word is anagram or not 
// anagram nagaram 
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define SIZE 1024
int charCompare(const void *a, const void *b){
    return  (*(char *)a - *(char *)b);
}
int isAnagram(char *s, char *t){
    qsort(s, strlen(s), sizeof(char), charCompare);
    qsort(t, strlen(t), sizeof(char), charCompare);

    return strcmp(s, t) == 0;
}
int main(void)
{
    char s[] = "anagram";
    char t[] = "nagaram";
    int flag = isAnagram(s, t);
    if(flag == 1)
        printf("yes\n");
    else   
        printf("no\n");    
    return 0;
}
*/
#include <stdio.h>
int main(void)
{
    
    return 0;
}
