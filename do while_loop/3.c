//Write a program to input any number and check it is strong number or not.(using do-while) 
#include<stdio.h>
int main(){
    int n;
    printf("Entetr any numebr: ");
    scanf("%d",&n);
    int copy_n=n;
    int sum=0;
    do {
        int digit =n%10;    
        int i=1;
        int fact=1;
        do{
            fact*=i;
            i++;
        } while (i<=digit);
        sum+=fact;
        n/=10;
    } while(n);
    sum==copy_n?printf("Strong Number"):printf("Not a strong number");
    return 0;
}