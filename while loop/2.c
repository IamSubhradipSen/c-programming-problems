//Write a program to input any number ‘n’ and printf the sum of n natural numbers .(using while loop) 
#include<stdio.h>

int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    int sum = 0;
    int i=1;
    while(i<=a){
        sum +=i;
        i++;
    }
    printf("%d",sum);
    return 0;

}