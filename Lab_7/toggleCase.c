#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("input your string: \n");
    gets(str);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 65 && str[i] <= 65+26){
            str[i] += 32;
        }
        else if(str[i] >= 97 && str[i] <= 97+26){
            str[i] -= 32;
        }
    }
    printf("\n%s", str);
}
