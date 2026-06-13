#include<stdio.h>
int main(){
	int a,*p;
	printf("Enter the value of a:");
	scanf("%d",&a);
	p=&a;
	printf("a is %d\n",a);
	printf("p is %u\n",p);
	printf("Adress of a:%u\n",&a);
	printf("Value at p is %d\n",*p);
	printf("Adress of p:%u\n",&p);
	printf("a is %d\n",*(&a));
	

	
}
