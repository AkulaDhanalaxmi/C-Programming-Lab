#include<stdio.h>
int main(){
	int num,i,count,j=1;
	num=2;
	while(num<=30){
		count=0;
		i=num;
		while(j<=i){
			if(i%j==0){
				count++;
			}
		i++;
	    }
		if(count==2){
			printf("\n%d",num);
		}
	num++;
	}
	
}
