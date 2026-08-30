#include<stdio.h>

int main(){
	float in1, in2, s,d,p,q;
	printf("enter 2 no.s \n");
	scanf("%f",&in1);
	scanf("%f",&in2);

	s = in1 + in2;
	d = in1 - in2;
	p = in1 * in2;
	q = in1 / in2;
	printf("sum = %f \ndifference = %f \nproduct = %f \nquotient = %f \n", s,d,p,q);

	return 0;
}
