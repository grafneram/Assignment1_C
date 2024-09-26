//Ashley Grafner
//9/11/2024
//Calculator code, which allows +, -, * and / operations

#include <stdio.h>

int main() {
    //initialize variables
    char operator;
    double num1, num2, result;
    int valid_operator = 0;

    while (!valid_operator) { // Loop until a valid operator is entered
        // Take user input for the operation
        printf("Enter an operator you want to use (+, -, *, /): ");
        scanf(" %c", &operator);  // Space before %c to ignore any whitespace

        // Check if the operator is valid
        if (operator == '+' || operator == '-' || operator == '*' || operator == '/') {
            valid_operator = 1;  // Valid operator entered
        } else {
            printf("Invalid operator. Please try again.\n");
        }
    }

    // Take user inputs for the two different numbers
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform the operation based on the user input
    switch (operator) {
        case '+': ///addtion case
            result = num1 + num2;
        printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;

        case '-': //subtraction case
            result = num1 - num2;
        printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
        break;

        case '*': //multiplication case
            result = num1 * num2;
        printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
        break;

        case '/': //division case

                if (num2 != 0.0) { // Makes sure we are NOT dividing by 0, otherwise errors
                    result = num1 / num2;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
        break;

        default: //default case if the user had entered something other than a number
            printf("Error: Invalid number entered.\n");
        break;
    }
    return 0;
}
