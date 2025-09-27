/*
#include <stdio.h>
#define SIZE 16
int ternary(int nums[], int len, int n){
    int l = 0;
    int h = len - 1;
    while(l <= n){
        int m1, m2;
        m1 = (l + h)/ 3; 
        m2 = (2 * (l + h)/ 3);
        if(n == nums[m1])
            return m1;
        else if(n == nums[m2])
            return m2;
        else if(n < nums[m1])
            h = m1 - 1;
        else if(n > nums[m2])
            l = m2 + 1;
        else{
            l = m1 + 1;
            h = m2 - 1;
        }
    }
    return -1;
}
int main(void)
{
    int nums[SIZE], len = 0, target = 0;  
    scanf("%d", &target);
    while(scanf("%d", &nums[len]) != EOF) 
        len++;
    printf("%d\n", ternary(nums, len, target));
    return 0;
}
*/
