#include<stdio.h>
int main(){
	int target,points,bonus;
	printf("Enter number of targetss achived in one month:");
	scanf("%d",&target);
	printf("Enter the number of points:");
	scanf("%d",&points);
	if(1>target<5){
		printf("The employyeee acheives %d points",target*points);
	}
	else if(target>5){
		printf("Enter the bonus:");
		scanf("%d",&bonus);
		points=points+bonus;
		printf("The employyeee acheives %d points",points*target);
	}
	else{
		printf("The employee has achived 0 points");
	}
	
}
