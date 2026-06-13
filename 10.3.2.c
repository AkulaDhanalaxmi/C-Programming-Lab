#include<stdio.h>
#include<string.h>
int main(){
	char s[100],a,i,u=0,l=0,d=0,z=0;
	printf("Enter the password to check:");
	gets(s);
	if(strlen(s)>=8){
		for(i=0;i<strlen(s);i++){
			if(s[i]>='A' && s[i]<='Z'){
				u=1;
			}
			else if(s[i]>='a' && s[i]<='z'){
				l=1;
			}
			else if(s[i]>='0' && s[i]<='9'){
				d=1;
			}
			else{
				z=1;
			}
	    }
    }
    if(u&&l&&d&&z){
    	printf("It is a Strong Password");
	}
	else{
		printf("Weak password!!...Please enter a strong password");
	}
}
