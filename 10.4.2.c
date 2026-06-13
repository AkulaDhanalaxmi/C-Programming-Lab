#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int i;
	printf("Enter the string:");
	gets(s);
	for(i=0;i<strlen(s);i++){
		s[i]=s[i]+3;
	}
	puts(s);
}
