// file1
/*
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#define SIZE 4
int main(void)
{
    int fd, i;
    char arr[SIZE];
    fd = open("/etc/passwd", O_RDONLY);
    if(fd == -1){
        printf("open failed\n");
        return 1;
    }
    printf("open success fd = %d", fd);
    read(fd, arr, SIZE);
    for(i = 0; i < SIZE; i++)
        putchar(arr[i]);
    return 0;
}
*/
// Our Own cat command
/*
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
    int fd;
    char ch;
    fd = open("/etc/passwd", O_RDONLY);
    if(fd == -1){
        printf("open failed\n");
        return 1;
    }
    printf("open success fd = %d\n", fd);
    while(read(fd, &ch, 1)){
        putchar(ch);
    }
    close(fd);
    return 0;
}
*/
