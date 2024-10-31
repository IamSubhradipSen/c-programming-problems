//Write a program to input any number and find the sum of the digits of that number until you get a single digit.(using do-while loop)

#include<stdio.h>

int main(){
    int n;
    printf("enter any number: ");
    scanf("%d",&n);
    int digit =0,i=1;
    do{
        digit+=i;
        i++;
    }while(n)
}