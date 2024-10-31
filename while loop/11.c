//Write a program to input any number and count the number of factors of that number.(using while loop) 
#include<stdio.h>

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int count=0;
    int i=1;
    while (i<=n)
    {
        if(n%i==0){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}
    