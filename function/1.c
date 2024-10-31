//Write a program to input two numbers and print the sum, difference, multiplication, division of those numbers using call by value with return. (use different functions for different operation)
 #include<stdio.h>

int add(int,int);
int sup(int,int);
int product(int,int);
int int_div(int,int);
float flt_div(int,int);
int mod(int,int);

int main(){
    int a,b;
    printf("enter two number: ");
    scanf("%d%d",&a,&b);

    int sum=add(a,b);
    printf("%d is the sum of (%d,%d)\n",sum,a,b);

    int diff=sup(a,b);
    printf("%d is the diff of(%d,%d)\n",diff,a,b);

    int mult=product(a,b);
    printf("%d is the mult of (%d,%d)\n",mult,a,b);

    int div=int_div(a,b);
    printf("%d is the div of (%d,%d)\n",div,a,b);

    int m=mod(a,b);
    printf("%d is the mod of (%d,%d)\n",m,a,b);

    float f=flt_div(a,b);
    printf("%0.2f is the flt_div of (%d,%d)\n",f,a,b);

    return 0;
}

int add(int x,int y){
    return x+y;
}

int sup(int x, int y){
    return x-y;
}

int product(int x,int y){
    return x*y;
}

int int_div(int x,int y){
    return x/y;
}

int mod(int x,int y){
    return x%y;
}


float flt_div(int x,int y){
    float z=(float)x/y;
    return z;
}