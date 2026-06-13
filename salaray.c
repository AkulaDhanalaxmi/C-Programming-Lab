#include<stdio.h>
#define DA 2000
#define HRA 1000
int main(){
	int emp_id,basic_salaray,grade_p,experience,total_salaray;
	printf("Enter the employee ID:");
	scanf("%d",&emp_id);
	scanf("%d",&basic_salaray);
	printf("Enter the experience:");
	scanf("%d",&experience);
	printf("Enter the grade:");
	scanf("%d",&grade_p);
	if (grade_p>=70 && experience>=10){
		total_salaray=DA+HRA+basic_salaray+(grade_p*100);
		printf("The salaray of the employee can be increased: %d",total_salaray);
	}
	else if(grade_p>=70 && 5>experience<10){
		total_salaray=DA+HRA+basic_salaray+(grade_p*50);
		printf("The salaray of the employee can be increased as: %d",total_salaray);
	}
	else if(grade_p>=70 && 1>experience<5){
		total_salaray=DA+HRA+basic_salaray+(grade_p*30);
		printf("The salaray of the employee can be increased as:%d",total_salaray);
	}
	else{
		total_salaray=DA+HRA+basic_salaray;
		printf("The salaray remains same as %d",totl_salaray);
	}
	
	printf("Enter the basic salaray of the employee:");
}
