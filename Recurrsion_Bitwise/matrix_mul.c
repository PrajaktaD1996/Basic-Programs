/**Recurrsion Bitwise:  matrix_multiplication */
#include<stdio.h>
int main(){
    int m,n;
    int p,q;
    int ar1[20][20];
    int ar2[20][20];
    int res[20][20];
    printf("Enter the size ar1");
    scanf("%d %d", &m,&n);

    printf("Enter the size ar2");
    scanf("%d %d", &p,&q);

    printf("Enter ele of matrix-1:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&ar1[i][j]);
        }
    }

    printf("Enter ele of matrix-2:");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&ar2[i][j]);
        }
    }

  for(int i=0;i<m;i++)
        for(int j=0;j<p;j++)
            res[i][j] = 0;

    // multiplication
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            for(int k=0;k<n;k++){
                res[i][j] += ar1[i][k] * ar2[k][j];
            }
        }
    }

    printf("Result matrix:\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
