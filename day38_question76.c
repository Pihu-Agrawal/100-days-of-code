// Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include<stdio.h>
int main(){
    int r,c,sym=1;
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
     //checking if symmetric or not
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i!=j){
                if(matrix[i][j]!=matrix[j][i]){
                    sym=0;
            }
        }
    }
}
if (sym==1){
    printf("matrix is symmetric");
}
else{
    printf("matrix is not symmetric");
}
return 0;
    
}
        


        