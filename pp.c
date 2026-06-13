#include<stdio.h>
int main(){
	int *p,a,b,c,d;
	printf("Enter all the values:");
	p=&a;
	scanf("%d %d %d",p,&b,&c);
	d=*p+b*c;
	a++;
	(*p)++;
	printf("a is %d\n",a);
	printf("b is %d\n",b);
	printf("c is %d\n",c);
	printf("d is %d",d);
}


