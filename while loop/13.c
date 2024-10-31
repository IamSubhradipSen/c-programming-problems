//write a program to input lower limit and upper limit and print the factorial of each number.(using while loop) 
#include<stdio.h>

int main(){
    int ll,ul;
    printf("Enter the lower limit and upper limit: ");
    scanf("%d%d",&ll,&ul);
    while(ll<=ul){
        unsigned long long int fact=1;
        int i=ll;
        while(i>1){
            fact*=i;
            i--;
        }
        printf("Factorial of %d is %u\n",ll,fact);
        ll++;
    }
    return 0;
}