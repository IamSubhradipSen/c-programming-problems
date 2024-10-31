//Write a program to input any number and check it is prime or not.(using while loop) 
#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int count_factors=0;
    int i=1;
    while (i<=sqrt(n))
    {
        if(n%i==0){
            count_factors++;
        }
        i++;
    }
    count_factors==1?printf("Prime number"):printf("Not a prime number");
    return 0;
    
}
