/*String copy:: 24.String copy using pointer */
#include<stdio.h>
int main(){
	char src[50];
	char dest[50];
	char *p = src;
	char *q = dest;

	printf("Enter string:");
	scanf("%s", src);
	while(*p != '\0'){
		*q = *p;
		p++;
		q++;
	}
	*q = '\0';
	printf("Copied string:%s\n",dest);
	return 0;
}



