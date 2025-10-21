// 2) Filename : palindrome.c
/*
Write a C program which carries out the following:
Reads a file, and prints all palindrome words in the file. 
A word is considered to be separated only on whitespace. 
Each palindrome should be printed on a new line.
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#define SIZE 1024
int palindrome(char str[]){
    int n = strlen(str);
    int start = 0;
    int end = n - 1;
    while(start < end){
        if(str[start] != str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}
int main(int argc, char *argv[])
{
    int fd = 0, len = 0;
    long unsigned bytesread = 0;
    char ch[SIZE];
    char *lines[SIZE];
    fd = open(argv[1], O_RDONLY);
    if(fd == -1){
        printf("open failed\n");
        exit(1);
    }
    bytesread = read(fd, ch, sizeof(ch) - 1);
    if(bytesread < 0){
        perror("error\n");
        return 1;
    }
    ch[bytesread] = '\0';
    char *token = strtok(ch, " ");
    while(token != NULL){
        lines[len] = malloc((strlen(token) + 1) * sizeof(char));
        if(lines[len] == NULL){
            printf("allocation failed\n");
            return 1;
        }
        strcpy(lines[len], token);
        printf("%s ", lines[len]);
        len++;
        token = strtok(NULL, " ");
    }
    printf("----palindrome-----\n");
    for(int i = 0; i < len; i++){
        if(palindrome(lines[i]) == 1){
            printf("%s\n", lines[i]);
        }
    }
    for(int i = 0; i < len; i++){
        free(lines[i]);
    }
    close(fd);
    return 0;
}
*/
// Palindrome Problem
/*
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#define SIZE 1024
int palinrome(char *str){
    int n = strlen(str);
    int start  = 0;
    int end = n - 1;
    while(start < end){
        if(str[start] != str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}
int main(int argc, char *argv[])
{
    int fd = 0, len = 0;
    long unsigned int readbytes = 0;
    char buffer[SIZE], *lines[32];
    fd = open(argv[1], O_RDONLY);
    if(fd == -1){
        perror("open failed\n");
        return 1;
    }
    readbytes = read(fd, buffer, sizeof(buffer) - 1);
    if(readbytes < 0){
        perror("error\n");
        return 1;
    }
    buffer[readbytes] = '\0';
    char *token = strtok(buffer, "  \t \n");
    while(token != NULL && len < 32){
        lines[len] = malloc((strlen(token) + 1) * sizeof(char));
        strcpy(lines[len], token);
        len++;
        token = strtok(NULL, "  \t \n");
    }
    for(int i = 0; i < len; i++){
        printf("%s\n", lines[i]);
    }
    printf("----------palindrome----------\n");
    for(int i = 0; i < len; i++){
        if(palinrome(lines[i]) == 1){
            printf("%s\n", lines[i]);
        }
    }
    for(int i = 0; i < len; i++){
        free(lines[i]);
    }
    close(fd);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // read
#include <fcntl.h> // open
#define SIZE 10000
char *lower(char str[]){
    char *s = malloc((strlen(str) + 1) * sizeof(char));
    if(!s){
        printf("allocation failed\n");
        exit(1);
    }
    strcpy(s, str);
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + 32;
        }
    }
    return s;
}
char *strtoken(char *str) {
    static char *input = NULL;
    if (str != NULL) 
        input = str;
    if (input == NULL || *input == '\0') 
        return NULL;
    while (*input == ' ' || *input == '\t' || *input == '\n')
        input++;
    if (*input == '\0') 
        return NULL;

    char *p = input; 

    while (*input != ' ' && *input != '\t' && *input != '\n' && *input != '\0') 
        input++;

    if (*input != '\0') {
        *input = '\0';
        input++;
    }
    return p;
}

int palindrome(char *s){
    char *temp = lower(s);
    int n = strlen(s);
    int start = 0;
    int end = n - 1;
    while(start < end){
        if(temp[start] != temp[end])
            return 0;
        start++;
        end--;
    }
    free(temp);
    return 1;
}
int main(int argc, char *argv[])
{
    int fd  = 0, len = 0;
    long unsigned int readfile = 0;
    char buffer[SIZE];
    char *line[100];
    fd = open(argv[1], O_RDONLY);
    if(fd == -1){
        perror("open failed\n");
        return 1;
    }
    readfile = read(fd, buffer, sizeof(buffer) - 1);
    if(readfile < 0){
        perror("error\n");
        return 1;
    }
    buffer[readfile] = '\0';
    char *token = strtoken(buffer);
    while(token != NULL){
        if(strlen(token) > 0){
            line[len] = malloc((strlen(token) + 1) * sizeof(char));
            if(line[len] == NULL){
                printf("allocation failed\n");
                return 1;
            }
            strcpy(line[len], token);
            len++;
        }
        token = strtoken(NULL);
    }
    for(int i = 0; i < len; i++){
        if(palindrome(line[i]) == 1)
            printf("%s\n", line[i]);
    }
    for(int i = 0; i < len; i++)
        free(line[i]);
    close(fd);
    return 0;
}
*/

// palidrome
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <fcntl.h>
// #define SIZE 10000
// char *strtoken(char *str){
//     static char *input = NULL;
//     if(str != NULL)
//         input = str;
//     if(input == NULL || *input == '\0')
//         return NULL;
//     while(*input != ' ' || *input != '\t' || *input != '\n')
//         input++;
//     if(*input == '\0')
//         return NULL;
    
//     char *p = input;
//     while(*input != ' ' && *input != '\t' && *input != '\n' && *input != '\0')
//         input++;
//     if(*input != '\0'){
//         *input = '\0';
//         input++;
//     }

//     return p;
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <fcntl.h>
// #define SIZE 10000
// char *lower(char str[]){
//     char *s = malloc((strlen(str) + 1) * sizeof(char));
//     if(!s){
//         printf("allocation failed for %s\n", s);
//         exit(1);
//     }
//     strcpy(s, str);
//     for(int i = 0; i < strlen(s); i++){
//         if(s[i] >= 'A' && s[i] <= 'Z')
//             s[i] = s[i] + 32;
//     }
//     return s;
// }
// int palindrome(char *s){
//     char *temp = lower(s);
//     int n = strlen(temp);
//     int start = 0;
//     int end = n - 1;
//     while(start < end){
//         if(temp[start] != temp[end])
//             return 0;
//         start++;
//         end--; 
//     }
//     free(temp);
//     return 1;
// }
// char *strtoken(char *str){
//     static char *input = NULL;
//     if(str != NULL)
//         input = str;
//     if(input == NULL || *input == '\0')
//         return NULL;
//     while(*input == ' ' || *input == '\t' || *input == '\n')
//         input++;
//     if(*input == '\0')
//         return NULL;
//     char *p = input;
//     while(*input != ' ' && *input != '\t' && *input != '\n' && *input != '\0')
//         input++;
//     if(*input != '\0'){
//         *input = '\0';
//         input++;
//     }
//     return p;
// }
// int main(int argc, char *argv[])
// {
//     int fd = 0, len = 0;
//     long unsigned int readfile = 0;
//     char buffer[1024];
//     char *lines[100];
//     fd = open(argv[1], O_RDONLY);
//     if(fd == -1){
//         perror("open failed\n");
//         return 1;
//     }
//     readfile = read(fd, buffer, sizeof(buffer) - 1);
//     if(readfile < 0){
//         perror("open failed\n");
//         return 1;
//     }
//     buffer[readfile] = '\0';
//     char *token = strtoken(buffer);
//     while(token != NULL){
//         if(strlen(token) > 0){
//             lines[len] = malloc((strlen(token) + 1) * sizeof(char));
//             if(lines[len] == NULL){
//                 printf("allocation failed\n");
//                 return 1;
//             }
//             strcpy(lines[len], token);
//             len++;
//         }
//         token = strtoken(NULL);
//     }
//     for(int i = 0; i < len; i++){
//         if(palindrome(lines[i]) == 1)
//             printf("%s\n", lines[i]);
//     }
//     for(int i = 0; i < len; i++)
//         free(lines[i]);
//     close(fd);
//     return 0;
// }


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define SIZE 1024
char *lower(char str[]){
    char *s = malloc((strlen(str) + 1) * sizeof(char));
    if(!s){
        printf("allocation failed for %s\n", s);
        exit(1);
    }
    strcpy(s, str);
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
    return s;
}
int palindrome(char *s){
    char *temp = lower(s);
    int n = strlen(temp);
    int start = 0;
    int end = n - 1;
    while(start < end){
        if(temp[start] != temp[end])
            return 0;
        start++;
        end--; 
    }
    free(temp);
    return 1;
}
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
int readfile(char *filename, char *lines[], int size){
    int fd = open(filename, O_RDONLY), i = 0;
    if(fd == -1){
        perror("open failed\n");
        exit(1);
    }
    char buffer[SIZE];
    while(i < size && readline(fd, buffer, SIZE)){
        char *token = strtok(buffer, " ");
        while(token != NULL){
            lines[i] = malloc((strlen(token) + 1) * sizeof(char));
            if(lines[i] == NULL){
                    printf("alloation failed\n");
                    exit(1);
            }
            strcpy(lines[i], token);
            token = strtok(NULL, " ");
            i++;
        }
    }
    close(fd);
    return i;
}
int main(void)
{
    char buffer[SIZE];
    char *lines[32];
    scanf("%s", buffer);
    int len = readfile(buffer, lines, 32);
    for(int i = 0; i < len; i++){
        if(palindrome(lines[i]) == 1)
            printf("%s\n", lines[i]);
    }
    for(int i = 0; i < len; i++)
        free(lines[i]);
    return 0;
}
