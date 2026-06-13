#include<stdio.h>
int main(){
	int a[100][100],b[100][100],c[100][100],i,j,m1,m2,n1,n2,max_c,max_month;
	int t_p[100]={0};
	printf("Enter the number of rows and columns for Sales Matrix:\n");
	scanf("%d%d",&m1,&n1);
	printf("Enter the number of rows and columns for Expenses Matrix:\n");
	scanf("%d%d",&m2,&n2);
	
	printf("Sales Matrix:\n");
	for(i=0;i<m1;i++){
		printf("Month %d:",i+1);
		for(j=0;j<n1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Expenses Matrix:\n");
	for(i=0;i<m2;i++){
		printf("Month %d:",i+1);
		for(j=0;j<n2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("Profit/Loss Matrix:\n");
	if(m1==m2 && n1==n2){
		for(i=0;i<m1;i++){
			for(j=0;j<n1;j++){
				c[i][j]=a[i][j]-b[i][j];
				t_p[i]+=c[i][j];
				printf("%4d",c[i][j]);
			}
			printf("\n");
		}
		max_month=0;
		for (i=0; i<m1; i++) {
			if (t_p[i]>max_c) {
				max_c=t_p[i];
                max_month=i+1;
            }
        }
        printf("Month with the highest profit: Month %d with %d total profit.\n", max_month, max_c);
	}
}
