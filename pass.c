#include<stdio.h>
int main(){
	int a[10],i;
	printf("Enter the elements:");
	for(i=0;i<=9;i++){
		scanf("%d",&a[i]);
	}
	for(i=9;i>=0;i--)
	{
		printf("\n%d",a[i]);
	}

}
