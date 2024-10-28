//Write a Program to input an integer and find out the sum of all the digits of that number (using for loop).

#include<stdio.h>

int main(){
    int a;
    int sum = 0;
    printf("enter the number: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        // printf("%d\t",i);
        sum += i;
    }
    printf("%d",sum);
    return 0;
} 



