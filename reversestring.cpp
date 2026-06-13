#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int i,l=0;
	printf("Enter the string to reverse:");
	scanf("%s",a);
	for(a[i]!='\0';i>=0;i--){
		printf("%c",a[i]);
	}
}
