//Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include<stdio.h>
int main(){
    int r,c,sum=0;
    printf("enter the number of row=");
    scanf("%d",&r);
    printf("enter the number of column=");
    scanf("%d",&c);

    int matrix[r][c];//declaring matrix of r row and c column
    int transpose[c][r];//declaring transpose matrix of c row and r column

    //input the elements of matrix.
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        printf("enter matrix[%d][%d]=",i,j);
        scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            transpose[j][i]=matrix[i][j];
        }
    }
    //printing the transpose matrix
    printf("transpose matrix:\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;

}
