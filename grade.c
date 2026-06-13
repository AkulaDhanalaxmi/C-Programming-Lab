#include<stdio.h>
int main(){
	int score;
	printf("Enter score:");
	scanf("%d",&score);
	if(score>=90){
		printf("A grade");
	}
	else if(score>80 && score<89){
		printf("B grade");
	}
	else if(score>70 && score<79){
		printf("C grade");
	}
	else if(score>60 && score<69){
		printf("D grade");
	}
	else(score<=60){
		printf("F grade");
	}
	
}
