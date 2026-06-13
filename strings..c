#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	int i=0,l=0,j;
	printf("Enter the string:");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++){
		l=l+1;	
	}
	printf("Length of the string:%d",l);
	/*printf("\nThe reverse of the string is:");
	for(i=l-1;i>=0;i--){
		printf("%c",a[i]);
	}*/
	for(j=0,i=l-1;i>=0;j++,i--){
		b[j]=a[i];
	}
	b[l]='\0';
	printf("%s",b);
}
