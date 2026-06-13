#include<stdio.h>
int main(){
	int sum,a[8],i;
	printf("ENTER THE VALUES:");
	for(i=0;i<=7;i++){
		scanf("%d",&a[i]);
	}
	sum=0;
	for(i=0;i<=7;i++){
		sum=sum+a[i];
	}
	printf("\nThe total sum is:%d",sum);
}
