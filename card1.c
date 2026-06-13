#include<stdio.h>
#include<string.h>
int main(){
	char card[20];
	float discount,amount,total_amount;
	scanf("%f",&amount);
	printf("Enter the type of card:");
	scanf("%s",card);
	if(strcmp(card,"platinum")==0){
		discount=0.10;
	}
	else if(strcmp(card,"gold")==0){
		discount=0.08;
	}
	else{
		discount=0.05;
	}
    total_amount=amount-(amount*discount);
    printf("The bill is %.2f",total_amount);
    return 0;
}


