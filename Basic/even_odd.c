/*BASIC ::1.Even-Odd */
/*Note:Rather than implimenting i%2==0, we are using i=i+2 - optimised */
#include<stdio.h>
int main(){
	printf("ODD:");
	for(int i=1;i<=100;i+=1)
		printf("%d,",i);
	printf("\nEVEN:");
	for(int i=2;i<=100;i+=2)
		printf("%d,",i);
	return 0;
}

