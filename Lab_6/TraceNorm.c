#include<stdio.h>
#include<math.h>

int main(){
    int i,j,n,arr[100][100], tr;
    float norm;
    printf("Enter matrix order (n x n): ");
    scanf("%d", &n);
    printf("enter elements : \n");
    for(i = 0; i < n; i++){
        printf("row %d : \n", i);
        for(j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < n; i++){
        tr = tr + arr[i][i];
        for(j = 0; j < n; j++){
            printf("%d  ", arr[i][j]);
            norm = norm + pow(arr[i][j], 2);
        }
        printf("\n");
    }
    norm = pow(norm, 0.5);
    printf("\ntrace = %d", tr);
    printf("\nnorm = %f", norm);
}
