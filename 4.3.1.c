#include<stdio.h>
int main(){
	int price,quantity,total=0,choice,discount;
	while(1){
		printf("Enter the price of the item:");
		scanf("%d",&price);
		printf("Enter the quantity of the item:");
		scanf("%d",&quantity);
		total+=price*quantity;
		printf("Do you want to perchase another item:");
		scanf("%d",&choice);
		if(choice==0){
			break;
		}
	printf("\nYour bill is:%d",total);
	}
	if(total>500){
		discount=total-(total*0.10);
		printf("\nfinal bill is:%d",discount);
	}
}
