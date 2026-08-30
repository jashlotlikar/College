#include<stdio.h>

int main(){
	int tw,tn,fv,hf;
	double total;

	printf("enter no. of 20rs notes \n");
	scanf("%d",&tw);

	printf("enter no. of 10rs notes \n");
        scanf("%d",&tn);

	printf("enter no. of 5rs coins \n");
        scanf("%d",&fv);

	printf("enter no. of 50paise coins \n");
        scanf("%d",&hf);

	total = (20*tw) + (10*tn) + (5*fv) + (0.5*hf);

	printf("Total amount = %lfrs \n",total);

	return 0;
}


