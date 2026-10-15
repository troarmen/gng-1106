#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter an integer arithmetic expression involving a single operation (leave no space)\n");
    scanf("%d%c%d", &a, &op, &b);
    switch(op)
    {
        case '+':
            printf("%d\n", a + b);
            break;
            
        case '-':
            printf("%d\n", a - b);
            break;
            
        case '*':
            printf("%d\n", a * b);
            break;
            
        case '/':
            if (b != 0) {
                printf("%d\n", a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
            
        default:
            printf("Error: Invalid operator '%c'. Please use +, -, *, or /.\n", op);
            break;
    }

    return 0;
}