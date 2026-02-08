/**File_Structure_Design:: 48.Sorting */
#include<stdio.h>
int main(){
    int ar[20];
    int n;
    int temp;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the elel of the array:");
    for(int i =0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ar[j]>ar[i])
            {
               temp = ar[j];
               ar[j] = ar[i];
               ar[i] = temp;
            }
        }
    }

    printf("The sorted array:");
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}