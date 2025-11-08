//Reverse an array without taking extra space.

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
    //array before reversing
    printf("before reversing:");
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    //array after reversing
    printf("\nafter reversing:");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;

}