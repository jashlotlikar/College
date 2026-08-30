#include<stdio.h>

int main() {
    int input, burn, d, asn;
    printf("enter a number : ");
    scanf("%d", &input);
    burn = input;
    asn = 0;
    while(burn > 0) {
        d = burn%10;
        printf("(%d)^3", d);
        if(burn >= 10) printf(" + ");
        else printf(" = ");
        asn = asn + d*d*d;
        burn = burn/10;
    }
    printf("%d", asn);
    if(asn == input) printf(" is an armstrong number \n");
    else printf(" is not an armstrong number");
}
