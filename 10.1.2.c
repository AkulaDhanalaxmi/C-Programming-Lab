#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Enter your name:");
	gets(str);
	printf("Reversed Name:");
	strrev(str);
	puts(str);
	
}
