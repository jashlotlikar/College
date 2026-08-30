#include<stdio.h>

int main(){
    int in, p, c, i;
    printf("enter numbers (-1 to terminate) : \n");
    p =0;
    c =0;
    do {
            scanf("%d", &in);
            i = 2;
            while(i <= in){
                if(in % i == 0){
                    c++;
                    break;
                }
                if(i > in/2){
                    p++;
                    break;
                }
                i++;
            }

    } while (in != -1);
    printf("\nno. of primes : %d", p);
    printf("\nno of composites : %d", c);
}
