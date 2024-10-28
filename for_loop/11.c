//Write a program to calculate x^y without using any library function.(using for loop) 
#include<stdio.h>
int main(){
    int x,y;
    printf("enter the two numbers: ");
    scanf("%d%d",&x,&y);
    int ans=1;
    for(int i=1;i<=y;i++){
        ans*=x;
    } 
    printf("%d",ans);
    return 0;
}