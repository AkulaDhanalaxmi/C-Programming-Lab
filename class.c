#include<stdio.h>
int a;
int main(){
	int a,b,c;
	printf("Enter the values of a and b:");
	scanf("%d %d",&a,&b);
	c=sum(b,5);
	printf("TOTAL:%d",c);
	compute(a,c);
}
int sum(int x,int y){
	int total;
	a++;
	total=a+x+y;
	return total;
}
void compute(int p,int q){
	a++;
	a=a+5;
	p=p+q*a;
	printf("\nCOMPUTE:%d",p);
}
