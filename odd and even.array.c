#include<stdio.h>
int main(){
	int num[10],i,sum=0;
	printf("Enter the elements:");
	for(i=0;i<=9;i++){
		scanf("%d",&num[i]);
		if(num[i]%2==0){
			sum=0;
			printf("EVEN NUMBERS:%d\n",num[i]);
			sum=sum+num[i];
			printf("%d",sum);
		}
		else{
			printf("\nODD NUMBERS:%d\n",num[i]);
		}
	}
}
