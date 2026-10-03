#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int n = 1;
    printf("input your string: \n");
    gets(str);

    for(int i = 0; i < strlen(str)-1; i++){
        if(str[i] == ' ' && str[i+1] != ' ') n++;
    }
    printf("\nstring (%s) has (%d) words", str, n);
}
