#include<stdio.h>
struct emp {
	char name[30];
	int roll;
	float marks[3];
};
void display(struct emp e[],float avg);	
int main(){
	struct emp e[3];
	int i,j;
	float avg=0;
	for(i=0;i<3;i++){
		scanf("%s",e[i].name);
		scanf("%d",&e[i].roll);
		for(j=0;j<3;j++){
			scanf("%f",&e[i].marks[j]);
		}
		avg+=e[i].marks[i];
	}
	display(e,avg);

}
void display(struct emp e[],float avg){
	int i,j;
	for(i=0;i<3;i++){
		if(avg>75){
			printf("%s",e[i].name);
		    printf("%d",e[i].roll);
		    for(j=0;j<3;j++){
		    	printf("%f",e[i].marks[j]);
		    }
		    printf("AVG:%f",avg);
		}
		else{
			printf("%s",e[i].name);
		    printf("%d",e[i].roll);
		    for(j=0;j<3;j++){
		    	printf("%f",e[i].marks[j]);
		    }
		    printf("AVG:%f",avg);
		}
	}
	
	
}
