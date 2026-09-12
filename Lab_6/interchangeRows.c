#include<stdio.h>

int main(){
    int i,j,m, n,arr[100][100], row1, row2, col1, col2, swap;
    printf("Enter matrix order (m x n): ");
    scanf("%d%d", &m,&n);
    printf("enter elements : \n");
    for(i = 0; i < m; i++){
        printf("row %d : \n", i);
        for(j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("rows to exchange? : ");
    scanf("%d%d", &row1, &row2);
    printf("cols to exchange? : ");
    scanf("%d%d", &col1, &col2);

    for(i = 0; i < m; i++){
        swap = arr[i][col1-1];
        arr[i][col1-1] = arr[i][col2-1];
        arr[i][col2-1] = swap;
    }
    for(j = 0; j < n; j++){
        swap = arr[row1-1][j];
        arr[row1-1][j] = arr[row2-1][j];
        arr[row2-1][j] = swap;
    }
    printf("modified matrix: \n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}
