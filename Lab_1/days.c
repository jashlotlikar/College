#include<stdio.h>

int main(){
	int in,y,w,d;
	printf("input no. of days \n");
	scanf("%d",&in);
	y = in/365;
	w = (in%365)/7;
	d = in%7;

	printf("%d year(s), %d week(s) and %d day(s). \n",y,w,d);

	return 0;
}
