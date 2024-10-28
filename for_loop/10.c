//Write a program to input any number and print twenty numbers in descending order from the number.(using for loop) 
 
#include<stdio.h>

int main(){
    int a;
    int b;
    printf("enter the first limit: ");
    scanf("%d",&a);
    printf("enter the second limit: ");
    scanf("%d",&b);

    for(int i=a;i>=b;i--){
           printf("%d\n",i);
        if (b-20)
        {
            printf("%d\n",&b);
            break;
        }
    }
    
    return 0;
   
}