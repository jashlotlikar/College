#include<stdio.h>

int main(){
    int N, i, j, n;
    scanf("%d", &N);
    n=1;
    for(i=1; i<=N; i++){
        for(j=1; j<=i; j++){
            printf(" %d ", n);
            n++;
        }
        printf("\n");
    }

}
