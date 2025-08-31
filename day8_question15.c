//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
#include<math.h>
int main(){
    printf("enter a character=");
    char l;
    scanf("%s",&l);
    if(l>='a' && l<='z'){
        printf("lowercase alphabet");
    }
    else if(l>='A'&& l<='Z'){
        printf("uppercase alphabet");
    }
    else if(l>='0' && l<='9'){
        printf("digit");
    }
    else{
        printf("special character");
    }
    return 0;
}


    