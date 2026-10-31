#include<stdio.h>

int main(){
    FILE *fp; int ch; long n, size, start;
    printf("enter n: ");
    scanf("%d", &n);
    fp = fopen("file.txt", "r");
    fseek(fp, 0, SEEK_END); size = ftell(fp);
    if(n>size) start = 0;
    else start = size-n;
    fseek(fp, start,SEEK_SET);
    while((ch = getc(fp))!=EOF){
        printf("%c",ch);
    }
    fclose(fp);
}

