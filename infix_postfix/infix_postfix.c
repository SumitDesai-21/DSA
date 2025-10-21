#include <stdio.h>

#include <ctype.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

#define MAX 100

char charStack[MAX];

float floatStack[MAX];

int charTop = -1;

int floatTop = -1;

void pushChar(char item)

{

    if (charTop >= MAX - 1)

    {

        printf("Stack Overflow\n");

        return;
    }

    charStack[++charTop] = item;
}

char popChar()

{

    if (charTop < 0)

    {

        printf("Stack Underflow\n");

        return -1;
    }

    return charStack[charTop--];
}

char peekChar()

{

    if (charTop < 0)

    {

        return -1;
    }

    return charStack[charTop];
}

void pushFloat(float item)

{

    if (floatTop >= MAX - 1)

    {

        printf("Stack Overflow\n");

        return;
    }

    floatStack[++floatTop] = item;
}

float popFloat()

{

    if (floatTop < 0)

    {

        printf("Stack Underflow\n");

        return -1;
    }

    return floatStack[floatTop--];
}

int isOperator(char ch)

{

    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

int precedence(char ch)

{

    switch (ch)

    {

    case '^':

        return 3;

    case '*':

    case '/':

        return 2;

    case '+':

    case '-':

        return 1;

    default:

        return 0;
    }
}

void infixToPostfix(char *infix, char *postfix)

{

    int i = 0, j = 0;

    char ch, x;

    pushChar('(');

    strcat(infix, ")");

    for (i = 0; infix[i] != '\0'; i++)

    {

        ch = infix[i];

        if (ch == ' ')

        {

            continue;
        }

        else if (ch == '(')

        {

            pushChar(ch);
        }

        else if (isdigit(ch) || ch == '.')

        {

            while (isdigit(infix[i]) || infix[i] == '.')

            {

                postfix[j++] = infix[i++];
            }

            postfix[j++] = ' ';

            i--;
        }

        else if (isalpha(ch))

        {

            postfix[j++] = ch;

            postfix[j++] = ' ';
        }

        else if (isOperator(ch))

        {

            postfix[j++] = ' ';

            while (charTop >= 0 && precedence(peekChar()) >= precedence(ch))

            {

                x = popChar();

                postfix[j++] = x;

                postfix[j++] = ' ';
            }

            pushChar(ch);
        }

        else if (ch == ')')

        {

            while (charTop >= 0 && peekChar() != '(')

            {

                x = popChar();

                postfix[j++] = ' ';

                postfix[j++] = x;
            }

            if (charTop >= 0 && peekChar() == '(')

            {

                popChar();
            }
        }
    }

    postfix[j] = '\0';
}

float evaluatePostfix(char *postfix)

{

    int i = 0;

    char ch;

    float operand1, operand2, result;

    char buffer[20];

    while (postfix[i] != '\0')

    {

        ch = postfix[i];

        if (ch == ' ')

        {

            i++;

            continue;
        }

        else if (isdigit(ch) || ch == '.')

        {

            int j = 0;

            while (isdigit(postfix[i]) || postfix[i] == '.')

            {

                buffer[j++] = postfix[i++];
            }

            buffer[j] = '\0';

            pushFloat(atof(buffer));
        }

        else if (isOperator(ch))

        {

            operand2 = popFloat();

            operand1 = popFloat();

            switch (ch)

            {

            case '+':

                result = operand1 + operand2;

                break;

            case '-':

                result = operand1 - operand2;

                break;

            case '*':

                result = operand1 * operand2;

                break;

            case '/':

                if (operand2 != 0)

                {

                    result = operand1 / operand2;
                }

                else

                {

                    printf("Error: Division by zero\n");

                    return 0;
                }

                break;

            case '^':

                result = pow(operand1, operand2);

                break;
            }

            pushFloat(result);

            i++;
        }

        else

        {

            i++;
        }
    }

    return popFloat();
}

int main()

{

    char infix[MAX], postfix[MAX];

    float result;

    printf("Enter infix expression: ");

    fgets(infix, MAX, stdin);

    infix[strcspn(infix, "\n")] = 0;

    infixToPostfix(infix, postfix);

    printf("Infix: %s\n", infix);

    printf("Postfix: %s\n", postfix);

    result = evaluatePostfix(postfix);

    printf("Result: %.2f\n", result);

    if (floatTop >= 0)

    {

        printf("Result stored at top of stack: %.2f\n", floatStack[floatTop]);
    }

    return 0;
}
