#include<stdio.h>
int main(){
	int items[10],i,choice,num,add;
	printf("Enter the stock quantities for 10 items:");
	for(i=0;i<=9;i++){
		scanf("%d",&items[i]);
		printf("Item %d:%d\n",i+1,items[i]);
	}
	do{
		printf("\nInventory Management Menu:");
	    printf("\n1.Display Out-of-Stock Items");
	    printf("\n2.Restock an Item");
	    printf("\n3.View Curremt Stock");
	    printf("\n3.Exit");
	    printf("\nEnter your choice:");
	    scanf("%d",&choice);
	    switch(choice){
	    	case 1:
	    		printf("Out-of-stock");
			    for(i=0;i<=9;i++){
				    if(items[i]==0){
					    printf("Item out of stock");
			        }
			        else{
			    	    printf("There is no outstock items");
			        }
		        }
			    break;
		    case 2:
			    printf("Enter the item number to restock(1-10):");
			    scanf("%d",&i);
			    printf("Enter the quantity to add:");
			    scanf("%d",&add);
			    items[i]+=add;
			    printf("Item %d restocked.New stock %d\n",num,items);
		    case 3:
			printf("View current stock:");
			for(i=0;i<=9;i++){
				printf("%d",items[i]);
			}
			break;
		case 4:
			printf("Exit");

			
	}
	
}
