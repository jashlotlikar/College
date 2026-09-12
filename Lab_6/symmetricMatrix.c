#include<stdio.h>

int main(){
    int i,j,n,arr[100][100], isSym;
    printf("Enter matrix order (n x n): ");
    scanf("%d", &n);
    printf("enter elements : \n");
    isSym = 1;
    for(i = 0; i < n; i++){
        printf("row %d : \n", i);
        for(j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d  ", arr[i][j]);
            if(arr[i][j] != arr[j][i]){
                isSym = 0;
            }
        }
        printf("\n");
    }
    if(isSym == 0){
        printf("\nis Not symmetric");
    }
    else{
        printf("\nis Symmetric");
    }
}
