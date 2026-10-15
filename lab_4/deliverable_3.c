#include <stdio.h>

int main()
{
    double a, b;
    char op;

    printf("Enter an arithmetic expression involving a single operation (leave no space)\n");
    scanf("%lf%c%lf", &a, &op, &b);
    
    switch(op)
    {
        case '+':
            printf("%g\n", a + b);
            break;
            
        case '-':
            printf("%g\n", a - b);
            break;
            
        case '*':
            printf("%g\n", a * b);
            break;
            
        case '/':
            if (b != 0.0) {
                printf("%g\n", a / b);
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