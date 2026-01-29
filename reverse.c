/* BASIC: 2.Reverse a number*/
#include<stdio.h>
int main(){

	int num,r;
	int sum=0;
	printf("Enter a num:");
	scanf("%d",&num);
	while(num!=0)          //remember num!=0
	{
		r = num%10;
		sum= sum*10+r; //remember about sum*10+r
		num = num/10;
	}
	printf("rev num:%d",sum);
     return 0;

}
		
