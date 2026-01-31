/*BASIC: 3.Palindrom Number check*/
/*Theory: A palindrom num is a num in which rev_num == num*/
#include<stdio.h>
int main(){
	int num;
	printf("Input a num:");
	scanf("%d",&num);
	int rev_num = num; //remember insert in rev_num after inserting num value
	int sum=0,rem;
	while(num!=0){
		rem = num%10;
		sum = sum*10+rem;
		num = num/10;
	}
	if(rev_num == sum) //remember check with sum, num is reduced to zero
		printf("Palindrom!");
	else
		printf("Not Palindrom!");
	return 0;
}

