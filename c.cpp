#include<stdio.h>
int main(){
	int a[2][2],i,j,r,c;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	do{
		printf("Enter row number:");
	    scanf("%d",&r);
		printf("Enter the column number:");
		scanf("%d",&c);
		if(a[r][c]==0){
			a[r][c]=1;
		}
		else{
			a[r][c]=1;
		}
	    printf("Updated Seating Arrangement:");
	    for(i=0;i<2;i++){
	    	for(j=0;j<2;j++){
	    		printf("%d",a[i][j]);
	    	}
	   }
	   
    }
    while(1);	
	}
