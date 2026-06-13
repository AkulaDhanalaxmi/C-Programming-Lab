#include<stdio.h>
int main(){
	int num,fact,i,r,sum=0,a,count,temp,j;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	for(;num>0;num=num/10){
		r=num%10;
		fact=1;
		for(i=1;i<=r;i++){
			fact=fact*i;
		}
		printf("%d",fact);
		sum=sum+fact;
	}
	if(sum==temp){
		printf("\n%d is a strong number",temp);
	}
	else{
		printf("\nIt is not a strong number");
	}
	count=0;
	printf("\nEnter a number:");
	scanf("%d",&a);
	for(j=1;j<=a;j++){
		if(a%j==0){
			count++;
		}
	}
	if(count==2){
		printf("\n%d is a prime number",a);
	}
	else{
		printf("\n NOT A PRIME NUMBER");
	}
}
