#include<stdio.h>
int main(){
	int a[5][10],i,j,max,min;
	float c;
	for(i=0;i<5;i++){
		printf("City %d:",i+1);
		for(j=0;j<10;j++){
			
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++){
			max=a[i][0];
			min=a[i][0];
			
		for(j=0;j<10;j++){
			if(max<a[i][j]){
				max=a[i][j];
			}
			else if(min>a[i][j]){
				min=a[i][j];
			}
		}
		c=min+max;
		printf("\nFor city %d:Hottest:%d,Coldest:%d,Average:%.2f",i+1,max,min,(float)c/2);
	}
	
}
