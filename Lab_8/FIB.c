#include<stdio.h>

int main(){
    int n;
    printf("enter n : \n");
    scanf("%d", &n);
    printf("FIB = %d",FIB(n));
}
int FIB(int n){
    if(n <= 1) return n;
    else return (FIB(n-1) + FIB(n-2));
}
