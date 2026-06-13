#include<stdio.h>
#define P 3.14
int main(){
	float radius,height,volume,lsa,tsa;
	printf("Enter the values of radius and height:");
	scanf("%f %f",&radius,&height);
	volume=P*radius*radius*height;
	lsa=2*P*radius*height;
	tsa=2*P*radius*(radius+height);
	printf("The volume of cylinder is %.2f",volume);
	printf("\nThe lsa of cylinder is %.2f",lsa);
	printf("\nThe tsa of cylinder is %.2f",tsa);
	return 0;
	
	
}
