#include<stdio.h>
#include<string.h>
int main(){
	char card[10];
	float discount,amount,total_amount;
	printf("Enter the type of card:");
	scanf("%s",&card);
	printf("Enter amount:");
	printf("%f",&amount);
	if(strcmp(card,"platinum")==0){
		//printf("10% of discount is given");
		discount=0.10;
	}
	else if(strcmp(card,"gold")==0){
		//printf("8% of discount is given");
		discount=0.08;
	}
	else{
		//printf("5% of discount is given");
		discount=0.05;
	
    }

    total_amount=amount-(amount*discount);
    printf("The bill is %.2f",total_amount);
    return 0;
}


