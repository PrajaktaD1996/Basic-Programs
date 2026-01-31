/*BASIC:: 9.count digits of a number*/
#include<stdio.h>
int main(){
	int num;
	int cnt =0;
	printf("Enter num:");
       scanf("%d",&num);
       while(num!=0){
	int r = num%10;
       	cnt++;
	num = num/10;
       }
       printf("NO. of digits:%d",cnt);
 }
