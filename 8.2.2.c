#include<stdio.h>
int main(){
	int a[10][20]={0},i,j,r,c;
	char choice;
	printf("Enter all the elements:\n");
	while(1){
	    printf("Enter row number:");
	    scanf("%d",&r);
		printf("Enter the column number:");
		scanf("%d",&c);
		if(a[r][c]==0){
			a[r][c]=1;
			printf("Seat Successfully booked at row %d and column %d",r,c);
		}
		else{
			printf("Seat already booked!Please Choose another seat.");
		}
	    printf("Updated Seating Arrangement:\n");
	    for(i=0;i<10;i++){
	    	for(j=0;j<20;j++){
	    		printf("%d",a[i][j]);
	    	}
	    	printf("\n");
	   }
		
	}
}
