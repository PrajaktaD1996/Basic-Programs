/**File_Structure_Design:: 49. Binary searching */
#include<stdio.h>
int main(){

    int n, key;
    printf("Enter size:");
    scanf("%d",&n);

  

    int arr[20];
    printf("Enter the element of the array:");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    printf("Enter the element to be searched:");
    scanf("%d",&key);

    int hi=n-1,lo=0,mid;
    int found = -1;

    
    while(lo<=hi){
        mid = (lo+hi)/2;

        if(arr[mid]==key)
        {found =  mid;
        break;}

        if(key<arr[mid])
        {
            hi = mid-1;
        }

        else
        lo = mid+1;
    }
        if(found!=-1)
        printf("Ele is found at %d", found);

        else
        printf("Ele is not found!");

        return 0;



    

    return 0;
}