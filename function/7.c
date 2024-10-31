//Write a program to input any number and check whether it is even or odd using function call by value with return.
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
    if(n%2==0){
        printf("even\n");
    }
    else {
        printf("odd\n");
    }
}