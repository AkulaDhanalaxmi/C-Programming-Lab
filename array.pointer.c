#include<stdio.h>
int main(){
	int a[3],*p1,*p,*p2,i;
	printf("Adresss of index 0:%u",&a[0]);
	printf("\nAdresss of index 1:%u",&a[1]);
	printf("\nAdresss of index 2:%u",&a[2]);
	p1=&a[2];
	p=a;
	p2=&a[0];
	printf("\nAdresss of p :%u",p);
	
	printf("\nEnter all the elements:");
	for(i=0;i<3;i++){
		scanf("%d",p+i);
	}
	printf("\n%d",*p);
	printf("\n%d",*(p+1));
	printf("\n%d",*(p+2));
		
}
