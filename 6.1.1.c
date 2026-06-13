#include<stdio.h>
int main(){
	int num[10],max,i,min,sum;
	printf("Enter all the marks:");
	for(i=0;i<=9;i++){
		scanf("%d",&num[i]);
	}
	max=num[0];
	min=num[0];
	sum=0;
	for(i=0;i<=9;i++){
		if(num[i]>max){
			max=num[i];
		}
		else if(num[i]<min){
			min=num[i];
	    }
	    sum=sum+num[i];
	    
	}
	printf("Heightest Marks:%d",max);
	printf("\nLowest Marks:%d",min);
	printf("\nAverage Marks:%.2f",(float)sum/10);
}
