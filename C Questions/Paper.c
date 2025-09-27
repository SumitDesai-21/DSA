question regarding prime number
fibonacci question
check 
fibonacci sequence
#include <stdio.h>
#define SIZE 1000

int main(void)
{
    int n, prev, curr, next, sum, r;
    prev = 1;
    curr = 1;
    sum = 0;
    r = 1;
    scanf("%d", &n);
    int finonacci[SIZE];

    int i = 0;
    while(i < (2 * n - 1)){
        finonacci[i] = prev;
        next = prev + curr;
        prev = curr;
        curr = next;

        i++;
    }
    int j = 0;
    while(j < (2 * n -1)){
        sum += (r * finonacci[j]); 
        r *= -1;

        j += 2;
    }
    printf("%d\n", sum);
    return 0;
}

check if the give number is power of 3 or not

#include <stdio.h>
int main(void)
{
    int num, q, b;

    while(1){
        b = scanf("%d", &num);
        if(b != 1){
            return 0;
        }
        q = num;
        while(q > 0 && q % 3 == 0){
            q /= 3;
        }
        if(q == 1){
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}


Nth fibonacci number

#include <stdio.h>
int fibonacci(int n){
    int prev, curr, next;
    prev = 0;
    curr = 1;
    int i = 1;
    while(i <= n){
        next = prev + curr;
        prev = curr;
        curr = next;
        i++;
    }
    return prev;
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
    return 0;
}


#include <stdio.h>
int main() {
    int a, b;
    char ch1, ch2;
    int r1, r2;
    r1  = scanf(" #%c%d #%c", &ch1, &a, &ch2); // note the space before # in both cases
    r2 = scanf("%d", &b);
    printf("%d %d %d %d\n", r1, r2, a, b);
    return 0;   
}

#include <stdio.h>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    if (a > b && a % 5) {
        if (b % 3) {
            printf("%d\n", a + b);
        } else if (a % 3) {
            if (a) {
                printf("%d\n", a - b);
            } else {
                printf("%d\n", a);
            }
        } else {
            printf("%d\n", b);
        }
    } else {
        printf("%d\n", a % b);
    }

    return 0;
}
#include <stdio.h>
int main(void)
{
    
    int a = 16, b = 8, c;
    c = a - b / 2;
    c = (++b) + (--c);

    printf("%d\n", c);
    return 0;
}

// fibbonacci
#include <stdio.h>
#define SIZE 1000

int main(void)
{
    int n, prev, curr, next, sum, r;
    int fibo[SIZE];
    
    prev = 1;
    curr = 1;
    sum = 0;
    r = 1;
    scanf("%d", &n);
    if(n < 0){
        printf("invalid input\n");
        return 0;
    }
    int i = 0;
    while(i < (2*n - 1)){
        fibo[i] = prev;
        next = prev + curr;
        prev = curr;
        curr = next;
        i++;
    }
    int j = 0;
    while(j < (2*n -1)){
        sum += (r * fibo[j]);
        r *= -1;
        j += 2;
    }
    printf("%d\n", sum);
    return 0;
}

*/


// #include <stdio.h>
// int main() {
//     int a, b;
//     scanf("%d%d", &a, &b);

//     if (b > a && a % 5) {
//         if (b % 3) {
//             printf("%d\n", a + b);
//         } else if (a % 3) {
//             if (b) {
//                 printf("%d\n", a - b);
//             } else {
//                 printf("%d\n", a);
//             }
//         } else {
//             printf("%d\n", b);
//         }
//     } else {
//         printf("%d\n", b % a);
// //     }
// #include <stdio.h>
// int findmax(int *arr, int len) {
//     int max, i = 1;
//     max = arr[0];
//     while (i < len) {
//         if (arr[i] >= max) {
//             max = arr[i];
//         }
//         i++;
//     }
//     return max;
// }
// int main () {
//     int arr[16], i = 0, max, count = 0, p;
//     for (i = 0; i < 16; i++) {
//         p = scanf("%d", &arr[i]);
//         if (p == -1) {
//             break;
//         }
//     }
//     max = findmax(arr, i);
//     for (i = 0; i < 16; i++) {
//         if (max == arr[i]) {
//             count++;
//         }
//     }
//     printf("%d %d\n", max, count);
//     return 0;
// }


// #include <stdio.h>
// #include <limits.h>
// #define SIZE 16

// int main(void)
// {
//     int nums[SIZE];
//     int max, len;
//     max = INT_MIN;
//     len = 0;
//     int i = 0;
//     int count = 0;

//     while(scanf("%d", &nums[i]) == 1){
//         if(nums[i] >= max){
//             max = nums[i];
//         }
//         len++;
//         i++;
//     }
//     for(int i = 0; i < len; i++){
//         if(nums[i] == max){
//             count++;
//         }
//     }
//     printf("%d %d\n", max, count);
//     return 0;
// }


// #include <stdio.h>
// #include <limits.h>
// #define SIZE 16

// int max_repeating(int *arr, int len){
//     int count[len];
//     int Max = INT_MIN;

//     for(int i =0; i < len; i++){
//         for(int j = 0; j  < len; j++){
//             if(arr[i] == arr[j] && i != j){
//                 count[i]++;
//             }
//         }
//     }
//     for(int i = 0; i < len ; i++){
//         if(count[i] > Max){
//             Max = i;
//         }
//     }
//     return arr[Max];
// }
// int main(void)
// {
//     int arr[SIZE];
//     int len = 0;

//     int i = 0;
//     while(scanf("%d", &arr[i]) == 1){
//         len++;
//         i++;
//     }
//     printf("%d\n", max_repeating(arr, len));
//     return 0;
// }


// #include <stdio.h>
// #include <limits.h>
// #define SIZE 16

// int max_repeated(int *arr, int len){
//     int count[len];

//     int Max = INT_MIN;
//     for(int i = 0; i < len; i++){
//         for(int j = 0; j < len; j++){
//             if(arr[i] == arr[j] && i != j){
//                 count[i]++;
//             }
//         }
//     }
//     for(int i = 0; i < len; i++){
//         if(count[i] >= Max){
//             Max = i;
//         }
//     }
//     return arr[Max];
// }
// int main(void)
// {
//     int nums[SIZE]; 
//     int i = 0, len = 0;

//     while(scanf("%d", &nums[i]) == 1){
//         len++;
//         i++;
//     }
//     printf("%d\n", max_repeating(nums, len));
//     return 0;
// }

// #include <stdio.h>
// #include <limits.h>
// #define SIZE 16

// int maxabsdiff(int a[], int len){
//     int Diff[len-1], diff, Max;
//     diff = 0;
//     Max = INT_MIN;

//     int i = 0;

//     while(i < len-1){

//         diff = a[i] - a[i+1];
//         if(diff >= 0) Diff[i] = diff;
//         else Diff[i] = (-1) * diff;
//         i++;
//     }
//     for(int i = 0; i < len-1; i++){
//         if(Diff[i] >= Max){
//             Max = Diff[i];
//         }
//     }
//     return Max;
// }
// int main(void)
// {
//     int nums[SIZE];
//     int i = 0, len = 0;
//     while(scanf("%d", &nums[i]) == 1 ){
//         len++;
//         i++;
//     }
//     printf("%d\n", maxabsdiff(nums, len));
//     return 0;
// }

// // if array is {1, 2, -1, 3, -4, 5, 7}

// // {1, -1, 2, -3, 3, -3}

// #include <stdio.h>
// #include <limits.h>
// #define SIZE 16

// int findmax(int *arr, int len){
//     int Max = INT_MIN;
//     for(int i = 0; i < len; i++){
//         if(arr[i] >= Max){
//             Max = arr[i];
//         }
//     }
//     return Max;
// }
// int main(void)
// {
//     int nums[SIZE];
//     int i = 0, len = 0;
//     while(scanf("%d", &nums[i]) == 1){
//         len++;
//         i++;
//     }
//     printf("%d\n", findmax(nums, len));
//     return 0;
// }


// #include <stdio.h>
// #include <limits.h>
// #define SIZE 16

// int second_max(int *arr, int len){
//     int first, second;
//     first = second = INT_MIN;
//     for(int i = 0; i < len; i++){
//         if(arr[i] >= first){
//             second = first;
//             first = arr[i];
//         }
//         else if(arr[i] >= second){
//             second = arr[i];
//         }
//     }
//     return second;
// }
// int main(void)
// {
//     int nums[SIZE];
//     int i = 0, len = 0;
//     while(scanf("%d", &nums[i]) == 1){
//         len++;
//         i++;
//     }
//     printf("%d\n", second_max(nums, len));
//    return 0;
//}
// 1, 2, 1, 3, 4, 1, 2 
// 10, 20, 20, 10, 20, 40
// 1, 1, 2, 2, 1
// 1, 1, 3, 2


// #include <stdio.h>
// struct student {
// 	int mis;
// 	char name[32];
// 	float marks;
// };
// #define SIZE 16
// typedef struct student student;
// void print_records(student a[], int len) {
// 	int i;
// 	printf("-----array-------\n");
// 	for(i = 0; i < len; i++)
// 		printf("%d %s %.2f\n", a[i].mis, 
// 			a[i].name, a[i].marks);
// }
// /* linear search;
//  * searches for the record with mis id = mis
//  * in the array a[], upto len,
//  * returns the index of the element found
//  * returns -1 if not found
//  */
// int findithmin(student a[], int len, int i) {
// 	int min = a[i].mis;
// 	int minindex = i;
// 	int j;
// 	for(j = i + 1; j < len; j++)
// 		if(a[j].mis < min) {
// 			min = a[j].mis;
// 			minindex = j;
// 		}
// 	return minindex;
// }
// void selsort(student a[], int len) {
// 	student t;
// 	int min;
// 	int i;
// 	i = 0;
// 	while(i < len - 1) {
// 		min = findithmin(a, len, i);
// 		//move ith minimum to ith position
// 		t = a[i];
// 		a[i] = a[min];
// 		a[min] = t;	
// 		i++;
// 	}
// }
// int main() {
// 	student a[SIZE];
// 	int len = 0;
// 	int mis, ret;

// 	while(len < SIZE && scanf("%d%s%f", &a[len].mis, a[len].name,
// 			&a[len].marks) == 3)
// 		len++;	
// 	print_records(a, len);	
// 	selsort(a, len);
// 	print_records(a, len);	

// 	return 0;	
// }
