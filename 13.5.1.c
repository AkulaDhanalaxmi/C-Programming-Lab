#include<stdio.h>
int main(){
	float a[10];
	int n,i;
	float max,min,avg;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the values:");
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
	}
	float *p=a;
	max=*(p+0);
	min=*(p+0);
	for(i=0;i<n;i++){
		if(max<*(p+i)){
			max=*(p+i);
		}
		else if(min>*(p+i)){
			min=*(p+i);
		}
	}
	avg=max+min/2;
	printf("Max:%f",max);
	printf("Min:%f",min);
	printf("Avg:%f",avg);
	
}
