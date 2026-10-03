#include<stdio.h>
#include<string.h>

int main(){
    char str[100], del[100]; int index; int isInStr = 0;

    printf("input your string: \n");
    gets(str);
    printf("to be deleted: \n");
    gets(del);

    for(int i = 0, j = 0; i < strlen(str); i++){
        if(j == strlen(del) - 1){
            index = i - j;
            isInStr = 1;
            break;
        }
        else if(str[i] == del[j]){
            j++;
        }
        else j = 0;
    }
    if(isInStr){
        for(int i = index; i < strlen(str) - strlen(del); i++){
            str[i] = str[i+strlen(del)];
        }
        str[strlen(str) - strlen(del)] = '\0';
    }
    printf("\n%s", str);
}
