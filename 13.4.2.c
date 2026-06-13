#include<stdio.h>
int main(){
	int x,y;
	printf("Enter the values of x and y:");
	scanf("%d %d",&x,&y);
	int *p,*p1;
	p=&x;
	p1=&y;
	*p=*p+*p1;
	*p1=*p-*p1;
	*p=*p-*p1;
	printf("%d %d",*p,*p1);
}
