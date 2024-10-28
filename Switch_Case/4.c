//Write a Program to input a number & print the corresponding Week day using a switch case. (week starts on Sunday)

#include<stdio.h>
int main(){
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);

    switch(a){
        case 1:
            printf("sunday");
            break;
        case 2:
            printf("monday");
            break;
        case 3:
            printf("tuisday");
            break;
        case 4:
            printf("wednesday");
            break;
        case 5:
            printf("thusday");
            break;
        case 6:
            printf("friday");
            break;
        case 7:
            printf("saturday");
            break;
            default:
            printf("none");
    }
 return 0;
}