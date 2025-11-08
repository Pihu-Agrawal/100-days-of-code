//Merge two arrays.

#include<stdio.h>
int main(){
    int n1,n2;
    printf("number of elements in array1=");
    scanf("%d",&n1);
    int arr1[n1];

    //input elements of array 1
    printf("enter the elements of array1:\n");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);

    }
     printf("number of elements in array2=");
    scanf("%d",&n2);
    int arr2[n2];

    //input elements of array 2
    printf("enter the elements of array2:\n");
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);

    }
    //printing merged array
    printf("merged array:");
    for(int i=0;i<n1;i++){
        printf("%d ",arr1[i]);
    }
    for (int i=0;i<n2;i++){
        printf("%d ",arr2[i]);
    }
    return 0;

}