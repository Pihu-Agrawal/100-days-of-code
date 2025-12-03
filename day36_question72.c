//Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include<stdio.h>
int main(){
    int r,c,sum=0;
    printf("enter the number of row=");
    scanf("%d",&r);
    printf("enter the number of column=");
    scanf("%d",&c);

    int matrix[r][c];//declaring matrix of r row and c column

    //input the elements of matrix.
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        printf("enter matrix[%d][%d]=",i,j);
        scanf("%d",&matrix[i][j]);
        }
    }
    //adding the elements of the matrix
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=sum+matrix[i][j];
        }
    }
    //printing the sum of the elements of the matrix
    printf("sum=%d",sum);

}