#include<stdio.h>
int main(){
	int num[5],i,n,c;
	printf("Enter the numbers:");
	for(i=0;i<=4;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<=4;i++){
		for(n=1;n<=10;n++){
			c=num[i]*n;
		    printf("%dX%d=%d\n",num[i],n,c);
	    }
    }
}
