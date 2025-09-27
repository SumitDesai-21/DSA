// #include <stdio.h>
// #define SIZE 32
// typedef struct course 
// {  
//     char name[SIZE]; 
//     char course_id[16]; 
//     int credits; 
//     int type; 
//     char category[16];
// }crs;
// int total_sum(crs cs[], int len){
//     int sum = 0;
//     for(int i = 0; i < len; i++){
//         sum += cs[i].credits;
//     }
//     return sum;
// }
// int sum_of_lab(crs cs[], int len){
//     int sum = 0;
//     for(int i = 0; i < len; i++){
//         if(cs[i].type == 2){
//             sum += cs[i].credits;
//         }
//     }
//     return sum;
// }
// void print_records(crs cs[], int len){
//     for(int i = 0; i < len; i++){
//         printf("%s %d\n", cs[i].category, cs[i].credits);
//     }
// }
// int main(void)
// {
//     crs cs[SIZE];
//     int len = 0;
//     while(len < SIZE && (scanf("%s %s %d %d %s", cs[len].name, cs[len].course_id, &cs[len].credits, &cs[len].type, cs[len].category)) == 5)
//         len++;
    
//     printf("%d\n", total_sum(cs, len));
//     printf("%d\n", sum_of_lab(cs, len));
//     print_records(cs, len);
//     return 0;
// }



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 32

typedef struct course {
    char name[SIZE];
    char course_id[16];
    int credits;
    int type;
    char category[16];
} crs;

int total_sum(crs cs[], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        if (cs[i].credits < 0) {
            printf("Invalid Credit : %s\n", cs[i].name);
            continue;
        }
        sum += cs[i].credits;
    }
    return sum;
}
int sum_of_lab(crs cs[], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        if (cs[i].type == 2) {
            if (cs[i].credits < 0) {
                printf("Invalid Lab Credit: %s\n", cs[i].name);
                continue;
            }
            sum += cs[i].credits;
        }
    }
    return sum;
}
void print_records(crs cs[], int len) {
    int pcc, hssc, lc, llc, oe, de; 
    pcc = hssc = lc = llc = oe = de = 0;
    for (int i = 0; i < len; i++) {
        if (strlen(cs[i].category) == 0) {
            printf("Invalid Category : %s\n", cs[i].name);
            continue;
        }
    }
    for(int i = 0; i < len; i++){
        if(strcmp(cs[i].category, "PCC") == 0)
            pcc += cs[i].credits;
        else if(strcmp(cs[i].category, "HSSC") == 0)
            hssc += cs[i].credits;
        else if(strcmp(cs[i].category, "LC") == 0)
            lc += cs[i].credits;
        else if(strcmp(cs[i].category, "LLC") == 0)
            llc += cs[i].credits;
        else if(strcmp(cs[i].category, "OE") == 0)
            oe += cs[i].credits;
        else if(strcmp(cs[i].category, "DE") == 0)
            de += cs[i].credits;
    }
    printf("PCC %d\n", pcc);
    printf("HSSC %d\n", hssc);
    printf("LC %d\n", lc);
    printf("LLC %d\n", llc);
    printf("OE %d\n", oe);
    printf("DE %d\n", de);
}

int main(void) {
    crs cs[SIZE];
    int len = 0;

    while (len < SIZE && 
           scanf("%s %s %d %d %s", cs[len].name, cs[len].course_id, &cs[len].credits, &cs[len].type, cs[len].category) == 5) {
        if (cs[len].credits < 0 || cs[len].type < 0) {
            printf("Invalid Input\n");
            continue;
        }
        len++;
    }

    printf("%d\n", total_sum(cs, len));
    printf("%d\n", sum_of_lab(cs, len));
    print_records(cs, len);

    return 0;
}
