//write a program to input lower limit and upper limit and print the factors of each number.(using while loop) 
#include<stdio.h>

int main(){
    int ll,ul,value;
    
    printf("Enter the lower limit and upper limit: ");
    scanf("%d%d",&ll,&ul);
    while(ll<=ul){
        int i=1;
        printf("\nFactors of %d: ",ll);
        while(i<=ll){
            if (ll%i==0){
                printf("%d  ",i);
            }
            i++;
        }
        ll++;
    }
    return 0;
}