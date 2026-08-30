#include<stdio.h>

int main(){
	float a = 30;
	float b = 10;
	float c = 5;
	float d = 15;

	printf("eval1 = %f\n",((a+b)*c/d));
	printf("eval2 = %f\n",(((a+b)*c)/d));
	printf("eval3 = %f\n",(a+(b*c)/d));
	printf("eval4 = %f\n",((a+b)*(c/d)));

	return 0;
}



