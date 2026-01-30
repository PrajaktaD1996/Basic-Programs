/*Array_String :: 2. Revrse an array*/
#include<stdio.h>
int main(){
	int n,temp;
	int ar[20];
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter ele of array:");
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);}
	for(int i=0;i<n/2;i++){
		temp = ar[i];
		ar[i]=ar[n-i-1];
		ar[n-i-1]= temp;
	}

	printf("The reverse array:");
	for(int i=0;i<n;i++)
		printf("%d ",ar[i]);
	return 0;
}


