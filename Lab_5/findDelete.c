#include<stdio.h>

int main(){
    int arr[100], n, i, del, delFlag;
    delFlag = 0;

    printf("length of array : ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("what to delete : ");
    scanf("%d", &del);
    arr[n] = arr[n-1];

    for(i = 0; i < n; i ++){
        if(arr[i] == del) delFlag = 1;
        if(delFlag == 1){
            arr[i] = arr[i+1];
        }
    }
    if (delFlag)    n = n-1;

    for(i = 0; i < n; i ++){
        printf("%d \t", arr[i]);
    }


}
