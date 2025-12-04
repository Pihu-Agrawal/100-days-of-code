//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    char text[100];

    // Take filename from the user
    printf("Enter file name: ");
    scanf("%s", filename);

    // Open file in append mode
    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }
    //Clear input buffer before reading a line
    getchar();

    //Take text to append
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    //Remove newline character from fgets if present
    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n')
        text[len - 1] = '\0';

    //Append a newline and write text to file
    fprintf(fp, "\n%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
