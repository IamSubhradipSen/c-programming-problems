//Write a Program to input any Number and count the number of digits using for loop.
#include<stdio.h>

int main(){
    int n;
    int count=0;
    printf("enter the number: ");
    scanf("%d",&n);
    for ( ;n;n/=10){
        count++;
    }
    printf("total no =%d",count);
    return 0;
}