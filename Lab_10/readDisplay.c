#include<stdio.h>

int main(){
    FILE *fp; int ch;
    fp = fopen("file.txt", "r");
    while((ch = getc(fp))!=EOF){
        printf("%C",ch);
    }
    fclose(fp);
}
