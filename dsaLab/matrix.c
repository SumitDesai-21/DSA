#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define SIZE 1024

int readline(int fd, char *s, int size){
    char *p = s;
    while(((s - p) < size  - 1) && read(fd, s, 1) == 1){
        if(*s == '\n')
            break;
        s++;
    }
    *s = '\0';
    return (s - p);
}

int readfile(char *filename, char *lines[], int size){
    int fd = open(filename, O_RDONLY), len = 0;
    if(fd == -1){
        perror("open failed\n");
        exit(1);
    }
    char buffer[SIZE];
    while(len < size && readline(fd, buffer, SIZE) > 0){
        char *token = strtok(buffer, " ");
        while(token != NULL){
            lines[len] = malloc((strlen(token) + 1) * sizeof(char));
            if(lines[len] == NULL){
                printf("allocation failed\n");
                exit(1);
            }
            strcpy(lines[len], token);
            len++;
            token = strtok(NULL, " ");
        }
    }
    close(fd);
    return len;
}

int main(int argc, char *argv[]){
    char *lines[16];
    int len = readfile(argv[1], lines, 10), nrows = 0, ncols = 0;
    nrows = atoi(lines[0]);
    ncols = atoi(lines[1]);
    if(len < (nrows * ncols) + 2){
        printf("bad data\n");
        return 1;
    }
    if(nrows <= 0 || ncols <= 0){
        printf("bad data\n");
        return 1;
    }
    int a[nrows][ncols];
    int idx = 2;
    for(int i = 0; i < nrows; i++){
        for(int j = 0; j < ncols; j++){
            if(idx < len){
                a[i][j] = atoi(lines[idx]);
                idx++;
            }
        }
    }

    // Check if the matrix is diagonal and/or identity
    int isDiagonal = 1, isIdentity = 1;
    if (nrows != ncols) { // A diagonal or identity matrix must be square
        isDiagonal = 0;
        isIdentity = 0;
    } else {
        for (int i = 0; i < nrows; i++) {
            for (int j = 0; j < ncols; j++) {
                if (i == j) {
                    if (a[i][j] != 1) {
                        isIdentity = 0; // Diagonal element is not 1
                    }
                } else if (a[i][j] != 0) {
                    isDiagonal = 0; // Off-diagonal element is not zero
                    isIdentity = 0; // Identity matrix cannot have non-zero off-diagonal elements
                }
            }
        }
    }

    // Print the results
    printf("%s\n", isDiagonal ? "diagonal" : "not diagonal");
    printf("%s\n", isIdentity ? "identity" : "not identity");

    // Print the matrix (optional, based on the original code)
    for(int i = 0; i < nrows; i++){
        for(int j = 0; j < ncols; j++){
            printf("%d ", a[i][j]);
        }
    }
    printf("\n");

    for(int i = 0; i < len; i++)
        free(lines[i]);

    return 0;
}
