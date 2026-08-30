#include<stdio.h>

int main () {
    int input, burn, p, d;
    printf("Enter your no : \n");
    scanf("%d", &input);
    burn = input;
    p=0;
    while(burn > 0) {
        d = burn%10;
        p = p*10 + d;
        burn = burn/10;
    }
    printf("original number : %d \nreverse number  : %d \n",input, p);
    if(input == p) printf("number is palindrome \n");
    else printf("number is not palindrome \n");

    return 0;
}
