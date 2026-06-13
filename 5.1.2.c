#include<stdio.h>
int main(){
	int rev,num,r,temp,i,count,a,c,sum;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	for(;temp>0;temp=temp/10){
		r=temp%10;
		rev=rev*10+r;
    }
    printf("\nThe reverse of the number is:%d",rev);
    if(rev==num){
    	printf("\n%d is a palindrome",num);
	}
	else{
		printf("\n%d is not a palindrome",num);
	}
	count=0;
	temp=num;
	for(i=1;i<=temp;i++){
		if(temp%i==0){
			count++;
		}
	}
	if(count==2){
		printf("\n%d is a prime number",temp);
	}
	else{
		printf("\n%d is not a  prime number",temp);
		temp=num;
		sum=0;
		for(;temp>0;temp=temp/10){
			c=temp%10;
			sum=sum+c;
		}
		printf("\nsum of the digits:%d",sum);
		if(sum%2==0){
			printf("\n%d is an even number",sum);
			if(sum%5==0){
				printf("Multiple of 5");
			}
		}
		
	}
	
}
