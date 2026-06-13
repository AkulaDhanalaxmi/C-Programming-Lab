#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int i,c_a=0,c_p=0,c_l=0,c_e=0;
	printf("Enter the string:");
	gets(a);
	for(i=0;i<strlen(a);i++){
		if(a[i]=='a'){
			c_a++;
		}
		else if(a[i]=='p'){
			c_p++;
		}
		else if(a[i]=='l'){
			c_l++;
		}
		else if(a[i]=='e'){
			c_e++;
		}
	}
	printf("%d",c_a);
	printf("%d",c_p);
	printf("%d",c_l);
	printf("%d",c_e);
}
	
	
