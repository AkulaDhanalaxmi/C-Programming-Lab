#include<stdio.h>
int main(){
	int a[100][100],b[100][100],c[100][100],i,j,m1,m2,n1,n2,max_c;
	printf("Enter the number of rows and columns for Array A:\n");
	scanf("%d%d",&m1,&n1);
	printf("Enter the number of rows and columns for Array B:\n");
	scanf("%d%d",&m2,&n2);
	
	printf("Enter all the values of a:\n");
	for(i=0;i<m1;i++){
		for(j=0;j<n1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the values of b:\n");
	for(i=0;i<m2;i++){
		for(j=0;j<n2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("Total:\n");
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
		max_c=c[0][0];
		for(i=0;i<m1;i++){
			for(j=0;j<n1;j++){
				if(c[i][j]>max_c){
					max_c=c[i][j];
				}
	     	}
		}
		printf("Maximum element in the sum matrix: %d\n", max_c);
	}
	else{
		printf("Enter the correct order for addition");
    }
	
}
