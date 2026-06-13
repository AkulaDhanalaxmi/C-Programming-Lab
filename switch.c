#include<stdio.h>
int main(){
	int salaray=20000;
	int marks,exp,inc,choice;
	printf("Enter the employee marks:");
	scanf("%d",&marks);
	choice=marks/10;
	switch(choice){
		case 10:
		case 9:
		case 8:
			inc=salaray*0.20;
			printf("Total salaray is: %d",inc+salaray);
			break;
		case 7:
			inc=salaray*(15/100);
			printf("Total salaray is: %d",inc+salaray);
			break;
		case 6:
			printf("Enter the years of experience:");
			scanf("%d",&exp);
			if(exp<2)
				inc=salaray*(5/100);
			else
				inc=salaray*(10/100);
			printf("Total salaray is: %d",inc+salaray);
			break;
		case 5:
		case 4:
			printf("THERE IS NO INCREMENT:%d",salaray);
		case 3:
			printf("THE EMPLOYEE IS TERMINATED");
		default:
			printf("Enter the correct choice:");
	}
	
}
