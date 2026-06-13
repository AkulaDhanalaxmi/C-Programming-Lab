#include<stdio.h>
#include<math.h>
int main(){
	int num,temp;
	int len,sum;
	int s,r,a_s;
	scanf("%d",&num);
	temp=num;
	for(len=0;temp>0;len++){
		temp/=10;
		len++;
	}
	printf("%d",len);
	for(temp=num;temp>0;temp/=10){
		s=temp%10;
		sum=sum+pow(s,len);
		sum=sum/10;
	};
	printf("%d",sum);	
}

