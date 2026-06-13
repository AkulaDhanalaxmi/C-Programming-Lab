#include<stdio.h>
int main(){
	int marks,choice;
	printf("Enter marks:");
	scanf("%d",&marks);
	choice=marks/10;
	switch(choice){
	case 10:
	case 9:
	case 8:
		if(marks>=95){
		    printf("A+ grade");
	    }
	    else{
	    	printf("A grade");
		}
		break;
	case 7:
		printf("B grade");
		break;
	case 6:
		printf("C grade");
		break;
	case 5:
		printf("D grade");
		break;
	case 4:
	case 3:
	case 2:
	case 1:
		printf("F grade");
	default:
		printf("INVALID");
	}   
}
