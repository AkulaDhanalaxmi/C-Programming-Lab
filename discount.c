#include<stdio.h>
int main()
{
	int age,ticket,book,rate=200;
	printf("Enter the age is : ");
	scanf("%d",&age);
	printf("Enter the number of book is : ");
	scanf("%d",&book);
	if(age<=12)
	{
		ticket=0.50*rate;
	    printf("The discount rate is %d",ticket);		
	}
	else if (age>60)
	{
		ticket=0.30*rate;
		printf("The discount rate is %d",ticket);
	}
	else if(book==5)
	{
		ticket=0.10*rate;
		printf("The discount rate is %d",ticket);
	}
	else
	{
	 printf("No discount is applies");	
	}
}
