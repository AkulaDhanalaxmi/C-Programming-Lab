#include<stdio.h>
int main(){
	int length,base,height,volume,lsa,tsa;
	printf("Enter the value of length ,base ,height:");
	scanf("%d %d %d",&length,&base,&height);
	volume=length*base*height;
	lsa=2*height*(length+base);
	tsa=2*(length*base+base*height+height*length);
	printf("The volume of cuboid is %d",volume);
	printf("\nThe lsa of cuboid is %d",lsa);
	printf("\nThe tsa of cuboid is %d",tsa);
	return 0;
}
