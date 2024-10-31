//Write a program to input three numbers and find the smallest one (using a logical operator) using function call by value with return.
#include<stdio.h>

int check_smallest(int a,int b,int c){
    if(a<b && a<c){
        return a;
    }else if (b<a&&b<c){
        return b;
    }else{
        return c;
    }
}

int main(){

    int num1;
    printf("enter any num1: ");
    scanf("%d",&num1);

    int num2;
    printf("enter any num2: ");
    scanf("%d",&num2);

    int num3;
    printf("enter any num3: ");
    scanf("%d",&num3);

    printf("%d is the smallest numebr",check_smallest(num1,num2,num3));

    return 0;
}