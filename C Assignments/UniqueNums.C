

#include <stdio.h>
#define SIZE 16

int main(void) {
    int nums[SIZE];     // Array to store input numbers
    int count[SIZE] = {0}; // Array to store count of each number
    int n = 0;      // counter for the number of inputs

    // Read input numbers and track how many are entered
    while (n < SIZE && scanf("%d", &nums[n]) == 1) {
        n++;
    }

    // Calculate the count of each number
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count[i]++;
            }
        }
    }

    // Print numbers that appear exactly once
    for (int i = 0; i < n; i++) {
        if (count[i] == 1) {
            printf("%d ", nums[i]);
        }
    }

    printf("\n");
    return 0;
}


Logic Behind Quesn

#include <stdio.h>
#define SIZE 16

int main(void)
{
    int nums[SIZE]; // Input Array
    int count[SIZE] = {0}; // count array which counts count of individual elements
    int n = 0;

    while (n < SIZE && scanf("%d", &nums[n]) == 1) {
        n++; // Number of Inputs --> n
    }
    // actual logic
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(nums[i] == nums[j]){
                count[i]++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(count[i] == 1){
            printf("%d ", nums[i]);
        }
    }
    printf("\n");
    return 0;
}


// Unique Numbers 
#include <stdio.h>
#define SIZE 16

int main(void)
{
    
    int n = 0;
    int nums[SIZE];
    int count[SIZE] = {0}; // Calculates frequency of a numnber

    while(n < SIZE && scanf("%d", &nums[n]) == 1 ){
        n++;
    }
    
    // Occurence
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(nums[i] == nums[j]){
                count[i]++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(count[i] == 1){
            printf("%d ", nums[i]);
        }
    }

    printf("\n");
    return 0;
}

Max Element among arrays

#include <stdio.h>
#define SIZE 16

int main(void)
{
    int n = 0;
    int nums[SIZE];
    int max;
    while(n < SIZE && scanf("%d", &nums[n]) == 1){
        n++;
    } 
    max = nums[0];
    int i = 0;
    while(i < n){
        if(nums[i] > max){
            max = nums[i];
        }
        i++;
    }
    printf("%d\n", max);
    printf("\n");
    return 0;
}


#include <stdio.h>
int gcd(int a, int b){
    int small,gcd;
    if(a < 0 &&  b < 0){
        if(a < b) small = (-1) * (b);
        else small = (-1) * (a);
    }
    else{
        if(a > b) small = b;
        else small = a;
    }
    int i = 1;
    while(i <= small){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    if(a < 0 && b < 0){
        return (-1) * gcd;
    }
    else{
        return gcd;
    }
    
}
int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", gcd(x, y));
    return 0;
}
