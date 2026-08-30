#include<stdio.h>

int main(){
    int in, i, sum;
    scanf("%d", &in);
    printf("0");
    for(i = 1; i<=in/2; i++){
        if(in%i == 0){
            sum += i;
            printf(" + %d", i);
        }
    }
    if(in == sum) printf(" = %d \nis a perfect number", in);
    else printf(" = %d \nis not a perfect number", in);

}
