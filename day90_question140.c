//Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>

// Define enum for gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define struct for a person
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;
    p.gender = MALE; 
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown gender\n");
    }

    return 0;
}
