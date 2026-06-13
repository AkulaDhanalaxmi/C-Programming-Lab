#include<stdio.h>
#define P 3.14
int main(){
	int r,h,l,volume,lsa,tsa;
	printf("Enter the values of r,h,l:");
	scanf("%d%d%d",&r,&h,&l);
	volume=P*r*r*h*0.3;
	lsa=P*r*l;
	tsa=P*r*(r+l);
	printf("The volume of cone is %d",volume);
	printf("\nThe lsa of cone is %d",lsa);
	printf("\nThe tsa of cone is %d",tsa);
	return 0;
}
