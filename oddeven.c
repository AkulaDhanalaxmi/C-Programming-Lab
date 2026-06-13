#include<stdio.h>
int main()
{
	int n;
	printf("Enter n is: ");
	scanf("%d",&n);
	if(n>=0)
	{
		if(num%2==0)
		printf("The number is positive even number %d",n);
	    else
		printf("The number is positive odd number %d",n);
	}
	else if(n<=0)
	{
		if(num%2==0)
		printf("The number is negative even number %d",n);
	    else
		printf("The number is negative odd number %d",n);
	}
	else
	{
		printf("it is equal to zero");
	}
}
