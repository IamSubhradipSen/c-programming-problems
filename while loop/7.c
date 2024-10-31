//Write a program to calculate x^y without using any library function(using while loop) 
#include<stdio.h>
int main(){
    int x,y;
    printf("enter the two numbers: ");
    scanf("%d%d",&x,&y);
    int ans=1;
    int i=1;
    while (i<=y)
    {
        ans*=x;
        i++;
    }
    printf("%d",ans);
    return 0;
}