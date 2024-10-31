//Write a program to input any number and check whether it is palindrome or not(using do-while loop) 
#include<stdio.h>
int main(){
    int a;
    printf("enter any number: ");
    scanf("%d",&a);
    int rev_a=0;
    int copy_a=a;
    do{
        int digit=a%10;
        rev_a=rev_a*10+digit;
        a/=10;
    }while(a);
    rev_a==copy_a?printf("Palindrome"):printf("Not a palindrome");
    return 0;
}