#include<stdio.h>
#include<math.h>
int main(){
	int n,last_part,sq,temp,digits=0;
	printf("enter the number:");
	scanf("%d",&n);
	sq=n*n;
	temp=n;
	for(;temp>0;temp/=10)
	{
		digits++;
		last_part=sq%(int)pow(10,digits);
	}
	if(last_part==n){
		printf("automorphic number");
	}
	else{
		printf("not an automorphic number");
	}
}
