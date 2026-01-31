/*Array_string:: 4.Remove duplicates from array*/
/*need optimisation*/
#include<stdio.h>
int main(){
	int n;
	int ar[30];
	printf("Enter size of array:");
	scanf("%d",&n);
        printf("Enter ele of array:");
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}

	for(int i =0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ar[i]==ar[j]){
				for(int k= j;k<n-1;k++)
					ar[k] = ar[k+1];
				n--;
				j--;
			}
		}
	}
 printf("Array after renmoving duplicates:");
 for(int i=0;i<n;i++){
	printf("%d ",ar[i]);}
return 0;
}
