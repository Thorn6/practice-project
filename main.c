#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int addTwoInts(int a, int b, int *answer) {
    *answer = a + b;
}

int minusTwoInts(int a, int b, int *answer) {
    *answer = a - b;
}

int multiplyTwoInts(int a, int b, int *answer) {
    *answer = a * b;
}

int divideTwoInts(int a, int b, int *answer) {
    *answer = a / b;
}

int performOperation(int a, int b, int *answer) {

    // Initialize variables
    char operation[4];
    char operationCharacter;


    printf("Add, Minus, Multiply, or Divide? (add, min, mul, div): ");

    while (strcmp(operation, "add") != 0 &&
           strcmp(operation, "min") != 0 &&
           strcmp(operation, "mul") != 0 &&
           strcmp(operation, "div") != 0)
    {

        // Get the operation from the user
        scanf("%3s", operation);

        // Figure out what operation it is, and call the function
        if (strcmp(operation, "add") == 0) {
            addTwoInts(a, b, &answer);
            operationCharacter = '+';
        } else if (strcmp(operation, "min") == 0) {
            minusTwoInts(a, b, &answer);
            operationCharacter = '-';
        } else if (strcmp(operation, "mul") == 0) {
            multiplyTwoInts(a, b, &answer);
            operationCharacter = '*';
        } else if (strcmp(operation, "div") == 0) {
            divideTwoInts(a, b, &answer);
            operationCharacter = '/';
        } else {
            printf("You typed %s, please type one of the following: (add, min, mul, div)\n", operation);
        }

    }

    // Output the final result
    printf("%d %c %d = %d", a, operationCharacter, b, answer);
}

int main()
{
    // Initialize variables
    int a;
    int b;
    int answer;

    // Get the value of a using scanf
    printf("Enter first number: ");
    scanf("%d", &a);

    // Get the value of b using scanf
    printf("Enter second number: ");
    scanf("%d", &b);

    // Perform the operation
    performOperation(a, b, &answer);

    return 0;
}
