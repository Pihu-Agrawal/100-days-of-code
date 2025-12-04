// Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256 //ASCII characters

int main() {
    char s[] = "abcabcbb"; //change input string here
    int n = strlen(s);

    int last_index[CHAR_RANGE];
    for (int i = 0; i < CHAR_RANGE; i++)
        last_index[i] = -1; //initialize all characters as not seen

    int max_len = 0;
    int start = 0; //start index of current substring

    for (int i = 0; i < n; i++) {
        if (last_index[(int)s[i]] >= start) {
            start = last_index[(int)s[i]] + 1;
        }
        last_index[(int)s[i]] = i;
        int curr_len = i - start + 1;
        if (curr_len > max_len)
            max_len = curr_len;
    }
    printf("%d", max_len);

    return 0;
}
