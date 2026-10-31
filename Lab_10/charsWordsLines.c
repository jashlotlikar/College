#include<stdio.h>

int main(){
    FILE *fp; int ch; int characters = 0, words = 0, lines = 0, inword = 0;
    fp = fopen("file.txt", "r");
    while((ch = getc(fp))!=EOF){
        characters++;
        if(ch == '\n') lines++;
        if(ch == ' '|| ch == '\n' || ch == '\t') inword = 0;
        else if(inword == 0){
            words++; inword = 1;
        }
    }
    printf("\nno.of chars = %d\nno.of words = %d\nno.of lines = %d\n", characters, words, lines);
    fclose(fp);
}
