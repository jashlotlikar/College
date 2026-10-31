#include<stdio.h>

int main(){
    FILE *fp1, *fp2; int ch;
    fp1 = fopen("file.txt", "r");
    fp2 = fopen("copied.txt", "w");
    while((ch = getc(fp1))!=EOF){
        putc(ch,fp2);
    }
    fclose(fp1); fclose(fp2);
}
