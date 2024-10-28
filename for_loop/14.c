//Write a program to input any number and check if it is a strong number (digits’ factorials’ sum is equal to that number) or not using for loop.
#include<stdio.h>
int main(){
    int n;
    printf("Entetr any numebr: ");
    int sum=0;
    scanf("%d",&n);
    int copy_n=n;
    for(;n;n/=10){
        int digit=n%10;
        int fact=1;
        for(int i=1;i<=digit;i++){
            fact*=i;
        }
        sum+=fact;
    }
    sum==copy_n?printf("Strong Number"):printf("Not a strong number");
    return 0;
}