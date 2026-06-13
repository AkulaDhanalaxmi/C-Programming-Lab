#include<stdio.h>
int main(){
	char a[3][20];
	int b[3];
	int i,j,z;
	for(i=0;i<3;i++){
		scanf("%s",&a[i]);
	}
	for(i=0;i<3;i++){
		scanf("%d",&b[i]);
	}
	char c[3][20];
	for(i=0;i<3;i++){
		scanf("%s",&c[i]);
	}
	printf("Name     Roll NO       Department");
	printf("\n---------------------------------");
	for(i=0;i<3;i++){
		printf("\n%s",a[i]);
		printf("%d",b[i]);
		printf("%s",c[i]);
	}
	
}
