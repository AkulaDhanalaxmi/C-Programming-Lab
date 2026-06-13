#include<stdio.h>
int main() {
	int a[100][100],b[100][100],c[100][100],i,j,n1,m1,n2,m2,max,sum;
	printf("ENTER THE VALUES OF N1 AND M1 :");
	scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
	for(i=0; i<n1; i++) {
		for(j=0; j<m1; j++) {
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<n2; i++) {
		for(j=0; j<m2; j++) {
			scanf("%d",&b[i][j]);
		}
	}
	if(n1==n2 && m1==m2){
	    for(i=0; i<n1; i++) {
	        for(j=0; j<m1; j++) {
	            c[i][j]=b[i][j]-a[i][j];
	           printf("%d",c[i][j]);
	        }
	        printf("\n");
		}
		sum=0;
		for(j=0;j<m1;j++){
		    sum=sum+c[0][j];
		    
		}
		max=sum;
		for(i=0; i<n1; i++) {
		    sum=0;
	        for(j=0; j<m1; j++) {
	            sum=sum+c[i][j];
	        }
	        printf("Row %d:%d",i+1,sum);
	        if(max<sum){
	            max=sum;
	        }
		}
		printf("MAX:%d",max);
	}
}
