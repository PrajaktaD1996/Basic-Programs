/*BASIC:: 7.Prime no check*/
#include<stdio.h>
int main()
{
	int num,prime=1;
	printf("Enter num:");
	scanf("%d",&num);
	for(int i=2;i*i<=num;i++){
		if(num%i==0)
			prime=0;
			break;}
         if(prime)
		 printf("is prime!");
	else
		printf("is not prime!");
        
	return 0;
	
}


		

