/**Recussion_Bitwixse:: 36.swap using XOR */
#include<stdio.h>
int main(){
    int num1;
    int num2;
    printf("Enter num1,num2:");
    scanf("%d %d",&num1,&num2);
    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;

    printf("The swap is num1:%d num2:%d is:",num1,num2);
    return 0;
}