//Write a program to input ‘n’ and find the sum of n natural numbers.(using for loop)
#include<stdio.h>
int main(){
    int n;
    int sum =0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum += i;
    }
    printf("sum: %d",sum);
    return 0; 
}