// Find the maximum and minimum element in an array.

#include<stdio.h>
int main(){
    int n,max,min;
    printf("number of elements in array=");
    scanf("%d",&n);
    int arr[n];

    //input elements of array
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

//finding maximum
max=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }

}
printf("maximum=%d\n",max);

//finding minimum
min=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
printf("minimum=%d",min);
return 0;
}



