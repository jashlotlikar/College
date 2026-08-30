#include<stdio.h>

int main(){
	int in,s,m,h;
	printf("input no. of seconds \n");
        scanf("%d",&in);
	h = in/3600;
	m = (in%3600)/60;
	s = in%60;

	printf("%d hours(s), %d minutes(s) and %d seconds(s). \n",h,m,s);

	return 0;
}

