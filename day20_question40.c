// Write a program to find the 1’s complement of a binary number and print it.
#include<stdio.h>
int main(){
    char binary[100];
    printf("enter the binary number=");
    scanf("%s",binary);
    for(int i=0; binary[i] != '\0' ;i++){
        if(binary[i]=='1'){
            binary[i]='0';
        }
        else {
            binary[i]='1';
        }
    }
    printf("complement=%s",binary);
    return 0;
}