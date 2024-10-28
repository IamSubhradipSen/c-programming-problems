//Write a program to input any numbers and find the factorial of that number.(using for loop) 
#include<stdio.h>

int main(){
    int a;
    unsigned long long int mult=1;
    printf("enter the number: ");
    scanf("%d",&a);
    for(int i=a;i>0;i--){
        mult*=i;
    }
    printf("factorial=%u",mult);
    return 0;
}