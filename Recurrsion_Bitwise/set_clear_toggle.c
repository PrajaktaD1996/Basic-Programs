/*Recurrsion_Bitwise:: 33. Set,clear and toggle bit */
#include<stdio.h>

    int setBit(int n ,int pos){
        return  (n |(1<<pos));}
    int clearBit(int n, int pos){
        return (n & ~(1<<pos));}
    
    int toggleBit(int n,int pos){
       return (n ^(1<<pos));}

    
int main(){
    int n,pos;
    printf("Enter a numb & pos:");
    scanf("%d %d",&n, &pos);


    printf("\nsetBit: %d",setBit(n,pos));
    printf("clearBit:%d",clearBit(n,pos));
    printf("toggleBit: %d",toggleBit(n,pos));

    return 0;

}
    
    
    
