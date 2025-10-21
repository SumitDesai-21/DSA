#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#define SIZE 1024
#define IN 1
#define OUT 0
int main(int argc, char *argv[])
{
    int fd = 0, lc, cc, wc, flag;
    char ch;
    char buffer[SIZE];
    scanf("%s", buffer);
    fd = open(buffer, O_RDONLY);
    if(fd == -1){
        perror("open failed\n");
        return 1;
    }
    flag = OUT;
    lc = cc = wc = 0;
    while(read(fd, &ch, 1)){
        ++cc;
        if(ch == '\n')
            ++lc;
        if(ch == ' ' || ch == '\t' || ch == '\n')
            flag = OUT;
        else if(flag == OUT){
            flag = IN;
            ++wc;
        }
    }
    close(fd);
    printf("%d %d %d %s\n", lc, wc, cc, argv[1]);
    return 0;
}

// #include <stdio.h>
// #include <unistd.h>
// #include <fcntl.h>
// #define IN 1
// #define OUT 0
// int main(int argc, char *argv[])
// {
//     int fd = 0, lc, wc, cc, state;
//     char ch;
//     fd = open(argv[1], O_RDONLY);
//     if(fd == -1){
//         perror("open failed\n");
//         return 1;
//     }
//     lc = wc = cc = 0;
//     state = OUT;
//     while(read(fd, &ch, 1)){
//         // read 
//         ++cc;
//         if(ch == '\n')
//             ++lc;
//         if(ch == ' ' || ch == '\t' || ch == '\n')
//             state = OUT;
//         else if(state == OUT){
//             state = IN;
//             ++wc;
//         }
//     }
//     close(fd);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int i;
//     scanf("%d", i);
//     return 0;
// }


#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define IN 1
#define OUT 0
int main(int argc, char *argv[])
{
    int fd = open(argv[1], O_RDONLY), cc, wc, lc, flag;
    if(fd == -1){
        perror("open failed\n");
        return 1;
    }
    char ch;
    cc = wc = lc = flag = 0;
    while(read(fd, &ch, 1)){
        ++cc;
        if(ch == '\n')
            ++lc;
        if(ch == ' ' || ch == '\t' || ch == '\n')
            flag = OUT;
        else if(flag == OUT){
            flag = IN;
            ++wc;
        }
    }
    printf("%d %d %d %s\n", lc, wc, cc, argv[1]);
    return 0;
}

