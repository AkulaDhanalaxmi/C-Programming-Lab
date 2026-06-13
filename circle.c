#include<stdio.h>
#define P 3.14
int main(){
	float r,area;
	printf("Enter the radius of circle:");
	scanf("%f",&r);
	area=P*r*r;
	printf("The area of circle is %f",area);
	return 0;
}
