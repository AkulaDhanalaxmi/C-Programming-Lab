#include<stdio.h> 
int main(){
	int distance,weight,amount;
	printf("Enter the distance travelled and weight:");
	scanf("%d%d",&distance,&weight);
	if (distance>=500){
		if (weight>=100){
			printf("Amount required is Rs.5");
		}
		else if(weight>=10&& weight<100){
			printf("The amount required is Rs.6");
		}
		else{
			printf("The amount required is Rs.7");
		}
	}
	else if(distance<500){
		if (weight>=100){
			printf("The amount required id Rs.8");
		}
		else if(weight<100){
			printf("The amount required is Rs.5");
		}   
	}

}
