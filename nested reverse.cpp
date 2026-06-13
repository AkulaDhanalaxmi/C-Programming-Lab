#include<stdio.h>
int main(){
	int rev,a,i,r;
	for(i=20;i<=40;i++){
		rev=0;
		a=i;
		for(;a>0;a=a/10){
			r=a%10;
			rev=rev*10+r;
		}
		printf("%d\n",rev);
	}
}
