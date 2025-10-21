// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #define SIZE 16

// int myscanf(char *format, void *arg) {
//     char buffer[SIZE];
//     int input_read = 0, i = 0;

//     if (strcmp(format, "%c") == 0) {
//         char ch = getchar();
//         if(ch == EOF){
//             printf("EOF Occured\n");
//             return 0;
//         }
//         *(char *)arg = ch;
//         input_read++;
//         return input_read;
//     }
//     if (strcmp(format, "%s") == 0) {
//         char ch;
//         while ((ch = getchar()) == '\n'); 

//         buffer[i++] = ch;
//         while (i < SIZE - 1 && (ch = getchar()) != '\n') {
//             buffer[i++] = ch;
//         }
//         buffer[i] = '\0';
//         if(strlen(buffer) == 0){
//             printf("error: empty string\n");
//             return 0;
//         }
//         strcpy((char *)arg, buffer);
//         input_read++;
//         return input_read;
//     }
//     char ch;
//     while (i < SIZE - 1 && (ch = getchar()) != '\n') {
//         buffer[i++] = ch;
//     }
//     buffer[i] = '\0';

//     if (strcmp(format, "%d") == 0) {
//         *(int *)arg = atoi(buffer);
//         input_read++;
//     }
//     else if (strcmp(format, "%f") == 0 || strcmp(format, "%lf") == 0) {
//         *(float *)arg = atof(buffer);
//         input_read++;
//     }
//     else if (strcmp(format, "%u") == 0) {
//         *(unsigned int *)arg = atoi(buffer);
//         input_read++;
//     }

//     return input_read;
// }

// int main(void) {
//     int i; 
//     myscanf("%d", &i);
//     char ch; 
//     myscanf("%c", &ch);
//     char arr[SIZE]; 
//     myscanf("%s", arr);

//     printf("%d\n", i);
//     printf("%c\n", ch);
//     printf("%s\n", arr);
//     printf("\n");
//     return 0;
// }



// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #define SIZE 32
// int myscanf(char *format, void *arg){
//     int input_read = 0, i = 0;
//     char buffer[SIZE];
//     if(strcmp(format, "%c") == 0){
//         char ch = getchar();
//         *(char *)arg = ch;
//         input_read++;
//         return input_read;
//     }
//     else if(strcmp(format, "%s") == 0){
//         char ch;
//         // skip newlines 
//         while((ch = getchar()) == '\n');
//         buffer[i++] = ch;
//         while(i < SIZE - 1 && (ch = getchar()) != '\n'){
//             buffer[i++] = ch;
//         }
//         buffer[i] = '\0';
//         strcpy((char *)arg, buffer);
//         input_read++;
//         return input_read;
//     }
//     char ch;
//     while(i < SIZE - 1 && (ch = getchar()) != '\n'){
//         buffer[i++] = ch;
//     }
//     buffer[i] = '\0';

//     if(strcmp(format, "%d") == 0){
//         *(int *)arg = atoi(buffer);
//         input_read++;
//     }
//     else if(strcmp(format, "%f") == 0 || strcmp(format, "%lf") == 0 ){
//         *(double *)arg = atof(buffer);
//         input_read++;
//     }
//     else if(strcmp(format, "%u") == 0){
//         *(unsigned int *)arg = (unsigned int) atoi(buffer);
//         input_read++;
//     }
//     return input_read;
// }
// int main(void)
// {
//     int i; myscanf("%d", &i);

// char ch; myscanf("%c", &ch);

// char arr[4]; myscanf("%s", arr);
// printf("%d\n", i);
// printf("%c\n", ch);
// printf("%s\n", arr);
//     return 0;
// }



// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #define SIZE 16

// int myscanf(char *format, void *arg) {
//     char buffer[SIZE];
//     int input_read = 0, i = 0;

//     if (strcmp(format, "%c") == 0) {
//         char ch = getchar();
//         if(ch == EOF){
//             printf("EOF Occured\n");
//             return 0;
//         }
//         *(char *)arg = ch;
//         input_read++;
//         return input_read;
//     }
//     if (strcmp(format, "%s") == 0) {
//         char ch;
//         while ((ch = getchar()) == '\n'); 

//         buffer[i++] = ch;
//         while (i < SIZE - 1 && (ch = getchar()) != '\n') {
//             buffer[i++] = ch;
//         }
//         buffer[i] = '\0';
//         if(strlen(buffer) == 0){
//             printf("error: empty string\n");
//             return 0;
//         }
//         strcpy((char *)arg, buffer);
//         input_read++;
//         return input_read;
//     }
//     char ch;
//     while (i < SIZE - 1 && (ch = getchar()) != '\n') {
//         buffer[i++] = ch;
//     }
//     buffer[i] = '\0';

//     if (strcmp(format, "%d") == 0) {
//         if(*buffer >= '0' && *buffer <= '9'){
//             *(int *)arg = (buffer);
//             input_read++;
//         }
//     }
//     else if (strcmp(format, "%f") == 0 || strcmp(format, "%lf") == 0) {
//         if((*buffer >= '0' && *buffer <= '9') || *buffer == '.'){
//             *(double *)arg = atof(buffer);
//             input_read++;
//         }
//     }
//     else if (strcmp(format, "%u") == 0) {
//         if(*buffer >= '0' && *buffer <= '9'){
//             *(unsigned int *)arg = (buffer);
//             input_read++;
//         }
//     }
//     return input_read;
// }

// int main(void) {
//     double f; myscanf("%lf", &f); printf("%lf\n",f);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #define SIZE 32

// void checker(char *buffer) {
//     int i = 0, dot_count = 0;

//     while (buffer[i] != '\0') {
//         if (buffer[i] >= '0' && buffer[i] <= '9') {
//             i++;
//         } else if (buffer[i] == '.' && dot_count == 0) {
//             dot_count++;
//             i++;
//         } else {
//             buffer[i] = '\0';
//             break;
//         }
//     }
// }
// int myscanf(char *format, void *arg) {
//     char buffer[SIZE];
//     int input_read = 0, i = 0;

//     if (strcmp(format, "%c") == 0) {
//         char ch = getchar();
//         if (ch == EOF) {
//             printf("EOF Occurred\n");
//             return 0;
//         }
//         *(char *)arg = ch;
//         input_read++;
//         return input_read;
//     }

//     if (strcmp(format, "%s") == 0) {
//         char ch;
//         while ((ch = getchar()) == '\n');
//         buffer[i++] = ch;

//         while (i < SIZE - 1 && (ch = getchar()) != '\n') {
//             buffer[i++] = ch;
//         }
//         buffer[i] = '\0';
//         if (strlen(buffer) == 0) {
//             printf("String Is Empty\n");
//             return 0;
//         }
//         strcpy((char *)arg, buffer);
//         input_read++;
//         return input_read;
//     }

//     char ch;
//     while (i < SIZE - 1 && (ch = getchar()) != '\n') {
//         buffer[i++] = ch;
//     }
//     buffer[i] = '\0';

//     if (strcmp(format, "%d") == 0) {
//         *(int *)arg = atoi(buffer);
//         input_read++;
//     } else if (strcmp(format, "%f") == 0 || strcmp(format, "%lf") == 0) {
//         checker(buffer); 
//         *(double *)arg = atof(buffer);
//         input_read++;
//     } else if (strcmp(format, "%u") == 0) {
//         *(unsigned int *)arg = atoi(buffer);
//         input_read++;
//     }
//     return input_read;
// }

// int main(void) {
//     double f; myscanf("%lf", &f); printf("%lf\n",f);

//     return 0;
// }

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 32

void checker(char *buffer) {
    int i = 0, dot_count = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] >= '0' && buffer[i] <= '9') {
            i++;
        } else if (buffer[i] == '.' && dot_count == 0) {
            dot_count++;
            i++;
        } else {
            buffer[i] = '\0'; 
            break;
        }
    }
}
int myscanf(char *format, void *arg) {
    char buffer[SIZE] = {0}; 
    int input_read = 0, i = 0;

    if (strcmp(format, "%c") == 0) {
        char ch = getchar();
        if (ch == EOF) {
            printf("EOF Occurred\n");
            return 0;
        }
        *(char *)arg = ch;
        input_read++;
        return input_read;
    }

    if (strcmp(format, "%s") == 0) {
        char ch;
        while ((ch = getchar()) == '\n');

        buffer[i++] = ch; 

        while (i < SIZE - 1 && (ch = getchar()) != '\n') {
            buffer[i++] = ch;
        }
        buffer[i] = '\0'; 

        if (strlen(buffer) == 0) {
            printf("String Is Empty\n");
            return 0;
        }
        strcpy((char *)arg, buffer); 
        input_read++;
        return input_read;
    }

    char ch;
    while (i < SIZE - 1 && (ch = getchar()) != '\n') {
        buffer[i++] = ch;
    }
    buffer[i] = '\0'; 

    if (strcmp(format, "%d") == 0) {
        *(int *)arg = atoi(buffer);
        input_read++;
    } else if (strcmp(format, "%f") == 0 || strcmp(format, "%lf") == 0) {
        checker(buffer);
        *(double *)arg = atof(buffer);
        input_read++;
    } else if (strcmp(format, "%u") == 0) {
        *(unsigned int *)arg = atoi(buffer);
        input_read++;
    }

    return input_read;
}

int main(void) {
    float f; myscanf("%f", &f); printf("%f\n",f);
    return 0;
}
*/

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #define SIZE 16

// void checker(char *buffer) {
//     int i = 0, dot_count = 0;

//     while (buffer[i] != '\0') {
//         if (buffer[i] >= '0' && buffer[i] <= '9') {
//             i++;
//         } else if (buffer[i] == '.' && dot_count == 0) {
//             dot_count++;
//             i++;
//         } else {
//             buffer[i] = '\0'; 
//             break;
//         }
//     }
// }

// int myscanf(char *format, void *arg) {
//     char buffer[SIZE];
//     int input_read = 0, i = 0;

//     if (strcmp(format, "%c") == 0) {
//         char ch = getchar();
//         if(ch == EOF){
//             printf("EOF Occured\n");
//             return 0;
//         }
//         *(char *)arg = ch;
//         input_read++;
//         return input_read;
//     }
//     if (strcmp(format, "%s") == 0) {
//         char ch;
//         while ((ch = getchar()) == '\n'); 

//         buffer[i++] = ch;
//         while (i < SIZE - 1 && (ch = getchar()) != '\n') {
//             buffer[i++] = ch;
//         }
//         buffer[i] = '\0';
//         if(strlen(buffer) == 0){
//             printf("error: empty string\n");
//             return 0;
//         }
//         strcpy((char *)arg, buffer);
//         input_read++;
//         return input_read;
//     }
//     char ch;
//     while (i < SIZE - 1 && (ch = getchar()) != '\n') {
//         buffer[i++] = ch;
//     }
//     buffer[i] = '\0';

//     if (strcmp(format, "%d") == 0) {
//         if(*buffer >= '0' && *buffer <= '9'){
//             *(int *)arg = atoi(buffer);
//             input_read++;
//         }
//     }
//     else if (strcmp(format, "%f") == 0 || strcmp(format, "%lf") == 0) {
//         checker(buffer);
//         *(float *)arg = atof(buffer);
//         input_read++;
//     }
//     else if (strcmp(format, "%u") == 0) {
//         if(*buffer >= '0' && *buffer <= '9'){
//             *(unsigned int *)arg = atoi(buffer);
//             input_read++;
//             }
//         }   

//     return input_read;
// }

// int main(void) {
//     float f; myscanf("%f", &f); printf("%f\n",f);
//     return 0;
// }




#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 64
int myscanf(char *format, void *arg) {
    char s[SIZE] = {0};
    int size = 0, i = 0;

    if (strcmp(format, "%c") == 0) {
        char ch = getchar();
        if (ch == EOF){
            printf("EOF Occured\n");
            return -1;
        }
        *(char *)arg = ch;
        size++;
        return size;
    }
    if (strcmp(format, "%s") == 0) {
        char ch;
        while ((ch = getchar()) == '\n' || ch ==' ' || ch == '\t');
        s[i++] = ch;
        while (i < SIZE - 1 && (ch = getchar()) != '\n') {
            s[i++] = ch;
        }
        s[i] = '\0';
        strcpy((char *)arg, s);
        size++;
        return size;
    }
    char ch;
    while (i < SIZE - 1 && (ch = getchar()) != '\n') {
        s[i++] = ch;
    }
    s[i] = '\0';

    if (strcmp(format, "%d") == 0) {
        int j = 0;
        while(s[j] == ' ' || s[j] == '\t' || s[j] == '-' || s[j] == '+' || s[j] == '\n')
            j++;
        if((s[j] >= '0' && s[j] <= '9')){
            *(int *)arg = atoi(s);
            size++;
        }
        j++;
    }
    else if (strcmp(format, "%f") == 0) {
        int j = 0;
        while(s[j] == '-' || s[j] == '+' || s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
            j++;
        if((s[j] >= '0' && s[j] <= '9') || s[j] == '.'){
            *(float *)arg = atof(s);
            size++;
        }
        j++;
    } else if (strcmp(format, "%lf") == 0) {
        int j = 0;
        while(s[j] == '-' || s[j] == '+' || s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
            j++;
        if((s[j] >= '0' && s[j] <= '9') || s[j] == '.'){
            *(double *)arg = strtod(s, NULL); 
            size++;
        }
        j++;
    } else if (strcmp(format, "%u") == 0) {
        int j = 0;
        while(s[j] == '+' || s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
            j++;
        if(s[j] >= '0' && s[j] <= '9'){
            *(unsigned int *)arg = atoi(s);
            size++;
        }
        j++;
    }
    return size;
} 
int main(){
    float i;
    myscanf("%f", &i);
    printf("%f\n", i);
}
