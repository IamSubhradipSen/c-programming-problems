//Write a program to input any number and the factors of that number(using while loop) 
#include<stdio.h>

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int i=1;
    while (i<=n)
    {  
       if(n%i==0){ 
        printf("%d\t",i);
        }
        i++;
    }
    return 0;
    
}