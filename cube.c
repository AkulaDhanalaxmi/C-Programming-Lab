#include<stdio.h>
int main(){
	int side,volume,lsa,tsa;
	printf("Enter the value of side of a cube:");
	scanf("%d",&side);
	volume=side*side*side;
	lsa=4*side*side;
	tsa=6*side*side;
	printf("The volume of cube is %d",volume);
	printf("\nThe lsa of cube is %d",lsa);
	printf("\nThe tsa of cube is %d",tsa);
	return 0;
}
