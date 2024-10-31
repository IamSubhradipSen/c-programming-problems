//Write a program to input any number and replace all the prime digits by 1(using do-while) 
#include<stdio.h>
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n); //12345 -> 11141
    int new_n=0;
    do{
        int digit=n%10;
        int count=0,i=1;
        do{
            if(digit%i==0) count++;
            i++;
        }while(i<=digit);
        if(count==2){
            digit=1;
        }
        new_n=new_n*10+digit;

        n/=10;
    }while(n);
    int reverse_new_n=0;
    do{
        reverse_new_n=reverse_new_n*10+(new_n%10);
        new_n/=10;
    }while(new_n);
    printf("%d\n",reverse_new_n);
}