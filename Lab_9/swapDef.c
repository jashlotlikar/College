#include<stdio.h>

int main(){
    int a = 5, b = 10;
    swap(&a, &b);
    printf("%d, %d", a, b);
}
void swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
