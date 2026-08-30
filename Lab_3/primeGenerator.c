#include<stdio.h>

int main(){
    int lim1, lim2, n, i;
    printf("enter lower and upper limit : \n");
    scanf("%d", &lim1);
    scanf("%d", &lim2);
    printf("\n\n");

    if(lim1 > lim2) {
        int swap = lim1;
        lim1 = lim2;
        lim2 = swap;
    }

    while (lim1 <= lim2) {
        i = 2;
        while((lim1 % i != 0) && (lim1>=i)) i++;
        if(lim1 == i){
            n++;
            printf("%d \t",lim1);
            if(n%5 == 0) printf("\n");
        }
        lim1++;
    }
    printf(" \n\n %d prime numbers \n", n);

    return 0;
}
