#include<stdio.h>
struct emp {
	char name[30];
	int roll;
	float marks[3];
};
void display(struct emp e[]);	
int main(){
	struct emp e[3];
	int i,j;
	for(i=0;i<3;i++){
		scanf("%s",e[i].name);
		scanf("%d",&e[i].roll);
		for(j=0;j<3;j++){
			scanf("%f",&e[i].marks[j]);
		}
	}
	display(e);

}
void display(struct emp e[]){
	int i,j;
	for(i=0;i<3;i++){
		printf("%s",e[i].name);
		ptintf("%d",e[i].roll);
		for(j=0;j<3;j++){
			printf("%f",e[i].marks[j]);
		}
	}
	
}
