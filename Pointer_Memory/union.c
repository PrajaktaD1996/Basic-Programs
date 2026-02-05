/*Pointer_Memory:: 28.Union.c*/

/*Note:: As union shares memeory address so it is giving, data_int:1093780048 data_float:11.11 data_float:11.11
data_char:P it is giving garbage value, in order to avoid this garbage value print data after data is assigned. */
#include<stdio.h>

union Data{
    int i;
    float f;
    char c;

};

int main(){
    union Data d;
    d.i =10;
     printf("data_int:%d\n", d.i);
    d.f = 11.11;
     printf("data_float:%.2f\n",d.f);
    d.c = 'P';
     printf("data_char:%c\n",d.c);

 /* printf("data_int:%d\n", d.i);
  printf("data_float:%.2f\n",d.f);
  printf("data_char:%c\n",d.c);*/// wrong data
   
   
   
    return 0;
    
}