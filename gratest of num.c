#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter num1 and num2:");
	scanf("%d%d",&num1,&num2);
	if(num1<num2){
		printf("%d is greater",num2);
	}
	else{
		printf("%d is greater",num1);
	}
}
