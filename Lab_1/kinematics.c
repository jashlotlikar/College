#include<stdio.h>

int main(){
	float s0, u, a, t, s;
	printf("enter in order:\n s0 \n u \n a \n t \n");
	scanf("%f", &s0);
	scanf("%f", &u);
	scanf("%f", &a);
	scanf("%f", &t);
	s = s0 + (u*t) + (0.5*a*t*t);
	printf("new coordinate = %f", s);
	return 0;
}
