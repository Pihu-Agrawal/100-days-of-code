#include<stdio.h>
//Search for an element in an array using linear search.

int main(){
      int n,num,found=-1;
    printf("number of elements in array=");
    scanf("%d",&n);
    int arr[n];

    //input elements of array
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    //input the element to search
    printf("enter the element you want to search in array=");
    scanf("%d",&num);

   //searching the element
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            found=i;
        }
    }
    if (found==-1){
    printf("not found");
    }
    else
    printf("found at index %d",found);
    return 0;

}
