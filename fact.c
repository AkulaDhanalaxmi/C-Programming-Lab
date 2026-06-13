#include<stdio.h>
#include<math.h>
int main(){
	int num,i,fact=1;
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("%d",fact);
}
