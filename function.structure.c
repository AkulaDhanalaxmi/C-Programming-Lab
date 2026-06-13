#include<stdio.h>
struct Emp{
	char num[20];
	int salaray;
	float points;
};
void main(){
	struct Emp e;
	e=input();
	display(e);
}
struct Emp input(){
	struct Emp e2;
	scanf("%s",e2.name);
	scanf("%d",&e2.salaray);
	scanf("%f",&e2.points);
	return e2;
}
void display(struct Emp e3){
	printf("\s \n %d \n %f \n",e2.name,e2.salaray,e2.points);
}
