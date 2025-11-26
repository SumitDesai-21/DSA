#include <stdio.h>
#include <ctype.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int evaluatePostfix(char *postfix) {
    int i = 0;

    while (postfix[i] != '\0') {

        // Skip spaces
        if (postfix[i] == ' ') {
            i++;
            continue;
        }

        // If digit → push the integer
        else if (isdigit(postfix[i])) {

            int num = 0;

            // Build multi-digit integer
            while (isdigit(postfix[i])) {
                num = num * 10 + (postfix[i] - '0');
                i++;
            }

            push(num);
        }

        // If operator
        else {
            int operand2 = pop();
            int operand1 = pop();
            int result;

            switch (postfix[i]) {
                case '+': result = operand1 + operand2; break;
                case '-': result = operand1 - operand2; break;
                case '*': result = operand1 * operand2; break;
                case '/': result = operand1 / operand2; break;
            }

            push(result);
            i++;
        }
    }

    return pop();
}

int main() {
    char postfix[MAX];
    
    printf("Enter postfix expression: ");
    fgets(postfix, MAX, stdin);
    
    int result = evaluatePostfix(postfix);
    printf("Result = %d\n", result);

    return 0;
}

