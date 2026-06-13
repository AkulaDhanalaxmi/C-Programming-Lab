#include<stdio.h>
int main(){
	int days,years,weeks,r_d;
	printf("enter the number of days:");
	scanf("%d",&days);
	years=days/365;
	days=days% 365;
	weeks=days/7;
	r_d=days% 7;
	printf("%d days is approximately %d years,%d weeks,and %d days.\n",days+years*365,years,weeks,r_d);
	return 0;
}
