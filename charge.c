#include<stdio.h>
int main()
{
	int weight,charge=300,fee,extra_weight;
	printf("Enter the weight is: ");
	scanf("%d",&weight);
	if(weight<=15){
		fee=charge;
		printf("no extra fee: %d",fee);
	}
	else if(weight>15 && weight<=25)
	{
		extra_weight=weight-15;
		fee=extra_weight*10;
		printf("Total fee: %d",fee);
	}
	else
	{
		extra_weight=weight-25;
		fee=extra_weight*20;
		printf("Total fee: %d",fee);
		
	}
	
	

}
