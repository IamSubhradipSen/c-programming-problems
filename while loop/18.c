//Write a program to input any number and check whether it is palindrome or not(using while loop) 
#include<stdio.h>
int main(){
    int n;
    printf("Enter any number:- ");
    scanf("%d",&n);
    int reverse_n=0;
    int copy_n=n;
    while(n){
        int digit=n%10;
        reverse_n=reverse_n*10+digit;
        n/=10;
    }
    reverse_n==copy_n?printf("Palindrome"):printf("Not a palindrome");
    return 0;
}
