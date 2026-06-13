#include<stdio.h>
int main(){
	printf("ATM SYSTEM:");
	printf("\n1.Check Balance");
	printf("\n2.Withdraw money");
	printf("\n3.Deposit money");
	printf("\n4.Exit");
	int balance=5000,choice,total,amount;
	printf("\nEnter the choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Your current balance is: %d",balance);
			break;
		case 2:
		    printf("Enter the amount to withdraw:");
		    scanf("%d",&amount);
		    total=balance-amount;
		    printf("Transaction success\n Your total balance is:%d",total);
		    break;
		case 3:
			printf("Enter the amount to withdraw:");
			scanf("%d",&amount);
			total=balance+amount;
			printf("Deposit successfull\nTotaL balance is:%d",&amount);
			break;
		case 4:
			printf("Exit");
		default:
			printf("Enter the correct choice:");
	}
}
