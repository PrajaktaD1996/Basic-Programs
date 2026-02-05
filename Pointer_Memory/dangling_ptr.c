/*Pointer_Memory:: 30.Dangling_ptr*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr = malloc(sizeof(int)); //dynamically allocated memeory
    *ptr = 25;//pointing a value 
    free(ptr); //then it is freed
   // printf("%d",*ptr);// when it is not pointing to any location = dangling pointer
    return 0;

}