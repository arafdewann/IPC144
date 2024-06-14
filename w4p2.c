/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P2)
Full Name  : MD Arafat Koyes
Student ID#: XXXX
Email      : XXXX@myseneca.ca
Section    : XXX
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void grocery_shopping();
int get_quantity(const char* item_name);
void pick_items(const char* item_name, int needed, int limit);

int main() {
    grocery_shopping();
    return 0;
}

void grocery_shopping() {
    while (1) {
        printf("Grocery Shopping\n");
        printf("================\n");

        int apples = get_quantity("APPLES");
        int oranges = get_quantity("ORANGES");
        int pears = get_quantity("PEARS");
        int tomatoes = get_quantity("TOMATOES");
        int cabbages = get_quantity("CABBAGES");

        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n");

        pick_items("APPLES", apples, 10);
        pick_items("ORANGES", oranges, 20);
        pick_items("PEARS", pears, 5);
        pick_items("TOMATOES", tomatoes, 15);
        pick_items("CABBAGES", cabbages, 0);

        int choice;
        printf("\nDo another shopping? (0=NO): ");
        scanf("%d", &choice);
        if (choice == 0) {
            printf("\nYour tasks are done for today - enjoy your free time!\n");
            break;
        }
    }
}

int get_quantity(const char* item_name) {
    int quantity;
    while (1) {
        printf("How many %s do you need? : ", item_name);
        scanf("%d", &quantity);
        if (quantity >= 0) {
            return quantity;
        }
        else {
            printf("ERROR: Value must be 0 or more.\n");
        }
    }
}

void pick_items(const char* item_name, int needed, int limit) {
    printf("\nPick some %s... how many did you pick? : ", item_name);
    int picked;
    while (1) {
        scanf("%d", &picked);
        if (picked < 1) {
            printf("ERROR: You must pick at least 1!\n");
        }
        else if (picked > limit) {
            printf("You picked too many... only %d more %s(S) are needed.\n", limit, item_name);
        }
        else {
            break;
        }
    }

    if (picked == needed) {
        printf("Great, that's the %s done!\n", item_name);
    }
    else {
        printf("Looks like we still need some %s...\n", item_name);
        int remaining = needed - picked;
        pick_items(item_name, remaining, limit);
    }
}

