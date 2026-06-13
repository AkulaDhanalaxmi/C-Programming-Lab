#include<stdio.h>
int main(){
	int a[100][100],d[100][100],i,j,r,c,temp;
	printf("Enter the number of rows and columns:");
	scanf("%d%d",&r,&c);
	printf("Enter all the elements:");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	if(r==c){
		for(i=0;i<r;i++){
			for(j=i+1;j<c;j++){
				temp=a[i][j];
			    a[i][j]=a[j][i];
			    a[j][i]=temp;
     	    } 
        }
  
        printf("Transposed matrix:\n");
        for(i=0;i<r;i++){
        	for(j=0;j<c;j++){
        		printf("%4d",a[i][j]);
		    }
		    printf("\n");
    	}
	}
	else{
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				d[j][i]=a[i][j];
			}
		
    	}
    	for(i=0;i<c;i++){
			for(j=0;j<r;j++){
              	printf("%d",d[i][j]);
           }
           printf("\n");
       }
    	
	}
    
}
