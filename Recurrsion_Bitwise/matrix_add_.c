#include <stdio.h>

int main() {
    int m,n;

    printf("Enter rows and cols: ");
    scanf("%d %d",&m,&n);

    int a[20][20], b[20][20], c[20][20];

    printf("Enter matrix A:\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    printf("Enter matrix B:\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&b[i][j]);

    // addition
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Result matrix:\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
