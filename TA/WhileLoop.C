// Write a program that asks the user to enter a number. 
//The program should then print the numbers from 1 to that number. Use a while loop.

// #include <stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     int i=1;
//     while(i<=num){
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }

// Write a program that asks the user to guess a secret number (e.g., 7).
// The program should continue asking the user for guesses until the correct number is guessed.
// Use if-else inside the while loop.

// #include <stdio.h>
// int main(){
//     int secret_num = 7;
//     int input;
//     while (1) // use 1 as true
//     {
//         printf("Enter a num: ");
//         scanf("%d",&input);
//         if(input == secret_num){
//             printf("Correct guess! \n");
//             break;
//         }
//         else{
//             printf("Try again:)\n");
//         }

//     }
//     return 0;
// }


// Write a program that prints the sum of all even numbers from 1 to 100. Use a while loop.

// #include <stdio.h>
// int main(){
//     int sum = 0;
//     int i=1;
//     while (i<=100)
//     {
//         if(i%2 == 0){
//             sum += i;
//         }
//         i++;
//     }
//     printf("%d\n",sum);
//     return 0;
// }

// Create a while loop that asks the user for input and exits the loop if the input is "exit" or "q".

// #include <stdio.h>

// int main() {
//     char ch;
//     while (1) {  // Infinite loop until 'q' is entered
//         printf("Enter a character: ");
//         scanf(" %c", &ch);  // Space before %c skips any whitespace characters
//         if (ch == 'q') {
//             printf("Exited\n");
//             break;
//         } else {
//             printf("Try Again\n");
//         }
//     }
//     return 0;
// }

// int main() {
//     int x = 44;
//     while(x) {
//         x = x / 2;
//     }
// }
/*
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if(a % 5)
    if(b % 5)
    printf("both");
    else if(a % 3)
    printf("a");
    else
    if(a % 3)
    printf("c");
    else
    printf("d");
    return 0;
}
*/
// Lab Task 4b: Loop Problems 1
//1) Write a C program that reads a sequence of integers,
// from end-user, till the end user presses Ctrl-D (scanf returns -1)
// and then the program prints the difference of the first and last number (last - first).
//The program prints "error" if no numbers are entered.

// logically good question

// #include <stdio.h>
// int main(){
//     int num;
//     int sum = 0;
//     while (scanf("%d",&num))
//     {
//         sum += num;
//         if(num == -1){
//             printf("%d\n",sum);
//             break;
//         }
//     }
    
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n,num;
//     int sum = 0;
//     float avg;
//     scanf("%d",&n);
//     // edge case
//     if(n<=0){
//         printf("0.0000\n");
//         return 0;
//     }
//     int i =0;
//     while(i<n){
//         scanf("%d",&num);
//         sum += num;
//         i++;
//     }
//     avg =(float)sum/n;
//     printf("%.4f\n",avg);

//     return 0;
// }


// #include <stdio.h>
// #include <limits.h> 

// int main(){
//     int num;
//     int i = 0;
//     int min = INT_MAX;

//     while (scanf("%d",&num) != EOF) { // End-Of-File
//         if(num < min){
//         min = num;
//        }
//         i++;
//        // 4 1 0 2 9 8
//     }
//     if(i == 0){
//         printf("error\n");
//     }
//     else{
//         printf("%d\n",min);
//     }

//     return 0;
// }


// #include <stdio.h>
// int main(){
//     char ch;
//     while (scanf("%c",&ch) != EOF)
//     {
//         if(ch == 'a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' 
//     || ch == 'A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U'){
//         printf("vowel\n");
//     }
//     else{
//         printf("not-vowel\n");
//     }
//     }

//     return 0;
// }
