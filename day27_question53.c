/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*                   */


#include<stdio.h>
int main(){
    //for first 5 line
    for(int i=9;i>=1;i--){
        if(i%2!=0){
        for(int j=i;j<=9;j++){
            printf("*");
        }
    
        printf("\n");
    }
}

    //for last 4 lines
     for(int i=1;i<=7;i++){
        if(i%2!=0){
        for(int j=i;j<=7;j++){
            printf("*");
        }
        printf("\n");
    }
}
    

    
    return 0;
}