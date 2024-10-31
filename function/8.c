//Write a program to input any year and check whether it is leap year or not using function call by value with return.
#include<stdio.h>

void cheak(int year);

int main(){
    int year;
    printf("enter any year: ");
    scanf("%d",&year);
    cheak(year);
    return 0;
}

void cheak(int year){
    if(year%4==0){
        printf("leapyear\n");
    }
    else {
        printf("not a leap year\n");
    }
}