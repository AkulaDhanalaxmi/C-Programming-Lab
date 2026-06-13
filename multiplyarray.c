#include<stdio.h>
int main(){
	int a[100][100],b[100][100],c[100][100],i,j,k,m1,n1,m2,n2;
	printf("Enter number of rows and columns of Matrix A:\n");
	scanf("%d%d",&m1,&n1);
	printf("Enter number of rows and columns of Matrix B:\n");
	scanf("%d%d",&m2,&n2);
	printf("Enter the elements of Matrix A:\n");
	for(i=0;i<m1;i++){
		for(k=0;k<n1;k++){
			scanf("%d",&a[i][k]);
		}
	}
	printf("Enter the elements of Matrix A:\n");
	for(k=0;k<m2;k++){
		for(j=0;j<n2;j++){
			scanf("%d",&b[k][j]);
		}
	}
	printf("The Multiplication is:\n");
	if(n1==m2){
		for(i=0;i<m1;i++){
			for(j=0;j<n2;j++){
				for(k=0;k<m2;k++){
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
	}
	for(i=0;i<m1;i++){
		for(j=0;j<n2;j++){
			printf("%4d",c[i][j]);
		}
		printf("\n");
	}
	
}
