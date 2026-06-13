#include<stdio.h>
#define P 3.14
int main(){
	int r,volume,lsa,tsa;
	printf("Enter the value of r:");
	scanf("%d",&r);
	volume=4.3*P*r*r*r;
	lsa=4*P*r*r;
	tsa=4*P*r*r;
	printf("The volume of shpere is %d",volume);
	printf("\nThe lsa of sphere is %d",lsa);
	printf("\nThe tsa of sphere is %d",tsa);
	return 0;
}
