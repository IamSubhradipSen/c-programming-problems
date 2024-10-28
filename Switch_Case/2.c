// Write a program to input any number and print the corresponding month using a switch case.

#include<stdio.h>
int main(){
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);

    switch(a){
        case 1:
            printf("january");
            break;
        case 2:
            printf("february");
            break;
        case 3:
            printf("march");
            break;
        case 4:
            printf("april");
            break;
        case 5:
            printf("may");
            break;
        case 6:
            printf("june");
            break;
        case 7:
            printf("july");
            break;
        case 8:
            printf("aug");
            break;
        case 9:
            printf("septembar");
            break;
        case 10:
            printf("octobor");
            break;
        case 11:
            printf("nov");
            break;
        case 12:
            printf("decembor");
            break;
        default:
            printf("none");
    }
 return 0;
}