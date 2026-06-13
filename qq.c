#include<stdio.h>
int main(){
	int *p1,a;
	float *p2,b,c,*p3;
	printf("Enter all the values:");
	p1=&a;
	p2=&b;
	printf("Enter the values of a and b:");
	scanf("%d %f",p1,p2);
	c=*p1+*p2+((*p1)*(*p2));
	p3=&c;
	printf("The values:%f",*p3);
}
