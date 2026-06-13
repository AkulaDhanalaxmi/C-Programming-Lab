#include<stdio.h>
void battery(int *b);
int main(){
	int battery,*p;
	p=&battery;
	battery(*p);
}
void battery(int *b){
	while(1){
		printf("Enter the battery:");
	    scanf("%d",p);
	    if(*p<50){
	    	*p=*p+10;
	    	printf("Battery:%d",*p);
	    	if(*p<100){
	    		battery()
			}	
		}
		printf("Battery full");
		if(*p>50){
	    	*p=*p-10;
	    	printf("Battery:%d",*p);
	    	if(*p<0){
	    		printf("low battery")
			}
     }
	}
}
