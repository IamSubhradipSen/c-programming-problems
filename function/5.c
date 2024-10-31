//Write a program to input any number and check whether it is positive or negative or zero using function call by value with return.
#include<stdio.h>

void cheak(int a);

int main(){
    int a;
    printf("enter any number: ");
    scanf("%d",&a);
    cheak(a);
    return 0;
}

void cheak(int a){
    if(a>0){
        printf("positive\n");
    }
    else if(a<0){
        printf("negative\n");
    }
    else{
        printf("zero\n");
    }
}