#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of 'n' : ");
    scanf("%d",&n);
    int i=1;
    do{
        printf("%d\n",i++);
    }while(i<=n);
    return 0;
}