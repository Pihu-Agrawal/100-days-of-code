Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>

// Define Employee structure
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp;
    FILE *fp;
    //input employee details
    printf("Enter Name: ");
    scanf("%s", emp.name);

    printf("Enter ID: ");
    scanf("%d", &emp.id);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    //write employee data to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error: Cannot open file for writing.\n");
        exit(1);
    }

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("Employee data stored successfully.\n");

    //read employee data from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error: Cannot open file for reading.\n");
        exit(1);
    }
    struct Employee empRead;
    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    //display read data
    printf("Employee Data from file:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n", empRead.name, empRead.id, empRead.salary);

    return 0;
}
