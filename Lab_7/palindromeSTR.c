#include<stdio.h>
#include<string.h>

int main(){
    char str[100]; int palindrome = 1; int i, last_index;

    printf("input your string: \n");
    gets(str);

    last_index = strlen(str) - 1;

    for(i = 0; i <= strlen(str)/2; i++){

        if(str[i] != str[last_index-i]){
            palindrome = 0;
        }
    }

    if(palindrome == 1) printf("\n%s IS a palindrome", str);
    else printf("\n%s IS NOT a palindrome", str);
}
