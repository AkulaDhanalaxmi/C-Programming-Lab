#include<stdio.h>
int main(){
	int a[100],n,i;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	large(a,n);
}
void large(int x[],int y){
	int max,i;
	max=x[0];
	for(i=0;i<y;i++){
		if(max<x[i]){
			max=x[i];
	    }
	}
	printf("Max:%d",max);
}
