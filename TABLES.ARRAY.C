#include<stdio.h>
int main()
{
	int i,j,num[100],k,n,x;
	printf("enter no.of elements:");
	scanf("%d",&n);
	printf("enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);}
		L1:printf("select the index for multiplication table\n");
		scanf("%d",&x);
		if(x>n)
		{printf("\nwrong slelction");
		goto L1;
		}
		else
		for(j=1;j<=10;j++)
		{
			k=num[x]*j;
			printf("%dx%d=%d\n",num[x],j,k);
		}
}
