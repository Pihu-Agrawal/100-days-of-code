//Count positive, negative, and zero elements in an array.
#include<stdio.h>
int main(){
    int n,pos=0,nev=0,zero=0;
    printf("number of elements in array=");
    scanf("%d",&n);
    int arr[n];

    //input elements of array
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            nev++;

        }
        else if(arr[i]>0){
            pos++;
        }
        else{
            zero++;
        }
    }
    printf("positive=%d\n",pos);
    printf("negitive=%d\n",nev);
    printf("zero=%d\n",zero);
    return 0;
    

}