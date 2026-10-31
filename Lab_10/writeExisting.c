#include<stdio.h>

int main(){
    FILE *fp; char str[100];
    fp = fopen("file.txt", "a");
    printf("enter line of text: ");
    scanf(" %[^\n]", str);
    fputs(str,fp);
    fclose(fp);
}

