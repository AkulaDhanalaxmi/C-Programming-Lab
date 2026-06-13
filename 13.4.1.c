#include<stdio.h>
int main(){
	const int emp_id[10];
	int n,i;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the IDS:");
	for(i=0;i<n;i++){
		scanf("%d",&emp_id[i]);
	}
	for(i=0;i<n;i++){
		printf("Direct Employee ID %d:%d",i+1,emp_id[i]);	
	}
	int *p=emp_id;
	for(i=0;i<n;i++){
		printf("pointer employee id %d:%d",i+1,*(p+i));
	}
	
}
