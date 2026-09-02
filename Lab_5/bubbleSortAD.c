#include<stdio.h>

int main(){
    int arr[100], i, n, j, temp;
    char in;

    scanf("%d",&n);

    for(i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("ascending or descending : ");
    scanf(" %c", &in);

    for(j = n-1; j > 0; j--){
        for(i = 0; i < j; i++){
            switch(in){
            case 'a':
                if(arr[i]> arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                }
                break;
            case 'd':
                if(arr[i] < arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                }
                break;
            default:
                printf("invalid input");
            }


        }
    }

    for(i = 0; i < n; i++) printf("%d \t",arr[i]);
}
