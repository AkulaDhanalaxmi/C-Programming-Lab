#include<stdio.h>
int main(){
	int a,b,h,area;
	printf("Enter the values of a,b,h:");
	scanf("%d%d%d",&a,&b,&h);
	area=(a+b)*h*0.5;
	printf("The area of trapezoid is %d",area);
	return 0;
}
