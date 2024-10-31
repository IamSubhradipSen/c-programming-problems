//write a program to input lower limit and upper limit and print the no of factors of each number.(using while loop) 
#include<stdio.h>

int main(){
	int ll,ul;
	printf("Enter the lower limit and upper limit: ");
	scanf("%d%d",&ll,&ul);
	while(ll<=ul){
		int count=0,j=1;
		while(j<=ll){
			if(ll%j==0){
				count++;
			}
			j++;
		}
		printf("Number of factors of %d = %d\n",ll,count);
		ll++;
	}
}