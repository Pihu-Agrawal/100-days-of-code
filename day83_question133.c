//Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>

//define enumeration for months
enum Month {
    JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month month;
    month = FEB;

    switch (month) {
        case JAN: printf("January: 31 days\n"); break;
        case FEB: printf("February: 28 or 29 days\n"); break;
        case MAR: printf("March: 31 days\n"); break;
        case APR: printf("April: 30 days\n"); break;
        case MAY: printf("May: 31 days\n"); break;
        case JUN: printf("June: 30 days\n"); break;
        case JUL: printf("July: 31 days\n"); break;
        case AUG: printf("August: 31 days\n"); break;
        case SEP: printf("September: 30 days\n"); break;
        case OCT: printf("October: 31 days\n"); break;
        case NOV: printf("November: 30 days\n"); break;
        case DEC: printf("December: 31 days\n"); break;
        default: printf("Invalid month\n");
    }

    return 0;
}
