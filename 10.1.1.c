#include<stdio.h>
#include<string.h>
int main(){
	char str[100],str2[100];
	printf("Enter Username:");
	gets(str);
	printf("Enter Password:");
	gets(str2);
	if(strcmp(str,"admin")==0 && strcmp(str2,"secure123")==0){
		printf("Login Successful!");
	}
	else{
		printf("Invalid Credentials!");
	}
}
