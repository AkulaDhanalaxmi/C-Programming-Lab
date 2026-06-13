#include<stdio.h>
int main(){
	int distance,fuel;
	printf("The distance travelled is:");
	scanf("%d",&distance);
	if (distance>=10){
		fuel=distance*10;
		printf("The amount of fuel is %d",fuel);
	}
	else{
		printf("The amount of fuel is must be 100");
	}	
}
