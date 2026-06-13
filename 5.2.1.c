#include<stdio.h>
#include<math.h>
int main(){
	int num,i,temp,count,c,fact;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num%2==0){
		printf("\n%d is an even number",num);
	}
	else{
		temp=num;
		count=0;
		printf("\n%d is not an even number",temp);
		for(i=1;i<=temp;i++){
			if(temp%i==0){
				count++;
			}
		}
		if(count==2){
			printf("\n%d is a prime number",temp);
		}
		else{
			printf("\n%d is not a prime number",temp);
			c=(int)sqrt(temp);
			if(c*c==temp){
				printf("\n%d is a perfect square",temp);
			}
			else{
				printf("\n%d is not a perfect square",temp);
				fact=1;
				temp=num;
				for(i=1;i<=temp;i++){
					fact=fact*i;
				}
				printf("\n%d",fact);
			}
		}
	}
}
