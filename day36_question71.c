//Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include<stdio.h>
int main(){
    int r,c;
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
    //printing matrix
    printf("matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}


