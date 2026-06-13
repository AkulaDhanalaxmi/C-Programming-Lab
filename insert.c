#include<stdio.h>
void main()
{
	int arr[100],i,n,pos,b;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter the element to insert:");
	scanf("%d",&b);
	printf("Enter all the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the position:");
	scanf("%d",&pos);
	if(pos>n-1 || pos<0)
	{
		printf("invalid");}
	for(i=n;i>pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=b;
	n++;
	for(i=0;i<n;i++);{
		printf("\tw%d",arr[i]);
	}

}
