#include <stdio.h>

int main(){
    int m,n;
    int ar[20][20];
    int t[20][20];

    printf("Enter m x n: ");
    scanf("%d %d",&m,&n);

    printf("Enter elements:\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&ar[i][j]);
            t[j][i] = ar[i][j];
        }
    }

    printf("The transpose of the matrix is:\n");

    for(int i=0;i<n;i++){      // ✅ changed
        for(int j=0;j<m;j++){  // ✅ changed
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
