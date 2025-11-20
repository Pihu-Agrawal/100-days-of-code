//Delete an element from an array.
#include<stdio.h>
int main(){
    int n,pos;
    printf("number of elements in array=");
    scanf("%d",&n);
    int arr[n];

    //input elements of array
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the position(index) of element you want to delete:");
    scanf("%d",&pos);
    int arrnew[n-1];
    for(int i=0;i<n-1;i++){
        if(i<pos){
            arrnew[i]=arr[i];
        }
        else if(i==pos){
            arrnew[i]=arr[i+1];
        }
        else if(i>pos){
            arrnew[i]=arr[i+1];
        }

    }
    printf("new array:");
    for(int i=0;i<n-1;i++){
        printf("%d ",arrnew[i]);
    }
    return 0;
    
}
