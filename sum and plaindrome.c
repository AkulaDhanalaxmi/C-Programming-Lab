#include<stdio.h>
int main(){
	int sum=0,i,temp,num;
	for(i=20;i<=190;i++){
		for(num=i;num>0;num/=10){
			temp=num%10;
			sum=sum+temp;
		}
	}
	printf("%d",sum);
}
