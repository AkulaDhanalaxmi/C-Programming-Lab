#include<stdio.h>
int main(){
	int a[100][100],r,c,i,j,sum=0;
	printf("Enter the number of rows and columns:\n");
	scanf("%d%d",&r,&c);
	printf("Enter the elements of matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	if(r==c){
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(i>j){
					a[i][j]=0;
				}
	     	}
    	}
		
	}
	printf("The upper triangular matrix is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	if(r==c){
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(i<j){
					a[i][j]=0;
				}
	     	}
    	}
		
	}
	printf("The lower triangular matrix is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}
