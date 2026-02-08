/**FILE_STRUCTURE:: selection_sort.c*/
#include<stdio.h>
int main(){
    int ar[30];
    int num,temp;
    printf("Enter size of array::");
    scanf("%d",&num);

    printf("Enter elements:");
    for(int i=0;i<num;i++)
    scanf("%d",&ar[i]);

     for(int i=0;i<num-1;i++){
     int minIndex= 0;
     for(int j=i+1;j<num;j++){
        if(ar[j]<ar[minIndex]){
            minIndex = j;
        }
     }
   temp = ar[i];
   ar[i] = ar[minIndex];
   ar[minIndex] = temp;
  printf("Sorted array:");
  for(int i =0;i<num;i++)
  {
    printf("%d ",ar[i]);
  }
  return 0;
     }}