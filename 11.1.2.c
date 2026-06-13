#include<stdio.h>
int main(){
	int balance,transaction;
	printf("Enter current balance:");
	scanf("%d",&balance);
	printf("Enter transaction amount:");
	scanf("%d",&transaction);
	c_b(balance,transaction);
}
void c_b(int x,int y){
	char type;
	printf("Enter transaction type:");
	scanf(" %c",&type);
	if(type=='D'){
		x=x+y;
		printf("Current balance is:%d",x);	
	}
	else if(type=='W'){
		x=x-y;
		printf("Current balance is:%d",x);
    }
}

