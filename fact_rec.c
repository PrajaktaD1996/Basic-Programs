/*BASIC:: 6.factorial_rec */
#include<stdio.h>

int fact(int num){
	
	if(num>1)
		return num*fact(num-1);
       	
}
int main(){
	int num;
	printf("Enter the num:");
	scanf("%d",&num);
	int factorial  = fact(num);
       printf("fact:%d",factorial);
       return 0;
}       

