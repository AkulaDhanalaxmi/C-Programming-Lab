#include<stdio.h>
int large(int a[],int n);
int main(){
	int a[100],n,max_,i;
	printf("Enter the number of palyers:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max_=large(a,n);
	printf("%d",max_);
	int large(int a[],int n){
		max_=a[0];
		for(i=0;i<n;i++){
			if(max_>a[i]){
				max_=a[i];
			}
		}
	}
	return max_;
}
