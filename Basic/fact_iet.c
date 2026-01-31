/*BASIC::6. factorial_iterative*/
#include<stdio.h>
int main(){
	int num;
	int fact=1;
	printf("Enter num:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		fact = fact*i;

	}


	printf("fact=%d",fact);
	return 0;
}

