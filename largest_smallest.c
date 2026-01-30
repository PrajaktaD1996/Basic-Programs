/*Array_string:: 1.Find Largest and smallest in array*/
/*Therory: need bubble sorting*/
#include<stdio.h>
int main(){
	int ar[20];
	int n,temp;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the ele of array:");
	for(int i=0;i<n;i++){
	scanf("%d",&ar[i]);}

	for(int i =0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(ar[j]>ar[j+1]) //sorting in ascending order 
		 	{ 
				temp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] = temp;
			}
		}
	}
        //for(int i =0;i<n;i++)       //will show sorted array
		//printf("%d ", ar[i]);
        printf("The largest:%d",ar[n-1]);
	printf("\nThe smallest:%d",ar[0]);
	return 0;
}



		

