#include<stdio.h>
int main(){
	int choice,cost;
	printf("Menu:");
	printf("\n1 for burger");
	printf("\n2 for pizza");
	printf("\n3 for pasta");
	printf("\n4 for coffee");
	printf("\n5 for exit");
	printf("\nEnter the number of your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("You ordered BURGER");
			cost=50*0.10;
			printf("\nPlease pay %d",cost,"for burger");
			break;
		case 2:
			printf("You ordered PIZZA");
			cost=80;
			printf("\nPlease pay %d",cost,"for pizza");
			break;
		case 3:
			printf("You ordered PASTA");
			cost=70;
			printf("\nPlease pay %d",cost,"for pasta");
			break;
		case 4:
			printf("You ordered COFFEE");
			cost=30;
			printf("\nPlease pay %d",cost,"for coffee");
			break;
		case 5:
			printf("EXIT");
		default:
			printf("You have entered wrong choice:");
			printf("\nPlease look at the menu and Enter your choice:");
	}
}
