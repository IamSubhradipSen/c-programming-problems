//Write a program to print all two digit odd numbers in reverse order using call by value without return. 
#include<stdio.h>

void cheak(int i);

int main(){
    int i;
    
    cheak(i);
    return 0;
}

void cheak(int i){
    for(int i=99;i>=11;i-=2)
    {
        printf("%d\t",i);
    }
}