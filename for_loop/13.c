//Write a program to input any number and check if it is perfect or not (factors’ sum)(using for loop)
#include<stdio.h>

int main(){
    int n;
    int sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
    for (int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    sum==n?printf("Perfect Number"):printf("Not a perfect number");
    return 0;
}