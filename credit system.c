#include <stdio.h>
#include <stdlib.h>

int main() {
    char next_customer; // Variable to check if there’s a next customer

    do {
        int credit_limit, price, quantity_of_items_purchased, value_of_goods;

        // Prompt user for their credit limit
        printf("Enter your credit limit:\n");
        scanf("%d", &credit_limit);

        // Prompt user for the price of items
        printf("Enter the price per item:\n");
        scanf("%d", &price);

        // Prompt user for the quantity of items they want to purchase
        printf("Enter the quantity of items to purchase:\n");
        scanf("%d", &quantity_of_items_purchased);

        // Calculate the total value of goods
        value_of_goods = quantity_of_items_purchased * price;

        // Check if the purchase exceeds the credit limit
        if (value_of_goods > credit_limit) {
            printf("Sorry, you cannot purchase goods worth such a value on credit.\n");
            printf("Enter a reduced quantity of items to purchase:\n");
            scanf("%d", &quantity_of_items_purchased);

            // Recalculate the total value after adjusting the quantity
            value_of_goods = quantity_of_items_purchased * price;
        }

        // Display the total value of goods
        printf("The total is: %d\n", value_of_goods);
        printf("THANK YOU FOR SHOPPING WITH US :)\n");
        printf("---------------------------------\n");

        // Prompt for the next customer
        printf("Next Customer? (Y/N)\n");
        scanf(" %c", &next_customer);

    } while (next_customer == 'Y' || next_customer == 'y'); // Allow both uppercase and lowercase 'Y'

    return 0;
}
