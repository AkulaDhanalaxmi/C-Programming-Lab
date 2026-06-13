#include<stdio.h>
int main(){
	float income,tax;
	printf("Enter income:");
	scanf("%f",&income);
	if(income<=250000){
		printf("NO TAX");
	}
	else if (income>250000 && income<=500000){
		tax=0.5*income;
		printf("The tax is %.2f",tax);
	}
	else if(income>500000 && income<=1000000){
		tax=12500+(0.2*income);
		printf("The tax is %.2f",tax);
	}
	else{
		tax=112500+(0.3*income);
		printf("The tax is %.2f",tax);
	}	
}
