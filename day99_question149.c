//Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};
int main() {
    //dynamically allocate memory for a Student
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    //input student details
    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Roll No: ");
    scanf("%d", &s->roll_no);

    printf("Enter Marks: ");
    scanf("%d", &s->marks);

    //print student details
    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll_no, s->marks);

    //free allocated memory
    free(s);
    return 0;
}
