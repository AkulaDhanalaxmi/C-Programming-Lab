#include<stdio.h>
int main(){
	int i,j,num[10],k,n,x;
	scanf("%d",&n);
	printf("Enter the values of elements:");
	for(i=0;i<=n;i++){
		scanf("%d",&num[i]);
		l1:printf("Select your multiplication table:\n");
		scanf("%d",&x);
		if(x>n){
			printf("Wrong selection");
		}
		else{
			for(j=1;j<=10;j++){
				k=num[x]*j;
				printf("%dX%d=%d",num[x],j,k);
			}
		}
	}
	
}
