/**File_structre_design::49.linear search */
#include<stdio.h>
int main(){

    int ar[30];
    int n;
    int ele;
    int f;
    printf("Enter the size:");
    scanf("%d",&n);

    printf("Enter the ele of array:");
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);

    printf("Enter the ele to be searched:");
    scanf("%d",&ele);

    for(int i=0;i<n;i++)
    {
        if(ele==ar[i])
        {
            printf("Found at index %d", i);
        }

    
    }

    return 0;

}