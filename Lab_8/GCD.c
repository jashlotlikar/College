#include<stdio.h>

int main(){
    int a, b;
    printf("enter a, b : \n");
    scanf("%d%d", &a, &b);
    printf("GCD = %d",GCD(a,b));
}
int GCD(int a, int b){
    int c;
    c = (a>b)? a : b;
    a = (a>b)? b : a;
    b = c;
    if(b%a == 0) return a;
    else return GCD(b%a, a);
}
