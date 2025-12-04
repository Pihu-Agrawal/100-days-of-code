//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>

// Define enumeration for operations
enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Operation op;
    int choice, a, b;
    printf("Menu:\n");
    printf("0: ADD\n1: SUBTRACT\n2: MULTIPLY\n");
    printf("Enter your choice (0-2): ");
    scanf("%d", &choice);

    op = choice;

    //take two numbers as input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    //perform operation based on enum
    switch(op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
