#include<stdio.h>
#include<string.h>
int main(){
	char str[100],str1[100];
	printf("Enter the string:");
	scanf("%s",str);
	printf("Enter another string:");
	scanf("%s",str1);
	if(strcmp(str,str1)==0){
		printf("Both the strings are equal");
	}
	else{
		printf("Both the strings are not equal");
	}
}
