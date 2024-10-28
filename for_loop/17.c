//Write a Program to input any number and check whether it is Armstrong Number (A three digit number in which the sum of cube of all digits is equal to the number. Eg:- 371=3^3+7^3+1^3) or not using for loop.
// math.h
// pow(x,y)
#include<stdio.h>
#include<math.h>

int main(){
    // 1. input
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);

    // 2. total number of digits
    int tot_dig=0;
    int copy_n=n;
    for(;n;n/=10){
        tot_dig++;
    }
    // sum
    int sum=0;
    int copy_copy_n=copy_n;
    for(;copy_n;copy_n/=10){
        int digit=copy_n%10;
        sum+=pow(digit,tot_dig);
    }

    //check
    sum==copy_copy_n?printf("Amrstrong Number"):printf("not a strong number");
}