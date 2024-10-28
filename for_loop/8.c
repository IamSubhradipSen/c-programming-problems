//Write a program to input lower limit and upper limit and print all the odd numbers in that range.(using for loop) 
#include<stdio.h>

int main(){
    int a;
    int b;
    printf("enter the lower limit: ");
    scanf("%d",&a);
    printf("enter the upper limit: ");
    scanf("%d",&b);

    for(int i=a;i<=b;i++){
        if(i%2!=0){ 
        printf("%d\n",i);
    }
    }
    return 0;
}    