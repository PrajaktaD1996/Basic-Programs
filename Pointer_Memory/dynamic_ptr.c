/*Pointer & Memory : 22.Dynamic memory allocation*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	int n;
	printf("Enter no of elements:");
	scanf("%d",&n);
	ptr = (int*)malloc(n* sizeof(int));
	if(ptr==NULL){
		printf("Memeory allocation failed!");
		scanf("%d",&n);
	}
	printf("Enter the no. of elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&ptr[i]);
	}

	printf("You enetered following elements:");
	for(int i=0;i<n;i++){
		printf("%d ",ptr[i]);
	}

	free(ptr);
	return 0;
}

