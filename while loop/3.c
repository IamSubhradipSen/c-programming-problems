//Write a program to input any number and print the factorial of that number(using while loop) 
#include<stdio.h>

int main(){
    int a;
    unsigned long long int mult=1;
    printf("enter the number: ");
    scanf("%d",&a);
    while (a>1){
        mult*=a;
        a--;
        
    }
    printf("factorial=%u",mult);
    return 0;
}