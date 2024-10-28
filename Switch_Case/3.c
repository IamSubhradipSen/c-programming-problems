//Write a program to input two integers and find their sum, difference, multiplication, division and modulus using a switch case. 
#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    printf("Which opeartion you want to do (+,-,*,/,%%): ");
    fflush(stdin);
    scanf("%c",&ch);
    switch(ch){
        case '+':
            printf("%d + %d = %d\n",a,b,a+b);
            break;
        case '-':
            printf("%d - %d = %d\n",a,b,a-b);
            break;
        case '*':
            printf("%d * %d = %d\n",a,b,a*b);
            break;
        case '/':
            printf("%d / %d = %d\n",a,b,a/b);
            break;
        case '%':
            printf("%d %% %d = %d\n",a,b,a%b);
            break;
        default:
            printf("Invalid Input");

     }
     return 0;
}
       