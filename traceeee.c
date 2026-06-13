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
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==j){
				sum+=a[i][j];
		 	}
		}
	}
	printf("The trace of the array is:%d",sum);
}
