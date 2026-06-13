#include<stdio.h>
int main(){
	int x=0,y;
	printf("Enter a number:");
	scanf("%d",&y);
	cal(&x,y);
	printf("SUM:%d",x);
	
}
void cal(int *sum,int n){
	int i;
	for(i=1;i<=n;i++){
		*sum=*sum+i;
	}
}
