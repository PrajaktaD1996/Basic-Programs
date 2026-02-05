/**Recurrsion_Bitwize: : 37.Reversion String Using recurrsion */
#include<stdio.h>
#include<string.h>

void reverse(char str[],int start,int end){

    if(start>end)
    return;

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverse(str,start+1,end-1);
}


int main(){
    char str[20];
    printf("Enter a string:");
    scanf("%s",str);
    reverse(str,0,strlen(str)-1);
    printf("%s",str);
    return 0;


}