/*Array_String:: string palindrom*/
/*Theory:: original_string = rev(string) i.e sts is palindorm */
#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int flag=1;
	int cnt=0;
	printf("Enter a string:");
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++) // string null char is used
		cnt++;
	for(int i=0;i<cnt/2;i++){
		if(str[i]!=str[cnt-1-i]){
			flag=0;
			break;}
		}
	if(flag)
	printf("palindrom_string!");
	else
	printf("Non plaindrom string!");
	return 0;
}


