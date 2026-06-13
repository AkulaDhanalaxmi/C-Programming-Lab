#include<stdio.h>
int main(){
	int n,rev,r,i,num;
		rev=0;
		scanf("%d%d",&n,&num);
		while(n<=num){
			i=n;
			r=i%10;
			rev=(rev*10)+r;
			i=i/10;	
		}
	printf("%d",rev);
	n++;
}
