#include<stdio.h>
void update(int *p,int n);
int main(){
	int a[10];
	int n,i;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the values:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	update(a,n);
	printf("UPDATE:");
	for(i=0;i<n;i++){
		a[i]=a[i]+a[i]*0.10;
		printf("\n%d",a[i]);
	}
}
void update(int *p,int n){
	int i;
	for(i=0;i<n;i++){
		*(p+i)=*(p+i)+*(p+i)*0.10;
	}
}
