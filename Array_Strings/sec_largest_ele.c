/*Array_String:: 2.Second Largest Elemet*/
#include<stdio.h>
int  main(){
	int ar[20];
	int n,temp;
	printf("Enter size of array:");
	scanf("%d",&n);

	printf("Enter the ele of array:");
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}

	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
                      if(ar[j]>ar[j+1]){
			      temp = ar[j];
			      ar[j] = ar[j+1];
			      ar[j+1] = temp;
		      }
		  }
	}

	for(int i=0;i<n;i++)
		printf("%d ",ar[i]);


	printf("The second largest elemet:%d",ar[n-2]);
	return 0;
}

