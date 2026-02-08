/**File_Structure_Design:: 47.Impliment Link list */
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insertBeg(int num){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = num;
    newnode->next = head;
    head = newnode;
    printf("inseted in the begenninhg:%d",num);

}

void insertEnd(int num){
    struct node *newnode, *temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = num;
    newnode->next = NULL;
    if(head==NULL)
    {head= newnode;
    return ;}

    temp  = head;
    while(temp->next != NULL)
      temp = temp->next;


        temp->next = newnode;

        printf("insetred at the end:%d",num);

}


void deleteBeg(){
    if(head==NULL)
    {printf("The list is empty!");
    return ;}

    struct node *temp = head;
    head = head->next;
    printf("Deleted :%d",temp->data);
    free(temp);

    
}


void deleteEnd(){
    if(head==NULL)
    {printf("The list is empty!");
    return ;}
    struct node *temp;
    temp = head;

    if (head->next == NULL) {
        printf("Deleted: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }
   

    while(temp->next != NULL)
      temp = temp->next;
      
    printf("Deteletd at end:%d",temp->next->data);
    free(temp->next);
    temp->next = NULL;

    
}

void display(){
    struct node *temp = head;

    if(temp==NULL){
    printf("List is Empty!");
    return;
    }

    printf("List::");
    while(temp!=NULL){
     printf("%d->",temp->data);
     temp= temp->next;
    }
   printf("NULL\n");
}
int main(){
    int choice,val;
    printf("Menu:\n");
    printf("1.InsertBeg \n2.InsertEnd \n3.DeleteBeg \n4.DeletEnd \n5.Display \n6.Exit"); 
    printf("Enter Choice:");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        printf("Enter val:");  //insert in the beg
        scanf("%d",&val);
        insertBeg(val);
        break;

        case 2:
        printf("Emter val:"); //insert in the back
        scanf("%d",&val);
        insertEnd(val);
        break;


        case 3:
        deleteBeg();
        break;

        case 4:
        deleteEnd();
        break;

        case 5:
        display();
        break;

        case 6:
        return 0;

        default: 
        printf("Wrong Choice!");
    }

    return 0;
}


