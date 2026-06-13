 #include<stdio.h>
int main(){
	int st;
	char a;
	int count_p=0,count_a=0,count_i=0,i;
	printf("Enter total number of students:");
	scanf("%d",&st);
	for(i=1;i<=st;i++){
		printf("\nEnter the attendance of student %d:",i);
		scanf(" %c",&a);
		if(a=='P'){
			printf("\nStudent %d marked as present",i);
			
			count_p++;
		}
		else if(a=='A'){
			printf("\nStudent %d marked as ABSENT",i);
			
			count_a++;
		}
		else{
			printf("\nInvalid Attendance");
			count_i++;
			i--;
			
		}
	}
	printf("\nAttendance Summary");
	printf("\nTotal students:%d",st);
	printf("\nTotal Students present:%d",count_p);
	printf("\nTotal students absent:%d",count_a);
	printf("\nInvalid entries:%d",count_i);
}
