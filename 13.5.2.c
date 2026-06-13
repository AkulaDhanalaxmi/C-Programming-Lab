#include<stdio.h>
int main(){
	int a[10];
	int n,i;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the values:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int *p=a;
	int c=0;
	for(i=0;i<n;i++){
		if(*(p+i)==0){
			printf("Available seats:%d",i+1);
			c++;	
		}
	}
	if(c==0){
		printf("No seats are available");
	}
}


