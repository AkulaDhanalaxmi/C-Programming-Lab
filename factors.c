#include<stdio.h>
int main(){
	int num,i,sum=0;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(num%i==0){
			printf("\nThe factors of the given number are:%d",i);
			sum+=i;
		}	
	}
	printf("\nThe sum of the factors are :%d",sum);
}
