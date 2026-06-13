#include<stdio.h>
#include<math.h>
int main(){
	int num,len=0,sum,r,temp,rev,n,i,total,j,b,count;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	for(;temp>0;temp=temp/10){
		len++;
	}
	sum=0;
	temp=num;
	rev=0;
	total=0;
	for(;temp>0;temp=temp/10){
		r=temp%10;
		total=total+r;
		rev=rev*10+r;
		sum=sum+pow(r,len);
		
		
	}
	if(sum==num){
		printf("\n%d ARMSTRONG NUMBER",sum);
	}
	else{
		printf("\nNot an armstrong number");
	}
	printf("\nThe reverse  of a number is:%d",rev);
	n=rev;
	sum=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(sum==n){
		printf("\n%d is a perfect number",n);
	}
	else{
		printf("\nNot a perfect number");
	}
	printf("\nThe sum of the digits is:%d",total);
	total=b;
	count=0;
	for(j=1;j<=b;j++){
		if(b%j==0){
			count++;
		}
	}
	if(count==2){
		printf("\n%d is a prime number",b);
	}
	else{
		printf("\n%d is not a  prime number",b);	
	}	
}
