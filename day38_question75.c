//Add two matrices.
#include<stdio.h>
int main(){
    int r,c,sum=0;
    printf("enter the number of row=");
    scanf("%d",&r);
    printf("enter the number of column=");
    scanf("%d",&c);

    int matrix1[r][c];//declaring matrix 1 of r row and c column
    int matrix2[r][c];//declaring matrix 2 of r row and c column
    int add[r][c];//declaring addition matrix  of r row and c column

    //input the elements of matrix 1.
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        printf("enter matrix1[%d][%d]=",i,j);
        scanf("%d",&matrix1[i][j]);
        }
    }
    //input the elements of matrix 2.
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        printf("enter matrix2[%d][%d]=",i,j);
        scanf("%d",&matrix2[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            add[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    //printing addition matrix
    printf("addition matrix:\n");
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
    return 0;

}