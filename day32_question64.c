// Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    char num[100];
    int freq[10] = {0};
    int maxFreq = 0, result = 0;

    // Input the number as a string
    printf("enter the number=");
    scanf("%s", num);

    // Count frequency of each digit
    for (int i = 0; num[i] != '\0'; i++) {
        int digit = num[i]-'0';
        freq[digit]++;
    }

    // Find the digit with the highest frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        }
    }

    // Print the result
    printf("%d", result);

    return 0;
}