//Write a program to print all two digit odd numbers in reverse order.(using for loop) 
#include<stdio.h>
int main(){
    int i;
    /* for(int i=99;i>=11;i--)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
            
        }        
    } */
    for(int i=99;i>=11;i-=2){
        printf("%d\t",i);
    }
    return 0;
}