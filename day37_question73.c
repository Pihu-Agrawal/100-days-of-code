//Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include<stdio.h>
int main(){
    int r,c,sum;
    printf("enter the number of row=");
    scanf("%d",&r);
    printf("enter the number of column=");
    scanf("%d",&c);

    int matrix[r][c];//declaring matrix of r row and c column
    int arr[r];//declaring array of r elements

    //input the elements of matrix.
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        printf("enter matrix[%d][%d]=",i,j);
        scanf("%d",&matrix[i][j]);
        }
    }
    //adding each row and storing in array
    for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
        sum=sum+matrix[i][j];
        }
        arr[i]=sum;
    }
    //printing the array
    printf("array:");
    for(int i=0;i<r;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}