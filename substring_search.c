/*Array_string: Substring search*/
#include<stdio.h>
int main(){
	char main[20];
	char search[20];
	int i,j,found=0;
	printf("Enter main string:");
	scanf("%s",main);

	printf("Enter a string to be searched:");
	scanf("%s",search);


	for(i=0;main[i]!='\0';i++){
		for(j=0;search[j]!='\0';j++)
		{
			if(main[i+j]!=search[j])
				break;
		}
	if(search[j]=='\0'){
		found =1;
		break;
	}}
if(found)
	printf("found!");
else
 printf("not found!");
return 0;

}


	

