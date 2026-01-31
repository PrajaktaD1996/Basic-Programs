/*Pointer_Memory:: 25.Pointer to array*/
#include<stdio.h>
int main(){
	int ar[5] = {1,2,3,4,5};
	int (*p)[5];

	p = &ar;
	printf("%d\n",(*p)[0]);
	printf("%d\n",(*p)[1]);

	return 0;
}

