#include<stdio.h>
#define P 3.14
int main(){
	int r,volume,lsa,tsa;
	printf("Enter the radius:");
	scanf("%d",&r);
	volume=0.6*P*r*r*r;
	lsa=2*P*r*r;
	tsa=3*P*r*r;
	printf("\nThe lsa is:%d",lsa);
	printf("\nThe Tsa is:%d",tsa);
	printf("\nThe volume is:%d",volume);
}
