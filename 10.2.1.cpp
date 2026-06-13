#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int i,count=0,c=0;
	printf("Enter the string:");
	gets(a);
	for(i=0;i<strlen(a);i++){
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
			count++;
		}
		else{
			c++;
		}
	}
	printf("\nThe number of vowels is:%d",count);
	printf("\nThe number of constants is:%d",c);
	
}
