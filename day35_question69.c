//Find the second largest element in an array.

#include<stdio.h>
int main(){
    int n,max,sec_max;
    printf("number of elements in array=");
    scanf("%d",&n);
    int arr[n];

    //input elements of array
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    //finding second largest
    max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            sec_max=max;
            max=arr[i];
            
        }
    }
    printf("second largest=%d",sec_max);
    return 0;

}