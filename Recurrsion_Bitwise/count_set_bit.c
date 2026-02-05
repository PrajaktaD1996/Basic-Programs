/**Recussion_Bitwise: 34.Count set bit */
#include<stdio.h>

int main(){
    int num;
    int cnt =0;
    printf("Enter num:");
    scanf("%d",&num);

    while(num){
        num = num&(num-1); //counting no of set bit using bit wise
        cnt++;
    }

    printf("The count of set bit is:%d",cnt);

    }


