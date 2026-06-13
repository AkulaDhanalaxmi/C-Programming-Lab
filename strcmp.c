#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	int i,c=0,same,l=0;
	printf("Enter the string:");
	scanf("%s",a);
	printf("Enter the second string:");
	scanf("%s",b);
	for(i=0;a[i]!=0;i++){
		l=l+1;
	}
	printf("\nThe length of first string:%d",l);
	for(i=0;b[i]!=0;i++){
		c=c+1;
	}
	printf("\nThe length of second string:%d",c);
	if(l==c){
		for(i=0;i<l;i++){
			if(a[i]==b[i]){
				same=1;
    	    }
        }
        if(same=1){
        	printf("\nBoth the strings are equal");
		}
		else{
			printf("\nBoth the strings are not equal");
		}
    }
    else{
    	printf("Since the lengths are not equal..both are not same");
	}
}
				
			
	
	

