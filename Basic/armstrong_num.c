/*BASIC: 4.Check for Armstrong number*/
/*Threory: cube of sum of the digits is the number itself=> Ex: 1^3 + 5^3 +3^3 = 153 ::Armstrong */
#include<stdio.h>
int main(){
	int num;
	printf("Enter num:");
	scanf("%d",&num);
	int org = num;
	int rem, sum=0;
	while(num!=0){
		rem = num%10;
		sum = sum+rem*rem*rem; //we need sum of digits not reverse
		num = num/10;
	}
	printf("%d",sum);
	if(sum == org)
		printf("Armstrong!");
        else
		printf("Not Armstrong!");
	return 0;
}

