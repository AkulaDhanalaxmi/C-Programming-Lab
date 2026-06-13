#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i;
	printf("Enter the String:");
	gets(str);
	for(i=0;i<strlen(str);i++){
		if(str[i]>='A' && str[i]<='Z'){
			strlwr(str);
		}
		else if(str[i]>='a' && str[i]<='z'){
	        strupr(str);
    	}
	}
	printf("%s",str);
}
