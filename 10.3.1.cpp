#include<stdio.h>
#include<string.h>
int main(){
	char str[100]="admin",str2[100]="Secure@123",a[100],b[100];
	printf("Enter Username:");
	gets(a);
	printf("Enter Password:");
	gets(b);
	if(strcmp(str,a)==0){
		if(strcmp(str2,b)==0){
			printf("Login Successful!");	
		}
		else{
			printf("Wrong password");
		}
}
	else{
		printf("Invalid username");
	}
}
