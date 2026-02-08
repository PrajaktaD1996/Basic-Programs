#include<stdio.h>
#define MAX 5
int main(){

    int stack[MAX];
    int top = -1;
    int choice,val;
    

    while(1){
        printf("Menu:\n");
        printf("1:: push\n");
        printf("2:: pop\n");
        printf("3:: diaplay\n");
        printf("4:: Exit\n");

        printf("Enter the choice:");
        scanf("%d",&choice);

        switch(choice){

            case 1: 
            if(top==MAX-1)
            printf("Stack overflow!");
            else{
            printf("Enter value=");
            scanf("%d",&val);
            top++;
            stack[top] = val;

            }
            break;

            case 2:
            if(top == -1)
            printf("Stack underflow!");
            else{
                printf("Poped val=",stack[top]);
                top--;
            }
            break;

            case 3:
            if(top==-1)
            printf("Stack is empty!");
            else{
                printf("stack elements are:");
                for(int i=top;i>0;i--){
                    printf("%d ",stack[i]);
                }
            }
            case 4:
            return 0;

            dafault: 
            printf("Wrong choice!");
        }
    }
    return 0;
}