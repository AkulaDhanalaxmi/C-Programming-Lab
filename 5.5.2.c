#include<stdio.h>
int main(){
	int choice,grade=0,a;
	int count=0;
	while(1){
		printf("\nGrade Management system");
	    printf("\n1.Add Grade");
	    printf("\n2.View Grades");
	    printf("\n3.calculate Average");
	    printf("\n4.Exit");
	    printf("\nEnter your choice:");
	    scanf("%d",&choice);
	    switch(choice){
		    case 1:
		    	printf("Enter grade(0-100):");
			    scanf("%d",&a);
			    if(a>=0 && a<=100){
			    	grade=grade+a;
			        count++;
			        printf("Grade added successfully!");
				}
			    else{
			    	printf("invalid grade");
				}
			    break;
			case 2:
				printf("All grades:%d",grade);
				break;
			case 3:
				printf("Average:%d",grade/count);
				break;c
			case 4:
				printf("Exit");
		}
	}
}
