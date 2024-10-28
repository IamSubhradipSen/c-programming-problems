//Write a program to input any number and the factors of that number.(using for loop) 
#include<stdio.h>

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\t",i);
        }
    }
    return 0;
}