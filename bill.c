#include<stdio.h>
int main(){
	int i=5;
	do{
		printf("i=%d\n",i);
		i++;
		if(i==8){
			continue;
		}
	}
	while( i<=10);
}
