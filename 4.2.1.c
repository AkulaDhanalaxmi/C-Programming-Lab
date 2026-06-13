#include<stdio.h>
int main(){
	int choice,draw,balance;
	printf("Menu:");
	printf("\n1.Withdraw Money");
	printf("\n3.Check balance");
	printf("\n4.Exit");
	printf("\nSelect a option:");
	scanf("%d",&choice);
	printf("\nEnter the total balance:");
	scanf("%d",&balance);
	switch(choice){
		case 1:
			printf("Enter the amount to withdraw:");
			scanf("%d",&draw);
			if(draw>balance){
				printf("\nInsufficent balance");
			
			}
			else{
				balance=balance-draw;
			    printf("\nThe total balance is:%d",balance);
			}
			break;
		case 2:
			printf("\nCurrent balance is:%d",balance);
			break;
		case 3:
			printf("\nExit");
			break;
			
	}
}
