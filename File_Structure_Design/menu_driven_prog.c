/**File_Structure :: 43. Menu Driven Program */
#include<stdio.h>

int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

int mul(int a,int b){
    return a*b;
}

int div(int a,int b){

    if(a>b && b!=0)
    return a/b;

    else
    return 0;
}
int main(){

while(1){
    printf("Menu\n");
    printf("1:: Addition\n");
    printf("2:: Subtraction\n");
    printf("3:: Multiplication\n");
    printf("4:: Division\n");

    int choice;
    int num1,num2;

    
    printf("Enter the num1 & num2:");
    scanf("%d %d", &num1, &num2);
    printf("Enter the option: ");
    scanf("%d",&choice);


    switch(choice){
        case 1: printf("Summation:%d\n",add(num1,num2));
                break;

        case 2: printf("Difference:%d\n",sub(num1,num2));
                break;
        case 3: printf("Product:%d\n",mul(num1,num2));
                break;
        case 4: printf("Division:%d\n",div(num2,num2));
                break;
        default: printf("Entered wrong option:");




    }
}
    return 0;
}