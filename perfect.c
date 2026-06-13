#include<stdio.h>
int main(){
	int num,sum=0,i;
	scanf("%d",&num);
	for(i=1;i<=num/2;i++){
		if(num%i==0){
			sum+=i;
		}
	}
	if(sum==num){
		printf("The given number is a perfect number");
	}
	else{
		printf("The given number is not a perfect number");
	}
}
