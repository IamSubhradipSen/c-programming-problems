//Write a Program to multiply two positive numbers without using * operator.
#include<stdio.h>

int main(){
    int a;
    int add=0;
    printf("enter first number:\n");
    scanf("%d\n",&a);
    int b;
    printf("enter second number:\n");
    scanf("%d\n",&b);

    for(int i=0;i<b;i++){
        add+=a;  
        printf("%d",&a);
    }
    printf("%d",&a);
    return 0;
}