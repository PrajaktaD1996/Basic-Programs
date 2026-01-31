/*BASIC: fibonacci series*/
/*Theory: series:: 0,1,1,2,3,5,8...., n1+n2=n3*/
#include<stdio.h>
int main(){
	int n1=0,n2=1;
	int terms;
	printf("Enter no of terms:");
	scanf("%d",&terms);
	printf("%d %d ",n1,n2);
	for(int i=0;i<terms-1;i++)
	{
		int n3 = n1+n2;
		printf("%d ",n3);
		n1 = n2;
		n2 = n3;
        }

	return 0;
}

