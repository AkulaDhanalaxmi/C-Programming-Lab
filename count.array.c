#include<stdio.h>
int main(){
	int a[200],num,i,j,count;
	printf("Enter the elements:");
	scanf("%d",&j);
	printf("Enter all the numbers:");
	for(i=0;i<j;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter a number to check:");
	scanf("%d",&num);
	count=0;
	for(i=0;i<j;i++){
		if(a[i]==num){
			printf("%d",num);
			count++;
		}
	}
	printf("\n%d",count);
	if(count==1){
		printf("\nThere are no duplicates");
	}
}
