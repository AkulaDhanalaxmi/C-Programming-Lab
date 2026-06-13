#include<stdio.h>
#include<string.h>
int main(){
    char str[100],str1[100];
	int i,u=0,l=0,d=0,o=0;
    gets(str);
    if(strlen(str)>=8){
    	for(i=0;i<strlen(str);i++){
    		if(str[i]>='A' && str[i]<='Z'){
    			u++;
			}
			else if(str[i]>='a' && str[i]<='z'){
    			l++;
    	    }
    	    else if(str[i]>='0' && str[i]<='9'){
    			d++;
        	}
        	else{
        		o++;
			}
			
		}
		printf("%d %d %d %d",u,l,d,o);
	}
}
   
