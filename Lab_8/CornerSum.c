#include<stdio.h>

int main(){
    int arr[50][50];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            arr[i][j] = i+j;
        }
    }
    printf("Corner sum = %d", CornerSum(arr, 5, 3));
}
int CornerSum(int arr[][50], int r, int c){
    int sum;
    sum = arr[0][0] + arr[r-1][0] + arr[0][c-1] + arr[r-1][c-1];
    return sum;
}
