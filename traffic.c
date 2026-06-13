#include<stdio.h>
int main(){
	char light;
	printf("Enter light mode:");
	scanf("%c",&light);
	if(light=='G'){
		printf("The vehicle can move");
	}
	else if(light=='Y'){
		printf("The vehicle should prepare to stop");
	}
	else if(light=='R'){
		printf("The vehiche must stop");
	}
	else{
		printf("FOLLOW THE TRAFFIC POLICE INSTRUCTIONS");
	}
}
