//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>

int main() {
    int nums[] = {1, 3, 3, 4};  
    int n = sizeof(nums) / sizeof(nums[0]);

    int xor_all=0;
    int xor_array=0;

    //XOR all elements in the array
    for (int i = 0; i < n; i++)
        xor_array ^= nums[i];
    //XOR numbers from 0 to n-2 (since one element repeats)
    for (int i = 0; i <= n - 2; i++)
        xor_all ^= i;

    int repeated = xor_array ^ xor_all;
    printf("%d", repeated);

    return 0;
}
