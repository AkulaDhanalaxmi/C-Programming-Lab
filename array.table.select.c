#include<stdio.h>
int main(){
	int i,j,num[100],k,n,x;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the values of elements:");
	for(i=0;i<=n;i++){
		scanf("%d",&num[i]);
		L1:printf("\nSelect your index:\n");
		scanf("%d",&x);
		if(x>n){
			printf("\nWrong selection");
		goto L1;
		}
		else{
			for(j=1;j<=10;j++){
				k=num[x]*j;
				printf("%dX%d=%d\n",num[x],j,k);
			}
		}
	}
	
}
