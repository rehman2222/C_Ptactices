#include <stdio.h>
#include <math.h>

int main() {
    double a, b, result;
    int choice;

    printf("Simple Calculator\n");
    printf("=================\n");
    printf("Available operations:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Logarithm (base 10)\n");
    
    printf("Enter the first operand: ");
    scanf("%lf", &a);
    printf("Enter the second operand: ");
    scanf("%lf", &b);

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            if (b == 0) {
                printf("ERROR: Division by zero is not allowed.\n");
                return 1; // Exit with an error code
            }
            if (a <= 0 || b <= 0) {
                printf("ERROR: Both operands must be positive for division.\n");
                return 1; // Exit with an error code
            }
            result = a / b;
            break;
        case 5:
            if (a <= 0 || b <= 0) {
                printf("ERROR: Both operands must be positive for logarithm.\n");
                return 1; // Exit with an error code
            }
            result = log(a) / log(b);
            break;
        default:
            printf("ERROR: Invalid choice. Please choose a valid operation (1-5).\n");
            return 1; // Exit with an error code
    }

    printf("Result: %.2lf\n", result);

    return 0; // Exit successfully
}

