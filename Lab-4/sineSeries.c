#include<stdio.h>
#include<math.h>

int main(){
    int n, i;
    float x;
    float sum, term;
    scanf("%f", &x);
    scanf("%d", &n);
    sum = 0;
    term = x;
    for(i = 1; i<=n; i=i+1){
        sum = sum + term;
        term  = -1*(term*x*x)/((2*i)*(2*i + 1));
        printf("%f %f \n", term, sum);
    }
    printf("\n%f",sum);
}
