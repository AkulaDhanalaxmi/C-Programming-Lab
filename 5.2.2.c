#include<stdio.h>
int main(){
	int num,count=0,sum=0,i,temp,rev,r,j;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(sum==num){
		printf("\n%d is a perfect number",num);
	}
	else{
		printf("\n%d is not a perfect number",num);
		rev=0;
		temp=num;
		for(;temp>0;temp=temp/10){
			r=temp%10;
			rev=rev*10+r;
		}
		printf("\nReverse of number:%d",rev);
		
		if(rev==num){
			printf("\n%d is a palindrome",num);
		}
		else{
			printf("\n%d is not a palindrome",num);
			count=0;
			for(j=1;j<=num;j++){
				if(num%j==0){
					count++;
				}
			}
			temp=num;
			if(count==2){
				printf("\n%d is a prime number",temp);
			}
			
		}
	}
}
