#include<stdio.h>
int main(){
	int a[100][100],r,c,i,j,sum;
	printf("Enter the number of rows and columns:");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		sum=0;
		for(j=0;j<c;j++){
			if(i==j){
				sum+=a[i][j];
				printf("%d",sum);
			}
		}	
	}
}
