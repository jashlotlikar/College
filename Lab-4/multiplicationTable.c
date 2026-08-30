#include<stdio.h>

int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int i, j;
    i,j = 0;
    for(i = 1;i<=n;i++){
        for(j=1; j<=k; j++){
            printf("%d ", i*j);
        }
        printf("\n");
    }
}
