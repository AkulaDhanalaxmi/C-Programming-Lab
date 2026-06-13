#include<stdio.h>
struct student{
	char name[30];
	int roll_no;
	int grade;	
};
int main(){
	struct student students[4];
	int i;
	for(i=0;i<4;i++){
		printf("Enter the details of student %d:",i+1);
		printf("\nEnter name:");
		scanf("%s",students[i].name);
		printf("Enter roll no:");
		scanf("%d",&students[i].roll_no);
		printf("Enter grade:");
		scanf("%d",&students[i].grade);
	}
	for(i=0;i<4;i++){
		printf("\nDetails of Student:%d\n",i+1);
		printf("NAME:%s\n",students[i].name);
		printf("ROLL NO:%d\n",students[i].roll_no);
		printf("GRADE:%d\n",students[i].grade);
    }
}
