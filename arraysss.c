#include<stdio.h>
int main(){
	int marks[10],i,count=0,sum=0,min,max;
	float average;
	for(i=0;i<=9;i++){
		printf("Enter the marks of 10 students:");
		scanf("%d",&marks[i]);
		count++;
		sum=sum+marks[i];
	}
	printf("\n%d",count);
	printf("\n%d",sum);
	average=(float)sum/count;
	printf("\nThe average of the students is:%.2f",average);
	max=min=marks[0];
	for(i=1;i<10;i++){
		if (marks[i]>max){
			max=marks[i];
		}
		else if(marks[i]<min){
			min=marks[i];
		}
	}
	printf("\nThe highest value is:%d",max);
	printf("\nThe lowest value is:%d",min);
}
