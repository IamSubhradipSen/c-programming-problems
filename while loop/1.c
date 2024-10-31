//Write a program to print the first ‘n’ natural number in ascending and descending order.
#include<stdio.h>


int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int i=1;
    while (i<=n)
    {
        printf("%d\t",i);
        i++;
    }
   
    return 0;
}
int main(){
     int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int i=n;
    while (i<=1)
    {
        printf("%d\t",i);
        i--;
    }
   
    return 0;
}