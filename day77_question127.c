//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }
    FILE *output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(input);
        return 1;
    }
    char ch;
    while ((ch = fgetc(input)) != EOF) {
        fputc(toupper(ch), output);
    }
    fclose(input);
    fclose(output);
    printf("Conversion to uppercase completed. Check output.txt\n");

    return 0;
}
