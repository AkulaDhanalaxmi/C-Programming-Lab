#include<stdio.h>
#include<math.h>
int main(){
	int num;
	int len=0;
	int s;
	int temp;
	scanf("%d",&num);
	temp=num;
	while(temp>0){
		temp/=10;
		len++;
	}
	printf("%d",len);
	s=(num%10)*(int)pow(10,len);
	printf("\n%d",s);		
}

