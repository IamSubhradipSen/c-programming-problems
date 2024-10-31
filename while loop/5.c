//Write a program to input lower limit and upper limit and print all the odd numbers in that range.(using while loop) 
#include<stdio.h>

int main(){
    int a;
    int b;
    printf("enter the lower limit: ");
    scanf("%d",&a);
    printf("enter the upper limit: ");
    scanf("%d",&b);
    int i=a;
    while(i<=b){
       if(i%2!=0){ 
        //i++;
        printf("%d\n",i);
        }
         i++;
       
    }
     return 0;
}
