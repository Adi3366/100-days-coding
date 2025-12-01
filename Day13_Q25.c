#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (op) {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            if (b == 0)
                printf("Error: Division by zero not allowed!\n");
            else
                printf("Result = %d\n", a / b);
            break;

        case '%':
            if (b == 0)
                printf("Error: Modulus by zero not allowed!\n");
            else
                printf("Result = %d\n", a % b);
            break;

        default:
            printf("Invalid Operator!\n");
    }

    return 0;
}

