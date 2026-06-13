#include<stdio.h>
int main(){
	int a[100][100],i,j,r,c,temp;
	printf("Enter the number of rows and columns:");
	scanf("%d%d",&r,&c);
	printf("Enter all the elements:");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
     	} 
    }
    for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%4d",a[j][i]);
		}
		printf("\n");
	}
    
}
