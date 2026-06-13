#include<stdio.h>
int main(){
	int a[100][100],b[100][100],c[100][100],i,j,m1,m2,n1,n2;
	printf("Enter the number of rows and columns for both a and b:");
	scanf("%d%d%d%d",&m1,&n1,&m2,&n2);
	printf("Enter all the values of a:");
	for(i=0;i<m1;i++){
		for(j=0;j<n1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the values of b:");
	for(i=0;i<m2;i++){
		for(j=0;j<n2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("The addition of the arrays is: \n");
	if(m1==m2 && n1==n2){
		for(i=0;i<m1;i++){
			for(j=0;j<n1;j++){
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		for(i=0;i<m1;i++){
			for(j=0;j<n1;j++){
				printf("%4d",c[i][j]);
			}
			printf("\n");
		}
	}
	else{
		printf("Enter the correct order for addition");
    }
	
}
