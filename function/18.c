//Write a program to input any numbers and find the factorial of that number using call by value with return. 
#include<stdio.h>

int fact(int);

int main(){
    int n;
    printf("enter any number: ");
    scanf("%d",&n);
    printf("%u is the factorial of %d\n",fact(n),n);
    return 0;
}

int fact(int n){
    unsigned long long int mult =1;
     for(int i=n;i>1;i--){
        mult*=i;
    }
    return mult;
}