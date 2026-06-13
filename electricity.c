#include<stdio.h>
int main()
{
	int num_units;
	float bill;
	printf("enter the no of units:");
	scanf("%d",&num_units);
	if (num_units<=100)
	{
		bill=num_units*2.5;
		printf("The total bill is %f",bill);
	}
	else if (num_units>100 && num_units<=200)
	{
		bill=num_units*2.0;
		printf("The total bill is %f",bill);
	}
	else
	{
		bill=num_units*3.0;
		printf("The total bill is %f",bill);
	}
}
