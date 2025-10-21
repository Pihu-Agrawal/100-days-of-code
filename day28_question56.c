// Read and print elements of a one-dimensional array.

#include<stdio.h>
int main(){
    int n;
    printf("number of elements in array=");
    scanf("%d",&n);
    int arr[n];

    //input elements of array
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    //printing elements of array
    printf("array:");
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    return 0;

}