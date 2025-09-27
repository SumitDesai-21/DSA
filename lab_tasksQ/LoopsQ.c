// While Loop Problems -- 7 Marks
/*
Write a program which checks if given two numbers,
are consequent members of fibonacci sequence or not.
Notes: the fiboancci sequence is
1 1 2 3 5 8 13 21 34 ....
So, if the input is "2 3", then answer is yes
if the input is "13 21", the answer is yes.
if the input is "13 34" or "10 20" or "100 101" then answer is no.
*/

// #include <stdio.h>
// void fibonnaci(int a,int b){
//     int prev,curr,next;
//     prev = 1;
//     curr = 1;
//     while (curr <= b)
//     {
//         if(a == prev && b == curr){
//             printf("yes\n");
//             return;
//         }

//         next = curr + prev;
//         prev = curr;
//         curr = next;
//     } 
//     printf("no\n");
    
// }
// int main(){
//     int x,y;
//     scanf("%d%d",&x,&y);
//     fibonnaci(x,y);
//     return 0;
// }

// // 2nd 
// #include <stdio.h>
// int main(){
//     int n,curr,next;
//     curr = 1;
//     scanf("%d",&n);
//     int i=1;
//     while (i<=n)
//     {
//         printf("%d ",curr);
//         next = curr*2;
//         curr = next;
//         i++;
//     }

//     return 0;
// }

// 3rd

// #include <stdio.h>
// #include <limits.h>
// int main(){
//     int num,first,second,third;
//     first = INT_MIN;
//     second = INT_MIN;
//     third = INT_MIN;
//     int i = 0;
//     while(scanf("%d",&num) != -1){
//         if(num >= first){
//             third = second;
//             second = first;
//             first = num;
//         }
//         else if(num >= second){
//             third = second;
//             second = num;
//         }
//         else{
//             third = num;
//         }

//         i++;
//     }
//     if(i < 3){
//         printf("not found\n");
//     }
//     else{
//         printf("%d\n",third);
//     };
//     return 0;
// }
// // 5 1 2 3 4 6
// // 5 6 6 7
// // 10 1 8 2 7 3 6 4 5 5

// #include <stdio.h>
// #include <limits.h>  
// int main() {
//     int first = INT_MIN, second = INT_MIN, third = INT_MIN;
//     int num;

//     while (scanf("%d", &num) == 1) {
//         if (num >= first) {
//             third = second;
//             second = first;
//             first = num;
//         } else if (num >= second && num <= first) {
//             third = second;
//             second = num;
//         } else if (num >= third && num <= second) {
//             third = num;
//         }
//     }

//     if (third != INT_MIN) {
//         printf("%d\n", third);
//     } else {
//         printf("not found\n");
//     }

//     return 0;
// }
