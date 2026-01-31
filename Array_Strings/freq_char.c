/*Array_String :: *Frequency of Characters*/
#include<stdio.h>
#include<string.h>
int main(){
	char st[30];
	printf("Enter string;");
	scanf("%s",st);
	int count[26]={0};

	for(int i=0;st[i] !='\0';i++)
		count[st[i]-'a']++;
	printf("Charachter frequency:\n");
	for(int i=0;i<26;i++){
		if(count[i]!=0)
			printf("%c:%d\n",i+'a',count[i]);
	}
	return 0;
}


