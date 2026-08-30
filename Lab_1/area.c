#include<stdio.h>

int main(){
	float r,v,a;
	printf("enter radius : ");
	scanf("%f",&r);
	v = 4 * 3.1415 * r*r*r / 3;
	a = 4 * 3.1415 * r*r;
	printf("volume = %f \n",v);
	printf("area   = %f \n",a);

	return 0;
} 
