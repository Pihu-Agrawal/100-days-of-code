// Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include<stdio.h>
int main(){
    int n,k;
    printf("number of elements in array=");
    scanf("%d",&n);
    int arr[n];

    //input elements of array
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter number of position to shift:");
    scanf("%d", &k);             
   
    // Print rotated array
    printf("rotated array:");
    for(int i = n - k; i < n; i++) {
        printf("%d ", arr[i]);    // last k elements
    }
    for(int i = 0; i < n - k; i++) {
        printf("%d ", arr[i]);    // first n-k elements
    }
    return 0;
}

