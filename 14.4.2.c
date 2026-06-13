#include<stdio.h>
struct attendance{
	int ID;
	char name[30];
	int days;
};
void display(struct attendance a[],int b);
int main(){
	struct attendance a[100];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Details of student %d:",i+1);
		scanf("%d",&a[i].ID);
		scanf("%s",a[i].name);
		scanf("%d",&a[i].days);
	}
	display(a,n);	
}
void display(struct attendance a[],int b){
	int i,max;
	for(i=0;i<b;i++){
		printf("Details:");
		printf("%d",a[i].ID);
		printf("%s",a[i].name);
		printf("%d",a[i].days);
	}
	max=a[0].days;
	for(i=0;i<b;i++){
		if(max<a[i].days){
			max=a[i].days;
		}
	}
	printf("Max:%d",max);
	
	
}
