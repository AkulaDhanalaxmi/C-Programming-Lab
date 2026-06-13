#include<stdio.h>
void cumulativeSum(int b);
int main(){
	cumulativeSum(10);
	cumulativeSum(20);
	cumulativeSum(30);
}
void cumulativeSum(int b){
	static a=0;
     a+=b;
	printf("Cumulative Sum:%d",a);
}

