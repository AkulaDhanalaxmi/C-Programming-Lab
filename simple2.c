#include<stdio.h>
#include "simple1.c"
extern int a;
extern add();
void main(){
	int b;
	b=add();
	
	printf("%d",b);
}
