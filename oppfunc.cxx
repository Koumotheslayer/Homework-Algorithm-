#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int main() {
    int choice;
    float num1, num2, result;
    char continueCalculation;

    do {
        printf("Calculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice (1-4): ");

        
        while (scanf("%d", &choice) != 1 || choice < 1 || choice > 4) {
            printf("Invalid choice! Please enter a number between 1 and 4: ");
            while (getchar() != '\n');
        }
        printf("Enter two numbers: ");
        while (scanf("%f %f", &num1, &num2) != 2) {
            printf("Invalid input! Please enter two numbers: ");
            while (getchar() != '\n');
        }
        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = divide(num1, num2);
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero.\n");
                }
                break;
        }

        printf("Do you want to perform another calculation? (y/n): ");
        while (getchar() != '\n');
        scanf("%c", &continueCalculation);

    } 
    while (continueCalculation == 'y' || continueCalculation == 'Y');

}