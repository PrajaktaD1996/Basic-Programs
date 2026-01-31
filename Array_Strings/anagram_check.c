/*Array_string 18.Anagram check*/
/*Theory: the string are said to be anagaram of they have same charachets and same frequency*/
#include<stdio.h>
int main(){
	char s1[50],s2[50];
	int cnt1[26]={0},cnt2[26]={0}; //this line is important
	printf("Enter 1st string:");
	scanf("%s",s1);
	printf("Enter 2nd string:");
	scanf("%s",s2);

	for(int i=0;s1[i]!='\0';i++)
		cnt1[s1[i]-'a']++;
	for(int i =0;s2[i]!='\0';i++)
		cnt2[s2[i]-'a']++;
	for(int i=0;i<26;i++){
		if(cnt1[i]!=cnt2[i]){
			printf("Not anagram!");
			return 0;
		}
	}
	printf("anagram!");
	return 0;
}


	

