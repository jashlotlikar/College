#include<stdio.h>

int main(){
    int arr[10], small, large, i;
    for(i = 0; i<10; i++){
        scanf("%d",&arr[i]);
    }
    small = arr[0];
    large = arr[0];
    for(i = 0; i<10; i++){
        if(arr[i] > large) large = arr[i];
        if(arr[i] < small) small = arr[i];
    }
    printf("\n small = %d \n large = %d", small, large);
}
