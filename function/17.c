//Write a program to input ‘n’ and find the sum of n natural numbers using call by value with return
#include<stdio.h>

void cheak(int n);

int main(){
    int n;
    printf("enter any number: ");
    scanf("%d",&n);
    cheak(n);
    return 0;
}

void cheak(int n){
    int sum=0;
     for(int i=1;i<=n;i++)
     {
        sum += i;
     }
    printf("sum %d",sum);
}
