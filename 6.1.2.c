#include<stdio.h>

int main() {
    int items[10], i, choice, num, add;
    printf("Enter the stock quantities for 10 items:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &items[i]);
        printf("Item %d: %d\n", i + 1, items[i]);
    }
    while(1){
        printf("\nInventory Management Menu:");
        printf("\n1. Display Out-of-Stock Items");
        printf("\n2. Restock an Item");
        printf("\n3. View Current Stock");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Out-of-Stock Items:\n");
                for (i = 0; i < 10; i++) {
                    if (items[i] == 0) {
                        printf("Item %d is out of stock.\n", i + 1);
                    }
                }
                break;

            case 2:
                printf("Enter the item number to restock (1-10): ");
                scanf("%d", &num);
                printf("Enter the quantity to add: ");
                scanf("%d", &add);
                items[num - 1] += add;
                printf("Item %d restocked. New stock: %d\n", num, items[num - 1]);
                break;

            case 3:
                printf("Current Stock:\n");
                for (i = 0; i < 10; i++) {
                    printf("Item %d: %d\n", i + 1, items[i]);
                }
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } 
}

