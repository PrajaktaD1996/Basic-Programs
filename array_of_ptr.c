/*Pointer_Memeory 26.Array of pointers */

/*
  str[] = "hello";
  *p = str;

  doesnt take place in case of int

  */
#include<stdio.h>
int main(){
        int a = 1,b=2,c=3;
	int *p[] = {&a,&b,&c};
	for(int i=0;i<3;i++)
		printf("%d ",*p[i]);
	return 0;
}

