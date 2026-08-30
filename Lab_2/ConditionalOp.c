#include<stdio.h>
//4. Find the smallest among three numbers using conditional operator.

int main(){
    int a,b,c, out;
    printf("enter 3 numbers :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    out = (a>b)? b : a;
    out = (out>c)? c : out;
    printf("smallest is : %d",out);
    return 0;


}
