/*Pointers_Memory 21.Swap using pointers*/
#include<stdio.h>

void swap(int *n1,int *n2){
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;

}
int main(){
	int num1,num2;
	printf("Enter two nums:");
	scanf("%d %d",&num1,&num2);
	swap(&num1,&num2);
	printf("The swapped num1:%d num2:%d",num1,num2);
	return 0;
}
	

