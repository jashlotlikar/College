#include<stdio.h>

int main(){
    int n, r, nCr;
    printf("enter n,r : \n");
    scanf("%d%d", &n, &r);
    //nCr = n!/(r)!(n-r)!
    nCr = Fact(n)/(Fact(r)*Fact(n-r));
    printf("nCr = %d", nCr);
}

int Fact(int n){
    int fac = 1;
    for(int i = 1 ;i <= n ;i++) fac *= i;
    return fac;
}
