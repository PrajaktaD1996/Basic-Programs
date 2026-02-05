/*Reccusion_Bitwize 32.binary to decimal  */
#include<stdio.h>
int bintodec(int n){

    if(n==0)
    return 0;

    return (n%10) +2 * bintodec(n/10);
}
int main(){

    int bin;
    printf("Enter bin numer:");
    scanf("%d",&bin);
    printf("decimal =%d",bintodec(bin));
    return 0;
}