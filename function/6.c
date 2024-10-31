//Write a program to input any number and print “correct” if it is 10 else print “Incorrect” using function call by value with return.
#include<stdio.h>

void cheak(int a);

int main(){
    int a;
    printf("enter any number: ");
    scanf("%d",&a);
    cheak(a);
    return 0;
}

void cheak(int a){
    if(a==10){
        printf("correct\n");
    }
    else {
        printf("incorrect\n");
    }
}