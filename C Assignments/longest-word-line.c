/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
char *strtoken(char *str){
    static char *input = NULL;
    if(str != NULL)
        input = str;
    if(input == NULL || *input == '\0')
        return NULL;
    while(*input == ' ' || *input == '\t' || *input == '\n')
        input++;
    if(*input == '\0')
        return NULL;
    char *p = input;
    while(*input != ' ' && *input != '\t' && *input != '\0' && *input != '\n')
        input++;
    if(*input != '\0'){
        *input = '\0';
        input++;
    }
    return p;
}
int readline(int fd, char *s, int size){
   char *p = s;
   while(((s - p) < size - 1) && (read(fd, s, 1) == 1)){
        if(*s == '\n')
            break;
        s++;
   }
   *s = '\0';
   return (s - p);
}
void readfile(char *filename, int size){
    int fd = 0, maxlength = 0;
    char buffer[size];
    char *long_line = NULL;
    fd = open(filename, O_RDONLY);
    if(fd == -1){
        perror("open failed\n");
        exit(1);
    }
    while(readline(fd, buffer, size)){
        char temp[size];
        strcpy(temp, buffer);
        char *token = strtoken(buffer);
        while(token != NULL){
            int len = strlen(token);
            if(len > maxlength){
                maxlength = len;
                if(long_line != NULL){
                    free(long_line);
                    long_line = malloc((strlen(temp) + 1) * sizeof(char));
                    strcpy(long_line, temp);
                }
            }
            token = strtoken(NULL);
        }
    }
    if(long_line != NULL){
        printf("%s\n", long_line);
        free(long_line);
    }
    else
        printf("invalid lines\n");
    
    close(fd);
}
int main(int argc, char *argv[])
{
    if(argc < 2){
        printf("give input\n");
        return 1;
    }
    readfile(argv[1], 1024);
    return 0;
*/

// By myself
// understanding of a question 
// read a file line by line extract words at whitespaces and check for maxlength word 
// print a line corresponds to max length word
// correct appraoch

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <fcntl.h>
// #define SIZE 1024
// char *strtoken(char *str) {
//     static char *input = NULL;
//     if (str != NULL)
//         input = str;
//     if (input == NULL || *input == '\0')
//         return NULL;

//     while (*input == ' ' || *input == '\t')
//         input++;

//     if (*input == '\0')
//         return NULL;

//     char *p = input;
//     while (*input != ' ' && *input != '\t' && *input != '\0')
//         input++;

//     if (*input != '\0') {
//         *input = '\0';
//         input++;
//     }
//     return p;
// }
// int readline(int fd, char *s, int size) {
//     char *p = s;
//     while (((s - p) < size - 1) && (read(fd, s, 1) == 1)) {
//         if (*s == '\n') {
//             s++;
//             break;
//         }
//         s++;
//     }
//     *s = '\0';
//     return (s - p);
// }
// void readfile(char *filename, int size) {
//     int fd = open(filename, O_RDONLY);
//     if (fd == -1) {
//         perror("open failed");
//         exit(1);
//     }

//     char buffer[size];
//     int maxlength = 0;
//     char *longest_line = NULL;

//     while (readline(fd, buffer, size)) {
//         char temp[size];
//         strcpy(temp, buffer);
//         char *token = strtoken(buffer);
//         while (token != NULL) {
//             int len = strlen(token);
//             if (len > maxlength) {
//                 maxlength = len;

//                 if (longest_line != NULL)
//                     free(longest_line);
//                 longest_line = malloc(strlen(temp) + 1);
//                 strcpy(longest_line, temp);
//             }
//             token = strtoken(NULL);
//         }
//     }
//     if (longest_line != NULL) {
//         printf("%s", longest_line);
//         free(longest_line);
//     } else {
//         printf("invalid lines\n");
//     }
//     close(fd);
// }
// int main(int argc, char *argv[]) {
//     char buffer[SIZE];
//     readfile(buffer, 1024);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define SIZE 1024
int readline(int fd, char *s, int size){
    char *p = s;
    while(((s - p) < size - 1) && read(fd, s, 1)){
        if(*s == '\n')
            break;
        s++;
    }
    *s = '\0';
    return (s - p);
}
int readfile(char *filename, int size){
    int fd = open(filename, O_RDONLY), i = 0;
    if(fd == -1){
        perror("open failed\n");
        exit(1);
    }
    int max_length = 0;
    char *longest_line = NULL;
    char buffer[SIZE];
    while(readline(fd, buffer, SIZE)){
        char temp[SIZE];
        strcpy(temp, buffer);
        
        char *token = strtok(buffer, " ");
        while(token != NULL){
            int len = strlen(token);
            if(len > max_length){
                max_length = len;

                if(longest_line != NULL)
                    free(longest_line);
                longest_line = malloc((strlen(temp) + 1) * sizeof(temp));
                strcpy(longest_line, temp);
            }
            token = strtok(NULL, " ");
        }
    }
    if(longest_line != NULL){
        printf("%s\n", longest_line);
        free(longest_line);
    }
    else{
        printf("invalid lines\n");
        exit(1);
    }
    close(fd);
}
int main(void)
{
    char buffer[SIZE];
    scanf("%s", buffer);
    readfile(buffer, 1024);
    return 0;
}



