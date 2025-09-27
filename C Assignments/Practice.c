// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <fcntl.h>
// #include <unistd.h>
// #define SIZE 1024
// char *lower(char *str){
//     char *s = malloc((strlen(str) + 1) * sizeof(char));
//     strcpy(s, str);
//     for(int i = 0; i < strlen(s); i++){
//         if(s[i] >= 'A' && s[i] <= 'Z')
//             s[i] = s[i] + 32;
//     }
//     return s;
// }
// int palindrome(char *str){
//     char *temp = lower(str);
//     int start = 0;
//     int end = strlen(temp) - 1;
//     while(start <= end){
//         if(temp[start] != temp[end])
//             return -1;
//         start++;
//         end--;
//     }
//     return 1;
// }
// int readline(int fd, char *s, int size){
//     char *p = s;
//     while(((s - p) < size - 1) && (read(fd, s, 1) == 1)){ 
//         if(*s == '\0')
//             break;
//         s++; 
//     }
//     *s = '\0';  
//     return (s - p); 
// }
// int readfile(char *filename, char *lines[], int size){
//     int fd = open(filename, O_RDONLY);
//     if(fd == -1){
//         perror("open failed\n");
//         exit(1);
//     }
//     char buffer[SIZE];
//     int len = 0;
//     while(readline(fd, buffer, size)){
//         char *token = strtok(buffer, " \n");
//         while(token != NULL){
//             if(strlen(token) > 0){
//                 lines[len] = malloc((strlen(token) + 1) * sizeof(char));
//                 if(lines[len] == NULL){
//                     printf("allocation failed\n");
//                     return 1;
//                 }
//                 strcpy(lines[len], token);
//                 len++;
//             }
//             token = strtok(NULL," \n");
//         }
//     }
//     return len;
// }
// int main(int argc, char *argv[])
// {
//     int len = 0;
//     char *lines[32];    
//     len = readfile(argv[1], lines, SIZE);
//     for(int i = 0; i < len; i++){
//         if(palindrome(lines[i]) == 1)
//             printf("%s\n", lines[i]);
//     }
//     return 0;
// }


