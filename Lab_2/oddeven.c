#include<stdio.h>
//1. Check whether the given number is odd or even.

int main(){
    int input;
    printf("enter a number : ");
    scanf("%d",&input);
    if(input % 2 == 0) printf("%d is even.",input);
    else printf("%d is odd.",input);
    return 0;


}
