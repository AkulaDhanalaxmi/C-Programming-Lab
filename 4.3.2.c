#include<stdio.h>
int main(){
	int num,rev=0,r;
	printf("Enter the invoice number:");
	scanf("%d",&num);
	for(;num>0;num=num/10){
		r=num%10;
		rev=rev*10+r;
	}
	printf("\nTHE REVERSED INVOICE NUMBER IS:%d",rev);
}
