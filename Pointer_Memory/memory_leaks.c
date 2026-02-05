#include<stdio.h>
#include<stdlib.h>
int main(){
    int * ptr = malloc(5*sizeof(int));
    ptr[0] = 10;
    free(ptr);
    return 0;

    /*As we are not freeng the pointe, so memeory leak is going to happnen, to avaoid this condition, 
    we use free ptr before return */
}