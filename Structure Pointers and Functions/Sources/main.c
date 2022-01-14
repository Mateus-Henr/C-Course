/*  Author: Mateus Henrique
    Purpose: This program is my version for the "structure pointers and functions" challenge.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

#define INVALID_INPUT "\nInvalid Input. Type the information again.\n\n"
#define ALLOCATION_ERROR "Error while trying to allocate memory. Shutting the program down.\n"

// Structs are generally created globally and there's no harm to it since they are only
// allocate in memory when the a variable of that structure's type is declared.
struct Item
{
    char *name;
    int quantity;
    float price;
    float amount;
};


// Functions prototypes

void readItem(struct Item *item);

void printItem(const struct Item *item);

void clean_stdin(void);


int main(void)
{
    struct Item item;

    readItem(&item);
    printItem(&item);

    free(item.name);

    return 0;
}

/*
 * Creates an item by reading information from the user.
 *
 * @param   item   a pointer to an Item structure.
 */
void readItem(struct Item *item)
{
    while (true)
    {
        char itemName[CHAR_MAX];
        int itemQuantity;
        float itemPrice;

        printf("Enter the name of the item:\n");
        if (!fgets(itemName, CHAR_MAX, stdin))
        {
            printf(INVALID_INPUT);
            clean_stdin();
            continue;
        }

        unsigned int lastChar = strlen(itemName) - 1;
        if (itemName[lastChar] == '\n')
        {
            itemName[lastChar] = '\0';
        }

        printf("Enter the price of the item:\n");
        if (!scanf("%f", &itemPrice) || itemPrice < 0)
        {
            printf(INVALID_INPUT);
            clean_stdin();
            continue;
        }

        printf("Enter the quantity of items:\n");
        if (!scanf("%d", &itemQuantity) || itemQuantity < 0)
        {
            printf(INVALID_INPUT);
            clean_stdin();
            continue;
        }

        item->name = malloc(strlen(itemName) + 1);

        if (!item->name)
        {
            printf(ALLOCATION_ERROR);
            system("exit");
        }

        strcpy(item->name, itemName);
        item->price = itemPrice;
        item->quantity = itemQuantity;
        item->amount = (float) itemQuantity * itemPrice;
        break;
    }
}

/*
 * Prints information about the item passed in.
 *
 * @param   item   a pointer to an Item structure.
 */
void printItem(const struct Item *item)
{
    printf("\nInformations about the item:\n"
            "Name: %s\n"
            "Price: $%0.2f\n"
            "Quantity: %d\n"
            "Amount: $%0.2f\n",
            item->name, item->price, item->quantity, item->amount);
}

/*
 * Cleans the stdin for fixing problems related to the "scanf()" function.
 */
void clean_stdin(void)
{
    int c = getchar();

    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}