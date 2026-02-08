/**File_structure_design: 45.Queue using array */

#include<stdio.h>
#define MAX 5
int main(){
    int choice,val;
    int rear = -1;
    int front = -1;
    int queue[MAX];

    while(1){
        printf("Menue\n");
        printf("1.Equeue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Exit\n");

        printf("Enter choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1: 
            if(rear == MAX-1){
                printf("Ovverflow!");}
            else{
                printf("Enter element:");
                scanf("%d",&val);

                if(front == -1)
                front =0;

                rear++;
                queue[rear]=val;
            }
            break;

            case 2:
            if(front==-1 || front>rear){
                printf("Queue Underflow!");
            }

            else{
                printf("Dequeued ele:%d",queue[front]);
                front++;
            }
            break;


            case 3:
            if(front==-1 &&front>rear){
                printf("Queue is empty!");

            }

            else{
                printf("queue elements are:");
                for(int i = front;i<=rear;i++){
                    printf("%d ",queue[i]);
                }
                printf("\n");
            }
            break;

            case 4:
            return 0;

            default:printf("Wrong choice!");
        }


    }
return 0;
}