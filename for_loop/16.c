//Write a program to input any number and check it is prime or not.(using for loop)
#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int count_factors=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            count_factors++;
        }
    }
    count_factors==1?printf("Prime number"):printf("Not a prime number");
    return 0;
}

