//Write a program to input any character and check either it is capital letter or it is a small letter or it is a number using function call by value with return.
#include<stdio.h>

void cheak(char ch);

int main(){
    char ch;
    printf("enter any number: ");
    scanf("%d",&ch);
    cheak(ch);
    return 0;
}

void cheak(char ch){
    if(ch>='A'&&ch<='Z'){
        printf("capital letter\n");
    }
    else if(ch>='a'&&ch<='z'){
        printf("small letter\n");
    }
    
}