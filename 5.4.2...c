#include<stdio.h>
int main(){
	int s,e,i,count,sum,b=0,c=0,s_p=0,s_per=0;
	printf("Enter the start value:");
	scanf("%d",&s);
	printf("Enter the end value:");
	scanf("%d",&e);
	if(s<e){
		while(s<=e){
			i=1;
			count=0;
			while(i<=s){
				if(s%i==0){
					count++;
				
				}
				i++;
			}
			if(count==2){
				printf("Prime:%d\n",s);
				s_p=s_p+s;
				b++;
			}

			i=1;
			sum=0;
			while(i<s){
				if(s%i==0){
					sum=sum+i;
				}
				i++;
			}
			if(sum==s){
				printf("Perfect numbers:%d",s);
				s_per=s_per+s;
				c++;
			}
		s++;
		
		
		
		}
		
	}
	else{
		while(s>=e){
			i=1;
			count=0;
			sum=0;
			while(i<=s){
				if(s%i==0){
					count++;
				}
				i++;
			}
			if(count==2){
				printf("Prime:%d\n",s);
				s_p=s_p+s;
				s++;
			}

			sum=0;
			i=1;
			while(i<s){
				if(s%i==0){
					sum=sum+i;
				}
				i++;
			}
			if(sum==s){
				printf("\nPerfect numbers:%d",s);
				s_per=s_per+s;
				c++;
			}
		s--;
			
		}
	}
	printf("\nCount of prime:%d",b);
	printf("\nCount of perfect numbers:%d",c);
	printf("\nThe sum of prime numbers:%d",s_p);
	printf("\nThe sum pf perfect numbers:%d",s_per);
}
