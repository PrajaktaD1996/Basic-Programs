/*Pointer_Memory : 27.Structure using pointer*/
#include<stdio.h>
#include<string.h>
struct student{
	int roll;
	char name[20];
};	
int main(){
	struct student s1  = {1,"abc"};
        struct student *ptr;
        ptr = &s1;
        printf("Roll:%d,Name:%s\n",ptr->roll,ptr->name);
        return 0;
}	
