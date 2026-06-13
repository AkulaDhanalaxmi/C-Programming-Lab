#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the values of a and b:");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("After swapping:");
	printf("%d %d",a,b);
}
void swap(int *p,int *p1){
	int temp;
	temp=*p;
	*p=*p1;
	*p1=temp;
}
