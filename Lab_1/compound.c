#include<stdio.h>
#include<math.h>

int main(){
	double si, p, n, r;
	double ci;
	printf("enter P \n");
	scanf("%lf", &p);
	printf("enter N \n");
        scanf("%lf", &n);
	printf("enter R \n");
        scanf("%lf", &r);
	si = p * n * r / 100;
	ci = p * pow(1 + (r/100), n) - p;


	printf("SIMPLE INTEREST IS :    %lf\n",si);
	printf("COUMPOUND INTEREST IS : %lf\n",ci);

	return 0;
}




