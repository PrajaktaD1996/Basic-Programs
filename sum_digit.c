/*BASIC:: 10.sum of digits*/
#include<stdio.h>
int main(){
	int num, r;
	int sum =0;
	printf("Enter the num:");
	scanf("%d",&num);
	while(num!=0){ //never intialise in while
		r = num%10;
                sum = sum+r;
	        num = num/10;
	}
        printf("The sum of digit:%d",sum);
return 0;
}

