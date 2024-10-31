//Write a program to input any number & print 20 numbers in descending order from that number.(using while loop) 
#include<stdio.h>

int main(){
    int a;
    printf("enter any number: ");
    scanf("%d",&a);
    int x=a-20;
    while (a>x){
        printf("%d\t",a--);
    }
    return 0;
}
    

