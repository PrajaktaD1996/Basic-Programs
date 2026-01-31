/*Array_Strings 17.Count vowels and consonenets in the string*/
#include<stdio.h>
#include<string.h>
int main(){
	char st[50];
	int cnt_v=0,cnt_c=0;
	printf("Enter string:");
	scanf("%s",st);

	for(int i=0;st[i]!='\0';i++){
		if(st[i]=='a'||st[i]=='e'||st[i]=='o'||st[i]=='u'||st[i]=='i'||st[i]=='A'||st[i]=='E'||st[i]=='O'||st[i]=='I'||st[i]=='U')
			cnt_v++;
		else if((st[i] >= 'a' && st[i] <= 'z') ||
                 (st[i] >= 'A' && st[i] <= 'Z'))
			cnt_c++;
	
	}
	printf("count of vowel:%d",cnt_v);
	printf("count of consonent:%d",cnt_c);
	return 0;

}
