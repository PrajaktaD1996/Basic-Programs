/*Basic: 8.LCM_GCD*/
#include<stdio.h>
int main(){
	int num1,num2;
	int temp;
	printf("Enter two no.s");
	scanf("%d %d",&num1,&num2);
	int x = num1;
	int y = num2;
	while(y!=0)
	{
		temp = y;
		y = x%y;
		x= temp;
	}

	int gcd = x;
	int lcm = (num1*num2)/gcd;
	printf("GCD=%d",gcd);
	printf("LCM=%d",lcm);
	return 0;
}

