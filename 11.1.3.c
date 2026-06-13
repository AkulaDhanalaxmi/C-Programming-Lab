#include<stdio.h>
int main(){
	int n;
	printf("Enter number of patients:");
	scanf("%d",&n);
	structure(n);
}
void structure(int x){
	char name[100],disease[100];
	int age,i;
	for(i=0;i<x;i++){
		printf("Enter the details for patient %d:",i+1);
		printf("\nEnter name of the patient:");
	    scanf("%s",name);
	    printf("Enter Age:");
	    scanf("%d",&age);
	    printf("Enter disease:");
	    scanf("%s",disease);
		printf("Name:%s\n",name);
		printf("Age:%d\n",age);
		printf("Disease:%s\n",disease);	
	}
}
