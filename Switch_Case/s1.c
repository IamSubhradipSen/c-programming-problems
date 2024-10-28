// Write a program to input any character and check whether it is a vowel or not (using a switch case).
#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    switch(ch){
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("It is a vowel");
            break;
        default:
            printf("It is not a vowel.");
    }
    return 0;
}