#include<stdio.h>

int main(){
    int i,j,k,m,q,n,a[100][100], b[100][100], c[100][100], tr;
    float norm;
    printf("Enter matrix order A(m x n), B(n x q) enter m,n,q :");
    scanf("%d%d%d", &m,&n,&q);
    printf("enter elements for matrix A : \n");
    for(i = 0; i < m; i++){
        printf("row %d : \n", i);
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("enter elements for matrix B : \n");
    for(i = 0; i < n; i++){
        printf("row %d : \n", i);
        for(j = 0; j < q; j++){
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    printf("\nC = A X B : \n");
    for(i = 0; i < m; i++){
        for(j = 0; j < q; j++){
            c[i][j] = 0;
            for(k = 0; k < n; k ++){
                c[i][j] = c[i][j] + a[i][k]*b[k][j];
            }
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
}
