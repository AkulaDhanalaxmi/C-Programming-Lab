#include<stdio.h>
int main(){
	int sum=0,i,temp,num,rev=0,m,r;
	for(i=20;i<=190;i++){
		sum=0;
		rev=0;
		for(num=i;num>0;num/=10){
			temp=num%10;
			sum=sum+temp;		
		}
		printf("\nThe sum of the digits %d is:%d",i,sum);
		rev=0;
	    for(m=sum;m>0;m/=10){
	    	r=m%10;
		    rev=rev*10+r;
		}
		if(rev==sum){
			printf("\n%d is a palindrome",rev);
		}
		else{
			printf("\n%d is not a palindrome",rev);
		}
	}
}
