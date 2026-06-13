#include<stdio.h>
int main(){
	int i,count=0,sum=0;
	for(i=10;i>=2;i--){
		if(i%2==0){
			printf("\nThe even numbers are :%d",i);
			count++;
			sum=sum+i;
		}
	}
	printf("\nThe sum of the even numbers:%d",sum);
	printf("\nThe count of the even numbers is :%d",count);
	count=0;
	for(i=3;i<=17;i++){
		if(i%2==0){
			printf("\nThe even numbers:%d",i);
			count++;
			sum=sum+i;
		}
	}
	printf("\nthe sum of the even numbers:%d",sum);
	printf("\nThe count of the numbers:%d",count);
}
