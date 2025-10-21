//Find the sum of array elements.

#include<stdio.h>
int main(){
    int n,sum=0;

    printf("number of elements in array=");
    scanf("%d",&n);
    int arr[n];

    //input elements of array
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    //adding the elements of array
    for(int i=0;i<n;i++){
        sum=sum+arr[i];

    }
    printf("sum=%d",sum);
    return 0;


}

