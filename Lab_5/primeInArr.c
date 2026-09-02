#include<stdio.h>

int main(){
    int arr[100], n, i, p;
    printf("length of array : ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i<n; i++){
        if(arr[i] == 2) printf("2 \t");
        for(p = 2; p < arr[i]; p++){
            if(arr[i] % p == 0) break;
            if(p == arr[i] - 1) printf("%d \t", arr[i]);
        }

    }
}
