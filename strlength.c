/*Array_String:: string length without strlen(), inbuild lib function*/
#include<stdio.h>
#include<strings.h>
int main(){
	int n;
	char word[] = "length";
        int i =0;
	int cnt=0;
	while(word[i]!='\0'){
            cnt++;
	    i++;
	}

	printf("Count=:%d",cnt);
	return 0;
}

