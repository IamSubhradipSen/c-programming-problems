//Write a program to input any number and print the multiplication table of that number.(using while loop) 
#include<stdio.h>

int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    int i=1;
    while(i<=10){
        a*=i;
         i++;
         printf("%d*%d=%d\n",a,i,a*i);
        //i++;
    }
   // printf("%d*%d=%d",&a,&i,a*i);
    return 0;
}