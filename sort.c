#include<stdio.h>
int main(){
	int a[10],n,temp,i,j;
	printf("ENTER A NUMBER:");
	scanf("%d",&n);
	printf("Enter all the numbers:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
    	for(j=0;j<(n-1)-i;j++){
    		if(a[j]>a[j+1]){
    			temp=a[j];
    			a[j]=a[j+1];
    			a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("The sorting of the array is:%d\n",a[i]);
    }

	
}

