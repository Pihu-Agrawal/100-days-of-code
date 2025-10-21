/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*          */


#include<stdio.h>
int main(){
    //for first 3 line
    for(int i=5;i>=1;i--){
        if (i%2!=0){
        
        for(int j=i;j<=5;j++){
            
            printf("*");
            printf("\n");
        }
    }
    
        printf("\n");
    }

    //for last 2 line
    for(int i=3;i>=1;i--){
        if (i%2!=0){
        
        for(int j=i;j>=1;j--){
            
            printf("*");
            printf("\n");
        }
    }
    
        printf("\n");
    }
    
    
    return 0;
}
