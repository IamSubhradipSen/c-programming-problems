//Write a program to input any number and count the prime digits(using do-while) 
#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);

    int count_prime=0;
    do{
        int digit=n%10;
        int count=0,i=1;
        do{
            if(digit%i==0){
                count++;
            }
            i++;
        }while(i<=digit);
        if(count==2){
            count_prime++;
        }
        n/=10;
    }while(n);
    printf("%d is the number of prime digits.\n",count_prime);
    return 0;
}