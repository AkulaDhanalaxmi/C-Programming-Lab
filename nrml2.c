#include<stdio.h>
#include "nrml1.c"
extern int a;
extern int add(int,int);
void main(){
	int b;
	printf("%d",a);
	b=add(a,3);
	printf("\n%d",b);
}
