/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    *       */

#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        //for printing space
        for(int j=1;j<i;j++){
            printf(" ");
        }
        //for printing stars
        for(int j=i;j<=5;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
