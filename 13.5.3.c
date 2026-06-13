#include<stdio.h>
void sorting(int *p,int n,int z);
void display(int *p,int n);
int main(){
	int a[10];
	int n,i,z;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the value of z:");
	scanf("%d",&z);
	printf("Enter the values:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sorting(a,n,z);
	display(a,n);	
}
void sorting(int *p,int n,int z){
	int i,j,temp;
	if(z==1){
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(*(p+i)>*(p+j)){
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
					
				}
			}
		}
	}
	else if(z==0){
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(*(p+i)<*(p+j)){
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
					
				}
			}
		}
		
	}
	
}
void display(int *p,int n){
	int i;
	for(i=0;i<n;i++){
		printf(" %d",*(p+i));
	}
}
