//Write a program to check if a person is eligible to vote in India  or not using function call by value with return.
#include<stdio.h>

void cheak(int age);

int main(){
    int age;
    printf("enter any age: ");
    scanf("%d",&age);
    cheak(age);
    return 0;
}

void cheak(int age){
    if(age>=18){
        printf("eligible to vote\n");
    }
    else {
        printf("not for eligible\n");
    }
}