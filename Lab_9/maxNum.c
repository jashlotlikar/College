#include<stdio.h>

int main(){
    int *ptr, num, large;
    int arr[5] = {1, 2, 76, 4, 5};
    ptr = arr;
    large = arr[0];
    for(int i = 0; i < 5; i++){
        num = *(ptr+i);
        large = (large>num)? large : num;
    }
    printf("%d", large);
}
