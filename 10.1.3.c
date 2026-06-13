#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100],c;
	printf("Enter the name of the employee:");
	gets(a);
	printf("Enter the email to add");
	gets(b);
	strlwr(a);
	strcat(a,b);
	puts(a);
}
