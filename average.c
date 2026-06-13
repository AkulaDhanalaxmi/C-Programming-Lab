#include<stdio.h>
int main(){
	float w1,w2,i1,i2;
	float averagevalue;
	printf("Enter weight of item1:");
	scanf("%f",&w1);
	printf("Enter number of purchases for item1:");
	scanf("%f",&i1);
	printf("Enter the weight of item2:");
	scanf("%f",&w2);
	printf("Enter number of purchases for item2:");
	scanf("%f",&i2);
	averagevalue=(w1*i1+w2*i2)/(i1+i2);
	printf("The average value of the item is:%.2f\n",averagevalue);
	return 0;
}
