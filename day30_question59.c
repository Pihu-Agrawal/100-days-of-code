//Count even and odd numbers in an array.


#include<stdio.h>
int main(){
    int n,even=0,odd=0;
    printf("number of elements in array=");
    scanf("%d",&n);
    int arr[n];

    //input elements of array
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;

        }
        else{
            odd++;
        }
    }
    printf("even=%d\n",even);
    printf("odd=%d",odd);
    return 0;

}