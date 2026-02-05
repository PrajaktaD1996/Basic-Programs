/**recurrsion_Bitwise :: 35.Check power of two(2) i.e if the number is 1,2,4,8,32,64,so on or not! */
#include<stdio.h>
int main(){


    int num;
    printf("Enter the num:");
    scanf("%d",&num);

    if((num>0)&&(num&(num-1)))
    printf("It is not power of 2");

    else
    printf("It is power of 2");



    return 0;

}